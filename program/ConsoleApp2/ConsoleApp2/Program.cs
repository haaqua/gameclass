using System;
using System.Threading;
using System.Collections.Generic;
using System.Linq;

class Program
{
    // === 페르소나와 스킬 클래스 정의 ===
    public class Skill
    {
        public string Name { get; set; }
        public float Power { get; set; }
        public int SP { get; set; }

        public Skill(string name, float power, int sp)
        {
            Name = name;
            Power = power;
            SP = sp;
        }
    }

    public class Persona
    {
        public string Name { get; set; }
        public List<Skill> Skills { get; set; }

        public Persona(string name, List<Skill> skills)
        {
            Name = name;
            Skills = skills;
        }
    }

    // === 캐릭터 클래스 정의 ===
    public class Player
    {
        public string Name { get; set; }
        public float HP { get; set; }
        public float MaxHP { get; set; }
        public int SP { get; set; }
        public int MaxSP { get; set; }
        public Persona EquippedPersona { get; set; }
        public List<Persona> PersonaList { get; set; }

        public Player(string name, float maxHp, int maxSp, Persona initialPersona)
        {
            Name = name;
            MaxHP = maxHp;
            HP = maxHp;
            MaxSP = maxSp;
            SP = maxSp;
            EquippedPersona = initialPersona;
            PersonaList = new List<Persona> { initialPersona };
        }

        public void DisplayStatus()
        {
            SetTextColor("white");
            Console.WriteLine($"[플레이어] {Name} - HP: {HP:F1}/{MaxHP:F1} | SP: {SP}/{MaxSP}");
            Console.WriteLine($"장착 페르소나: {EquippedPersona.Name}");
        }
    }

    public class Monster
    {
        public string Name { get; set; }
        public float HP { get; set; }
        public float ATK { get; set; }

        public Monster(string name, float hp, float atk)
        {
            Name = name;
            HP = hp;
            ATK = atk;
        }

        public void DisplayStatus()
        {
            SetTextColor("red");
            Console.WriteLine($"[몬스터] {Name} - HP: {HP:F1}");
        }
    }

    // === 게임 메인 로직 ===
    static Player player;
    static Random random = new Random();

    static void Main(string[] args)
    {
        InitializeGame();
        GameLoop();
    }

    // 게임 초기화
    static void InitializeGame()
    {
        Console.Title = "Persona 5 Console";
        Console.CursorVisible = false;

        // 초기 페르소나와 스킬 설정
        var arseneSkills = new List<Skill>
        {
            new Skill("갈기기", 15.0f, 0),
            new Skill("에이하", 30.0f, 10),
        };
        var arsene = new Persona("아르센", arseneSkills);

        // 플레이어 생성
        player = new Player("주인공", 150.0f, 50, arsene);

        // 추가 페르소나
        var pixieSkills = new List<Skill>
        {
            new Skill("갈기기", 15.0f, 0),
            new Skill("지오", 25.0f, 8),
        };
        player.PersonaList.Add(new Persona("픽시", pixieSkills));
    }

    // 게임 루프 (던전 탐험)
    static void GameLoop()
    {
        while (true)
        {
            Console.Clear();
            SetTextColor("cyan");
            Console.WriteLine("팰리스를 탐험 중입니다...");
            Console.WriteLine("아무 키나 눌러 계속 진행하세요.");
            Console.ReadKey(true);

            if (random.Next(0, 2) == 1) // 50% 확률로 몬스터 조우
            {
                EncounterMonster();
            }
            else
            {
                SetTextColor("green");
                Console.WriteLine("특별한 일은 일어나지 않았습니다.");
                Thread.Sleep(1000);
            }

            if (player.HP <= 0)
            {
                GameOver();
                break;
            }
        }
    }

    // 몬스터 조우 시 전투 시작
    static void EncounterMonster()
    {
        Monster monster = new Monster("그림자 슬라임", 80.0f, 15.0f);
        SetTextColor("red");
        Console.Clear();
        Console.WriteLine($"[SHADOW] {monster.Name}이(가) 나타났다!");
        Thread.Sleep(1500);

        while (player.HP > 0 && monster.HP > 0)
        {
            Console.Clear();
            player.DisplayStatus();
            monster.DisplayStatus();
            SetTextColor("yellow");
            Console.WriteLine("\n[1] 공격/스킬");
            Console.WriteLine("[2] 페르소나 교체");
            Console.WriteLine("[3] 도망");

            ConsoleKeyInfo key = Console.ReadKey(true);

            if (key.Key == ConsoleKey.D1 || key.Key == ConsoleKey.NumPad1)
            {
                AttackPhase(monster);
            }
            else if (key.Key == ConsoleKey.D2 || key.Key == ConsoleKey.NumPad2)
            {
                ChangePersona();
            }
            else if (key.Key == ConsoleKey.D3 || key.Key == ConsoleKey.NumPad3)
            {
                if (random.Next(0, 2) == 1)
                {
                    SetTextColor("green");
                    Console.WriteLine("\n전투에서 도망쳤습니다.");
                    return;
                }
                else
                {
                    SetTextColor("red");
                    Console.WriteLine("\n도망에 실패했습니다!");
                    player.HP -= monster.ATK;
                    Console.WriteLine($"{monster.Name}의 반격! {player.Name}은(는) {monster.ATK:F1}의 피해를 입었습니다.");
                }
            }
            Thread.Sleep(2000);
        }

        Console.Clear();
        if (player.HP > 0)
        {
            SetTextColor("green");
            Console.WriteLine($"{monster.Name}을(를) 물리쳤습니다!");
        }
        else
        {
            GameOver();
        }
        Thread.Sleep(2000);
    }

