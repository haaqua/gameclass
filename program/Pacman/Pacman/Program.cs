using System;
using System.Threading;
using System.Collections.Generic;

class Program
{
    // === 캐릭터 클래스 정의 ===
    public class Player
    {
        public string Name { get; set; }
        public float HP { get; set; }
        public float ATK { get; set; }
        public float MaxHP { get; set; }

        public Player(string name, float hp, float atk)
        {
            Name = name;
            MaxHP = hp;
            HP = hp;
            ATK = atk;
        }

        public void DisplayStatus()
        {
            SetTextColor("white");
            Console.WriteLine($"[플레이어] {Name} - HP: {HP:F1}/{MaxHP:F1}");
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
        Console.Title = "Persona 1 Console";
        Console.CursorVisible = false;
        player = new Player("주인공", 100.0f, 25.0f);
    }

    // 게임 루프 (던전 탐험)
    static void GameLoop()
    {
        while (true)
        {
            Console.Clear();
            SetTextColor("cyan");
            Console.WriteLine("던전을 탐험 중입니다...");
            Console.WriteLine("아무 키나 눌러 계속 진행하세요.");
            Console.ReadKey(true);

            // 몬스터 조우 확률 (50%)
            if (random.Next(0, 2) == 1)
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
        Monster monster = new Monster("슬라임", 50.0f, 10.0f);
        SetTextColor("red");
        Console.Clear();
        Console.WriteLine($"야생의 {monster.Name}이(가) 나타났다!");
        Thread.Sleep(1500);

        // 턴제 전투 루프
        while (player.HP > 0 && monster.HP > 0)
        {
            Console.Clear();
            player.DisplayStatus();
            monster.DisplayStatus();
            SetTextColor("yellow");
            Console.WriteLine("\n[1] 공격");
            Console.WriteLine("[2] 도망");

            ConsoleKeyInfo key = Console.ReadKey(true);

            if (key.Key == ConsoleKey.D1 || key.Key == ConsoleKey.NumPad1)
            {
                // 플레이어의 공격
                monster.HP -= player.ATK;
                Console.WriteLine($"\n{player.Name}의 공격! {monster.Name}에게 {player.ATK:F1}의 피해를 입혔습니다.");
                Thread.Sleep(1000);

                if (monster.HP > 0)
                {
                    // 몬스터의 반격
                    player.HP -= monster.ATK;
                    Console.WriteLine($"{monster.Name}의 반격! {player.Name}은(는) {monster.ATK:F1}의 피해를 입었습니다.");
                }
            }
            else if (key.Key == ConsoleKey.D2 || key.Key == ConsoleKey.NumPad2)
            {
                // 도망 성공 확률 (50%)
                if (random.Next(0, 2) == 1)
                {
                    SetTextColor("green");
                    Console.WriteLine("\n전투에서 도망쳤습니다.");
                    return; // 전투 함수 종료
                }
                else
                {
                    SetTextColor("red");
                    Console.WriteLine("\n도망에 실패했습니다!");
                    // 도망 실패 시 몬스터의 공격
                    player.HP -= monster.ATK;
                    Console.WriteLine($"{monster.Name}의 반격! {player.Name}은(는) {monster.ATK:F1}의 피해를 입었습니다.");
                }
            }
            Thread.Sleep(2000);
        }

        // 전투 결과
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