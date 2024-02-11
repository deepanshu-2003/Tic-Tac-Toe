#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
int bot_op;
int mode;
char u_choice, b_choice;
char data[10] = "         ";
int times = 0;
char player1[45];
char player2[45];
void sleeps(int seconds)
{
    int ts = 0;
    while (1)
    {
        time_t t1;
        t1 = time(NULL);
        if (ts == 0)
        {
            ts = t1;
            ts += seconds;
        }
        else
        {
            if (t1 == ts)
                break;
        }
    }
}

void one_by_one(char str[5000])
{
    system("cls");
    printf("%s", str);
    sleeps(2);
}
void instructions()
{
    one_by_one("   ");
    one_by_one("\tHello.........\n");
    one_by_one("Welcome to the Tic Tac Toe game.....\n");
    one_by_one("Please follow these instructions...\n");
    one_by_one("Enter numbers according to the grid\n");
    system("cls");
    printf("|____________________________|\n");
    printf("|        |         |         |\n");
    printf("|   1    |    2    |    3    |\n");
    printf("|        |         |         |\n");
    printf("|________|_________|_________|\n");
    printf("|        |         |         |\n");
    printf("|   4    |    5    |    6    |\n");
    printf("|        |         |         |\n");
    printf("|________|_________|_________|\n");
    printf("|        |         |         |\n");
    printf("|   7    |    8    |    9    |\n");
    printf("|        |         |         |\n");
    printf("|________|_________|_________|\n");
    sleeps(3);
}

int check_space(int place, char choice)
{
    if (data[place - 1] == ' ')
    {
        data[place - 1] = choice;
        return 1;
    }
    else
    {
        return 0;
    }
}
int randint(int lower, int upper)
{
    int r;
    time_t t;
    t = time(NULL);
    r = t % (upper - lower) + lower;
    return r;
}