    // 공격 및 스킬 사용 단계
    static void AttackPhase(Monster monster)
    {
        Console.Clear();
        player.DisplayStatus();
        monster.DisplayStatus();
        SetTextColor("yellow");
        Console.WriteLine("\n어떤 스킬을 사용하시겠습니까?");

        for (int i = 0; i < player.EquippedPersona.Skills.Count; i++)
        {
            var skill = player.EquippedPersona.Skills[i];
            Console.WriteLine($"[{i + 1}] {skill.Name} (SP: {skill.SP})");
        }

        Console.WriteLine("[0] 돌아가기");

        var inputKey = Console.ReadKey(true);
        if (char.IsDigit(inputKey.KeyChar))
        {
            int index = int.Parse(inputKey.KeyChar.ToString()) - 1;

            if (index >= 0 && index < player.EquippedPersona.Skills.Count)
            {
                var selectedSkill = player.EquippedPersona.Skills[index];
                if (player.SP >= selectedSkill.SP)
                {
                    // 스킬 사용
                    player.SP -= selectedSkill.SP;
                    monster.HP -= selectedSkill.Power;
                    SetTextColor("green");
                    Console.WriteLine($"\n{player.Name}이(가) {selectedSkill.Name}을(를) 사용! {monster.Name}에게 {selectedSkill.Power:F1}의 피해를 입혔습니다.");
                }
                else
                {
                    SetTextColor("red");
                    Console.WriteLine("\nSP가 부족합니다!");
                }
            }
            else if (index == -1)
            {
                // 돌아가기
                return;
            }
        }

        // 몬스터의 반격
        if (monster.HP > 0)
        {
            player.HP -= monster.ATK;
            SetTextColor("red");
            Console.WriteLine($"{monster.Name}의 반격! {player.Name}은(는) {monster.ATK:F1}의 피해를 입었습니다.");
        }
    }

    // 페르소나 교체 단계
    static void ChangePersona()
    {
        Console.Clear();
        SetTextColor("yellow");
        Console.WriteLine("어떤 페르소나로 교체하시겠습니까?");
        for (int i = 0; i < player.PersonaList.Count; i++)
        {
            Console.WriteLine($"[{i + 1}] {player.PersonaList[i].Name}");
        }
        Console.WriteLine("[0] 돌아가기");

        var inputKey = Console.ReadKey(true);
        if (char.IsDigit(inputKey.KeyChar))
        {
            int index = int.Parse(inputKey.KeyChar.ToString()) - 1;
            if (index >= 0 && index < player.PersonaList.Count)
            {
                player.EquippedPersona = player.PersonaList[index];
                SetTextColor("green");
                Console.WriteLine($"\n페르소나를 {player.EquippedPersona.Name}(으)로 교체했습니다.");
            }
        }
    }

    // 게임 오버
    static void GameOver()
    {
        Console.Clear();
        SetTextColor("red");
        Console.WriteLine("==================");
        Console.WriteLine("    Game Over     ");
        Console.WriteLine("==================");
        SetTextColor("white");
        Console.WriteLine("엔터 키를 눌러 종료하세요.");
        Console.ReadKey(true);
    }

    // 색상 변경 함수 (이전 요청과 동일)
    public static void SetTextColor(string color)
    {
        string lowerCaseColor = color.ToLower();
        switch (lowerCaseColor)
        {
            case "red": Console.ForegroundColor = ConsoleColor.Red; break;
            case "green": Console.ForegroundColor = ConsoleColor.Green; break;
            case "blue": Console.ForegroundColor = ConsoleColor.Blue; break;
            case "yellow": Console.ForegroundColor = ConsoleColor.Yellow; break;
            case "cyan": Console.ForegroundColor = ConsoleColor.Cyan; break;
            case "white": Console.ForegroundColor = ConsoleColor.White; break;
            default: Console.ResetColor(); break;
        }
    }
}