int check_win()
{
    int count = 0;
    if (data[0] == data[1] && data[1] == data[2] && data[0] != ' ')
    {
        if (data[0] == u_choice)
        {
            printf("\tHurray!! you won\n");
            return 1;
        }
        else
        {
            printf("\tSorry!! you lose\n");
            return 1;
        }
    }

    else if (data[3] == data[4] && data[4] == data[5] && data[3] != ' ')
    {
        if (data[3] == u_choice)
        {
            printf("\tHurray!! you won\n");
            return 1;
        }
        else
        {
            printf("\tSorry!! you lose\n");
            return 1;
        }
    }
    else if (data[6] == data[7] && data[7] == data[8] && data[6] != ' ')
    {
        if (data[6] == u_choice)
        {
            printf("\tHurray!! you won\n");
            return 1;
        }
        else
        {
            printf("\tSorry!! you lose\n");
            return 1;
        }
    }
    else if (data[0] == data[3] && data[3] == data[6] && data[0] != ' ')
    {
        if (data[0] == u_choice)
        {
            printf("\tHurray!! you won\n");
            return 1;
        }
        else
        {
            printf("\tSorry!! you lose\n");
            return 1;
        }
    }
    else if (data[1] == data[4] && data[4] == data[7] && data[1] != ' ')
    {
        if (data[1] == u_choice)
        {
            printf("\tHurray!! you won\n");
            return 1;
        }
        else
        {
            printf("\tSorry!! you lose\n");
            return 1;
        }
    }
    else if (data[2] == data[5] && data[5] == data[8] && data[2] != ' ')
    {
        if (data[2] == u_choice)
        {
            printf("\tHurray!! you won\n");
            return 1;
        }
        else
        {
            printf("\tSorry!! you lose\n");
            return 1;
        }
    }
    else if (data[0] == data[4] && data[4] == data[8] && data[0] != ' ')
    {
        if (data[0] == u_choice)
        {
            printf("\tHurray!! you won\n");
            return 1;
        }
        else
        {
            printf("\tSorry!! you lose\n");
            return 1;
        }
    }
    else if (data[6] == data[4] && data[4] == data[2] && data[6] != ' ')
    {
        if (data[6] == u_choice)
        {
            printf("\tHurray!! you won\n");
            return 1;
        }
        else
        {
            printf("\tSorry!! you lose\n");
            return 1;
        }
    }
    else
    {
        for (int i = 0; i < strlen(data); i++)
        {
            if (data[i] == ' ')
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("\tMatch Draw!!\n");
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int chk_win()
{
    int count = 0;
    if (data[0] == data[1] && data[1] == data[2] && data[0] != ' ')
    {
        if (data[0] == u_choice)
        {
            printf("\t%s Won\n", player1);
            return 1;
        }
        else
        {
            printf("\t%s Won\n", player2);
            return 1;
        }
    }

    else if (data[3] == data[4] && data[4] == data[5] && data[3] != ' ')
    {
        if (data[3] == u_choice)
        {
            printf("\t%s Won\n", player1);
            return 1;
        }
        else
        {
            printf("\t%s Won\n", player2);
            return 1;
        }
    }
    else if (data[6] == data[7] && data[7] == data[8] && data[6] != ' ')
    {
        if (data[6] == u_choice)
        {
            printf("\t%s Won\n", player1);
            return 1;
        }
        else
        {
            printf("\t%s Won\n", player2);
            return 1;
        }
    }
    else if (data[0] == data[3] && data[3] == data[6] && data[0] != ' ')
    {
        if (data[0] == u_choice)
        {
            printf("\t%s Won\n", player1);
            return 1;
        }
        else
        {
            printf("\t%s Won\n", player2);
            return 1;
        }
    }
    else if (data[1] == data[4] && data[4] == data[7] && data[1] != ' ')
    {
        if (data[1] == u_choice)
        {
            printf("\t%s Won\n", player1);
            return 1;
        }
        else
        {
            printf("\t%s Won\n", player2);
            return 1;
        }
    }
    else if (data[2] == data[5] && data[5] == data[8] && data[2] != ' ')
    {
        if (data[2] == u_choice)
        {
            printf("\t%s Won\n", player1);
            return 1;
        }
        else
        {
            printf("\t%s Won\n", player2);
            return 1;
        }
    }
    else if (data[0] == data[4] && data[4] == data[8] && data[0] != ' ')
    {
        if (data[0] == u_choice)
        {
            printf("\t%s Won\n", player1);
            return 1;
        }
        else
        {
            printf("\t%s Won\n", player2);
            return 1;
        }
    }
    else if (data[6] == data[4] && data[4] == data[2] && data[6] != ' ')
    {
        if (data[6] == u_choice)
        {
            printf("\t%s Won\n", player1);
            return 1;
        }
        else
        {
            printf("\t%s Won\n", player2);
            return 1;
        }
    }
    else
    {
        for (int i = 0; i < strlen(data); i++)
        {
            if (data[i] == ' ')
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("\tMatch Draw!!\n");
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int defend(char d[9])
{
    //0,1,2
    if (d[0] == u_choice && d[1] == u_choice && d[2] == ' ')
    {
        d[2] = b_choice;
        return 1;
    }
    else if (d[0] == u_choice && d[2] == u_choice && d[1] == ' ')
    {
        d[1] = b_choice;
        return 1;
    }
    else if (d[1] == u_choice && d[2] == u_choice && d[0] == ' ')
    {
        d[0] = b_choice;
        return 1;
    }
    else if (d[3] == u_choice && d[4] == u_choice && d[5] == ' ')
    {
        //3,4,5
        d[5] = b_choice;
        return 1;
    }
    else if (d[3] == u_choice && d[5] == u_choice && d[4] == ' ')
    {
        d[4] = b_choice;
        return 1;
    }
    else if (d[4] == u_choice && d[5] == u_choice && d[3] == ' ')
    {
        d[3] = b_choice;
        return 1;
    }
    else if (d[6] == u_choice && d[7] == u_choice && d[8] == ' ')
    {
        //6,7,8
        d[8] = b_choice;
        return 1;
    }
    else if (d[6] == u_choice && d[8] == u_choice && d[7] == ' ')
    {
        d[7] = b_choice;
        return 1;
    }
    else if (d[7] == u_choice && d[8] == u_choice && d[6] == ' ')
    {
        d[6] = b_choice;
        return 1;
    }
    else if (d[0] == u_choice && d[3] == u_choice && d[6] == ' ')
    {
        //0,3,6
        d[6] = b_choice;
        return 1;
    }
    else if (d[0] == u_choice && d[6] == u_choice && d[3] == ' ')
    {
        d[3] = b_choice;
        return 1;
    }
    else if (d[3] == u_choice && d[6] == u_choice && d[0] == ' ')
    {
        d[0] = b_choice;
        return 1;
    }
    else if (d[1] == u_choice && d[4] == u_choice && d[7] == ' ')
    {
        //1,4,7
        d[7] = b_choice;
        return 1;
    }
    else if (d[1] == u_choice && d[7] == u_choice && d[4] == ' ')
    {
        d[4] = b_choice;
        return 1;
    }
    else if (d[4] == u_choice && d[7] == u_choice && d[1] == ' ')
    {
        d[1] = b_choice;
        return 1;
    }
    else if (d[2] == u_choice && d[5] == u_choice && d[8] == ' ')
    {
        //2,5,8
        d[8] = b_choice;
        return 1;
    }
    else if (d[2] == u_choice && d[8] == u_choice && d[5] == ' ')
    {
        d[5] = b_choice;
        return 1;
    }
    else if (d[5] == u_choice && d[8] == u_choice && d[2] == ' ')
    {
        d[2] = b_choice;
        return 1;
    }
    else if (d[0] == u_choice && d[4] == u_choice && d[8] == ' ')
    {
        //0,4,8
        d[8] = b_choice;
        return 1;
    }
    else if (d[0] == u_choice && d[8] == u_choice && d[4] == ' ')
    {
        d[4] = b_choice;
        return 1;
    }
    else if (d[4] == u_choice && d[8] == u_choice && d[0] == ' ')
    {
        d[0] = b_choice;
        return 1;
    }
    else if (d[2] == u_choice && d[4] == u_choice && d[6] == ' ')
    {
        //2,4,6
        d[6] = b_choice;
        return 1;
    }
    else if (d[2] == u_choice && d[6] == u_choice && d[4] == ' ')
    {
        d[4] = b_choice;
        return 1;
    }
    else if (d[4] == u_choice && d[6] == u_choice && d[2] == ' ')
    {
        d[2] = b_choice;
        return 1;
    }
    else
    {
        return 0;
    }
}
int attack()
{
    if (data[0] == b_choice && data[1] == b_choice && data[2] == ' ')
    {
        data[2] = b_choice;
        return 1;
    }
    else if (data[0] == b_choice && data[2] == b_choice && data[1] == ' ')
    {
        data[1] = b_choice;
        return 1;
    }
    else if (data[1] == b_choice && data[2] == b_choice && data[0] == ' ')
    {
        data[0] = b_choice;
        return 1;
    }
    else if (data[3] == b_choice && data[4] == b_choice && data[5] == ' ')
    {
        data[5] = b_choice;
        return 1;
    }
    else if (data[3] == b_choice && data[5] == b_choice && data[4] == ' ')
    {
        data[4] = b_choice;
        return 1;
    }
    else if (data[4] == b_choice && data[5] == b_choice && data[3] == ' ')
    {
        data[3] = b_choice;
        return 1;
    }
    else if (data[6] == b_choice && data[7] == b_choice && data[8] == ' ')
    {
        data[8] = b_choice;
        return 1;
    }
    else if (data[6] == b_choice && data[8] == b_choice && data[7] == ' ')
    {
        data[7] = b_choice;
        return 1;
    }
    else if (data[7] == b_choice && data[8] == b_choice && data[6] == ' ')
    {
        data[6] = b_choice;
        return 1;
    }
    else if (data[0] == b_choice && data[3] == b_choice && data[6] == ' ')
    {
        data[6] = b_choice;
        return 1;
    }
    else if (data[0] == b_choice && data[6] == b_choice && data[3] == ' ')
    {
        data[3] = b_choice;
        return 1;
    }
    else if (data[3] == b_choice && data[6] == b_choice && data[0] == ' ')
    {
        data[0] = b_choice;
        return 1;
    }
    else if (data[1] == b_choice && data[4] == b_choice && data[7] == ' ')
    {
        data[7] = b_choice;
        return 1;
    }
    else if (data[1] == b_choice && data[7] == b_choice && data[4] == ' ')
    {
        data[4] = b_choice;
        return 1;
    }
    else if (data[4] == b_choice && data[7] == b_choice && data[1] == ' ')
    {
        data[1] = b_choice;
        return 1;
    }
    else if (data[2] == b_choice && data[5] == b_choice && data[8] == ' ')
    {
        data[8] = b_choice;
        return 1;
    }
    else if (data[2] == b_choice && data[8] == b_choice && data[5] == ' ')
    {
        data[5] = b_choice;
        return 1;
    }
    else if (data[5] == b_choice && data[8] == b_choice && data[2] == ' ')
    {
        data[2] = b_choice;
        return 1;
    }
    else if (data[0] == b_choice && data[4] == b_choice && data[8] == ' ')
    {
        data[8] = b_choice;
        return 1;
    }
    else if (data[0] == b_choice && data[8] == b_choice && data[4] == ' ')
    {
        data[4] = b_choice;
        return 1;
    }
    else if (data[4] == b_choice && data[8] == b_choice && data[0] == ' ')
    {
        data[0] = b_choice;
        return 1;
    }
    else if (data[2] == b_choice && data[4] == b_choice && data[6] == ' ')
    {
        data[6] = b_choice;
        return 1;
    }
    else if (data[2] == b_choice && data[6] == b_choice && data[4] == ' ')
    {
        data[4] = b_choice;
        return 1;
    }
    else if (data[4] == b_choice && data[6] == b_choice && data[2] == ' ')
    {
        data[2] = b_choice;
        return 1;
    }
    else
    {
        return 0;
    }
}
void bot()
{
    int count = 0;
    int d[8];
    for (int i = 0; i < strlen(data); i++)
    {
        if (data[i] == ' ')
        {
            d[count] = i;
            count++;
        }
    }

    if (count != 0)
    {
        printf("\t Bot is thinking...\n");
        sleeps(3);
        if (bot_op == 2)
        {
            if (defend(data) == 0)
            {
                int r = randint(0, count);
                data[d[r]] = b_choice;
            }
            else
            {
            }
        }
        else if (bot_op == 3)
        {
            if (attack() == 0)
            {
                if (defend(data) == 0)
                {
                    int r = randint(0, count);
                    data[d[r]] = b_choice;
                }
                else
                {
                }
            }
            else
            {
            }
        }
        else
        {
            int r = randint(0, count);
            data[d[r]] = b_choice;
        }
    }
}
void main();
void ask();
void show_grid(char one[45], char two[45], char spaces[10])
{
    system("cls");
    printf("%s : %c\t %s %s : %c\n", one, u_choice, spaces, two, b_choice);
    printf("|____________________________|\n");
    printf("|        |         |         |\n");
    printf("|   %c    |    %c    |    %c    |\n", data[0], data[1], data[2]);
    printf("|        |         |         |\n");
    printf("|________|_________|_________|\n");
    printf("|        |         |         |\n");
    printf("|   %c    |    %c    |    %c    |\n", data[3], data[4], data[5]);
    printf("|        |         |         |\n");
    printf("|________|_________|_________|\n");
    printf("|        |         |         |\n");
    printf("|   %c    |    %c    |    %c    |\n", data[6], data[7], data[8]);
    printf("|        |         |         |\n");
    printf("|________|_________|_________|\n");
}
int game()
{
    int place;
    show_grid("You", "Bot", "\t\t");
    printf(" [%c] >>> ", u_choice);
    scanf("%d", &place);
    if (check_space(place, u_choice) == 1)
    {
        show_grid("You", "Bot", "\t\t");
        if (check_win())
        {
            ask();
        }
    }
    else
    {
        printf("Bad Choice (press enter)[---->] ");
        fflush(stdin);
        getch();
        game();
    }
    bot();
    show_grid("You", "Bot", "\t\t");
    if (check_win() == 0)
    {
        game();
    }
    else
    {
        ask();
    }
}

void ask()
{
    char choice;
    fflush(stdin);
    getch();
    system("cls");
    printf("Do you want to play again : \n");
    printf("[y/n] >>> ");
    fflush(stdin);
    scanf("%c", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        main();
    }
    else
    {
        exit(1);
    }
}
void ask_mode()
{
    system("cls");
    printf("    Choose Game Mode:\n1 Pass in Pass\n2 Play With Bot\n\n");
    printf("\t[1/2]  >>> ");
    fflush(stdin);
    scanf("%d", &mode);
    if (mode == 1 || mode == 2)
    {
    }
    else
    {
        printf("Invalid Choice\n");
        fflush(stdin);
        getch();
        ask_mode();
    }
}
int inbotl()
{
    system("cls");
    printf("    Choose Bot Level..\n1 Easy\n2 Medium\n3 Hard\n\n >>> ");
    fflush(stdin);
    scanf("%d", &bot_op);
    if (bot_op == 1 || bot_op == 2 || bot_op == 3)
    {
    }
    else
    {
        printf("Invalid Choice");
        fflush(stdin);
        getch();
        inbotl();
    }
}
void inplayer()
{
    char c;
    system("cls");
    printf("Do you want to enter names:\n\n\t[y/n] >>> ");
    fflush(stdin);
    scanf("%c", &c);
    if (c == 'y' || c == 'Y')
    {
        system("cls");
        printf("Enter players Names\n   {not more than 45 characters}:\n");
        printf("\n\n\t[0] >>> ");
        fflush(stdin);
        scanf("%[^\n]c", &player1);
        printf("\n\n\t[X] >>> ");
        fflush(stdin);
        scanf("%[^\n]c", &player2);
    }
    else
    {
        strcpy(player1, "Player 1");
        strcpy(player2, "Player 2");
    }
    u_choice = '0';
    b_choice = 'X';
    //player1=u_choice; player2=b_choice;
    system("cls");
    printf("%s : 0\t %s : X\n", player1, player2);
    sleeps(2);
    system("cls");
}
void player1_game()
{
    int place;
    show_grid(player1, player2, " ");
    printf("  %s [0]  >>> ", player1);
    fflush(stdin);
    scanf("%d", &place);
    if (check_space(place, u_choice) == 1)
    {
        show_grid(player1, player2, " ");
        if (chk_win())
        {
            ask();
        }
    }
    else
    {
        printf("Bad Choice (press enter)[---->] ");
        fflush(stdin);
        getch();
        player1_game();
    }
}
void player2_game()
{
    int place;
    show_grid(player1, player2, " ");
    printf("  %s [X]  >>> ", player2);
    fflush(stdin);
    scanf("%d", &place);
    if (check_space(place, b_choice) == 1)
    {
        show_grid(player1, player2, " ");
        if (chk_win())
        {
            ask();
        }
    }
    else
    {
        printf("Bad Choice (press enter)[---->] ");
        fflush(stdin);
        getch();
        player2_game();
    }
}
void game1()
{
    player1_game();
    player2_game();
    game1();
}
void main()
{
    for (int i = 0; i <= 8; i++)
    {
        data[i] = ' ';
    }
    if (times == 0)
    {
        instructions();
        times++;
    }
    system("cls");
    ask_mode();
    if (mode == 2)
    {
        system("cls");
        printf("    Choose 0 or X to play the game..\n\n");
        printf("\t[0/x]  >>> ");
        fflush(stdin);
        scanf("%c", &u_choice);
        if (u_choice == 'x' || u_choice == 'X')
        {
            u_choice = 'X';
            b_choice = '0';
            one_by_one("\n\tYou : X \tBot : 0\n\n\n");
        }
        else if (u_choice == '0' || u_choice == 'o' || u_choice == 'O')
        {
            b_choice = 'X';
            u_choice = '0';
            one_by_one("\n\tYou : 0 \tBot : X\n\n\n");
        }
        else
        {
            printf("invalid input");
            fflush(stdin);
            getch();
            main();
        }
        inbotl();
        game();
    }
    else
    {
        inplayer();
        game1();
    }
}