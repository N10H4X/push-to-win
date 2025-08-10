
#include <stdio.h>

/*
Game Title: "Push to Win"

Group Members:
   John Anthony A. Dilao
   Clark Justine A. Lesigues
   Michel Angelo F. Malaqui
   Blane Georgie A. Jaro

Submission: December 6, 2024
*/

struct Player
{
    char symbol;
    int x;
    int y;
};

//Prototype of functions used in the code
void displayGrid(char*, int, int);
void movePlayer(char*, struct Player*, int, int, int);
void handleInput(char*, struct Player*, char);

int main(){

    char player_char;
    printf("Welcome to Push to Win\n");

    //Player gets to choose which ascii character to play as
    printf("\nEnter your player character: ");
    scanf("%c", &player_char);
    struct Player player = {player_char};

    //============================= [Level 1] ===========================================//

    //
    char lvl_1[10][10] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '*', '-', '-', '-', '#', '-', '-', '-', '#'},
        {'#', '-', '-', '-', '-', '#', '-', '@', '-', '#'},
        {'#', '-', '-', '-', '-', '#', '-', '-', '-', '#'},
        {'#', '-', 'x', '-', '-', '|', '-', '-', '-', '#'},
        {'#', '-', '-', '-', '-', '|', '-', '@', '-', '#'},
        {'#', '-', '-', 'x', '-', '#', '-', '-', '-', '#'},
        {'#', '-', '-', '-', '-', '#', '-', '-', '-', '#'},
        {'#', 'o', '-', '-', '-', '#', '-', '-', '-', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    };

    //Start position of player
    player.x = 1;
    player.y = 1;
    lvl_1[player.y][player.x] = player.symbol;

    char input;
    while(input != 'f'){

        //maintain visual indication of targets whenever it turns
        //into '-' character after player walks over it
        if(lvl_1[4][2] == '-') lvl_1[4][2] = 'x';
        if(lvl_1[6][3] == '-') lvl_1[6][3] = 'x';

        //
        if(lvl_1[8][1] == '-') lvl_1[8][1] = 'O';

        if(lvl_1[8][1] == player.symbol) {
            lvl_1[4][5] = '-';
            lvl_1[5][5] = '-';
        }

        displayGrid(lvl_1, 10, 10); //10 rows, 10 columns respectively.

        scanf("%c", &input);
        handleInput(lvl_1, &player, input);

        //check win condition (positions where boxes should be)
        if(lvl_1[4][2] == '@' && lvl_1[6][3] == '@'){
            displayGrid(lvl_1, 10, 10);
            //printf("You Win!\n");
            break;
        }
    }

    //===================================================================================//


    //============================= [Level 2] ===========================================//

    char lvl_2[10][10] = {

        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', 'o', '-', '|', '-', '-', '#', '-', 'x', '#'},
        {'#', '-', '@', '|', '-', '-', '#', '-', '-', '#'},
        {'#', '-', '-', '#', '-', '-', '#', '-', '-', '#'},
        {'#', '#', '_', '#', '-', '-', '#', '-', '-', '#'},
        {'#', 'o', '-', '#', '-', '-', '#', '-', '-', '#'},
        {'#', '-', '-', '#', '-', '-', '|', '-', '-', '#'},
        {'#', '-', '-', '#', '-', '-', '|', '-', '-', '#'},
        {'#', '*', '-', '#', 'o', '-', '#', '-', '-', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    };

    //Start position of player
    player.x = 1;
    player.y = 8;
    lvl_2[player.y][player.x] = player.symbol;

    input;
    while(input != 'f'){

        //maintain visual indication of targets whenever it turns
        //into '-' character after player walks over it
        if(lvl_2[1][8] == '-') lvl_2[1][8] = 'x';

        if(lvl_2[1][1] == '-') lvl_2[1][1] = 'O';
        if(lvl_2[5][1] == '-') lvl_2[5][1] = 'O';
        if(lvl_2[8][4] == '-') lvl_2[8][4] = 'O';

        if(lvl_2[5][1] == player.symbol) {
            lvl_2[4][2] = '-';
        }

        if(lvl_2[1][1] == player.symbol) {
            lvl_2[1][3] = '-';
            lvl_2[2][3] = '-';
        }

        if(lvl_2[8][4] == player.symbol) {
            lvl_2[6][6] = '-';
            lvl_2[7][6] = '-';
        }

        displayGrid(lvl_2, 10, 10); //10 rows, 10 columns respectively.
        scanf("%c", &input);
        handleInput(lvl_2, &player, input);

        //check win condition (positions where boxes should be)
        if(lvl_2[1][8] == '@'){
            displayGrid(lvl_2, 10, 10);
            break;
        }
    }

    //===================================================================================//

    //============================= [Level 3] ===========================================//

    char lvl_3[10][10] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', 'o', '-', 'o', '-', 'o', '-', 'o', '-', '#'},
        {'#', '-', 'o', '-', 'o', '-', 'o', '-', 'o', '#'},
        {'#', 'o', '-', '#', '#', '#', '#', 'o', '-', '#'},
        {'#', '-', 'o', '|', '@', 'x', '#', '-', 'o', '#'},
        {'#', 'o', '-', '#', '#', '#', '#', 'o', '-', '#'},
        {'#', '-', 'o', '-', 'o', '-', 'o', '-', 'o', '#'},
        {'#', 'o', '-', 'o', '-', 'o', '-', '-', '-', '#'},
        {'#', '-', 'o', '-', 'o', '-', 'o', '-', 'o', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}

    };

    /*Start position of player*/
    player.x = 1;
    player.y = 8;
    lvl_3[player.y][player.x] = player.symbol;

    //keep game running until
    while(input != 'f'){

        /*maintain visual indication of targets whenever it turns*/
        /*into '-' character after player walks over it*/
        if(lvl_3[4][5] == '-') lvl_3[4][5] = 'x';
        if(lvl_3[1][1]  == '-') lvl_3[1][1] = 'o';
        if(lvl_3[3][1]  == '-') lvl_3[3][1] = 'o';
        if(lvl_3[5][1]  == '-') lvl_3[7][1] = 'o';
        if(lvl_3[2][2]  == '-') lvl_3[2][2] = 'o';
        if(lvl_3[4][2]  == '-') lvl_3[4][2] = 'o';
        if(lvl_3[6][2]  == '-') lvl_3[6][2] = 'o';
        if(lvl_3[8][2]  == '-') lvl_3[8][2] = 'o';
        if(lvl_3[1][3]  == '-') lvl_3[1][3] = 'o';
        if(lvl_3[7][3]  == '-') lvl_3[7][3] = 'o';
        if(lvl_3[2][4]  == '-') lvl_3[2][4] = 'o';
        if(lvl_3[6][4]  == '-') lvl_3[6][4] = 'o';
        if(lvl_3[8][4]  == '-') lvl_3[8][4] = 'o';
        if(lvl_3[1][5]  == '-') lvl_3[1][5] = 'o';
        if(lvl_3[7][5]  == '-') lvl_3[7][5] = 'o';
        if(lvl_3[2][6]  == '-') lvl_3[2][6] = 'o';
        if(lvl_3[6][6]  == '-') lvl_3[6][6] = 'o';
        if(lvl_3[8][6]  == '-') lvl_3[8][6] = 'o';
        if(lvl_3[1][7]  == '-') lvl_3[1][7] = 'o';
        if(lvl_3[3][7]  == '-') lvl_3[3][7] = 'o';
        if(lvl_3[5][7]  == '-') lvl_3[5][7] = 'o';
        if(lvl_3[7][7]  == '-') lvl_3[7][7] = 'o';
        if(lvl_3[2][8]  == '-') lvl_3[2][8] = 'o';
        if(lvl_3[4][8]  == '-') lvl_3[4][8] = 'o';
        if(lvl_3[6][8]  == '-') lvl_3[6][8] = 'o';
        if(lvl_3[8][8]  == '-') lvl_3[8][8] = 'o';


        if(lvl_3[7][5] == player.symbol) {
            lvl_3[4][3] = '-';
        }


        displayGrid(lvl_3, 10, 10); /*10 rows, 10 columns respectively.*/

        scanf("%c", &input);
        handleInput(lvl_3, &player, input);

        /*check win condition (positions where boxes should be)*/
        if(lvl_3[4][5] == '@'){
            displayGrid(lvl_3, 10, 10);

            printf("You Win!\n");
            break;
        }
    }

    return 0;
}

void displayGrid(char *gameRect, int rows, int columns){
    write(1, "\033[H\033[2J\033[3J", 11); //clear screen

    int string_size = (rows*columns) + rows + 1;
    char full_string[string_size];
    int index = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            full_string[index] = *(gameRect + (i * columns) + j);
            index++;
        }
        full_string[index] = '\n';
        index++;
    }

    printf("%s\n", full_string);
}

void handleInput(char *gameRect, struct Player *player, char input){

    //Handles WASD input for player movement
    if(input == 'd'){ movePlayer(gameRect, player,  1,  0, 10);}
    if(input == 'a'){ movePlayer(gameRect, player, -1,  0, 10);}
    if(input == 's'){ movePlayer(gameRect, player,  0,  1, 10);}
    if(input == 'w'){ movePlayer(gameRect, player,  0, -1, 10);}
}

void movePlayer(char *gameRect, struct Player *player, int m_x, int m_y, int col_size){

    char in_front = *(gameRect + ((player->y + m_y) * col_size) + (player->x + m_x));
    char ah_front = *(gameRect + (((player->y + (m_y * 2)) * col_size) + (player->x + (m_x * 2))));

    //check if cell in front is an empty space (otherwise, no movement will happen)
    if(in_front == '-' ||
       in_front == 'x' ||
       in_front == 'o' ||
       in_front == 'O'){

        //replaces current player position with empty space
        *(gameRect + (player->y * col_size) + player->x) = '-';

        //inrement player position to specified direction by one cell
        player->x += m_x;
        player->y += m_y;

        //replace the character in new player position with player character or "symbol"
        *(gameRect + (player->y * col_size) + player->x) = player->symbol;

              //check if the cell in front is a "box"
    }else if(in_front == '@'){

        //check if cell ahead of box is an empty space
        if(ah_front == '-' ||
           ah_front == 'x' ||
           in_front == 'o' ||
           in_front == 'O'){

            //replace current player position with empty space
            *(gameRect + (player->y * col_size) + player->x) = '-';

            //inrement player position to specified direction by one cell
            player->x += m_x;
            player->y += m_y;

            //replace the character in new player position with player character or "symbol"
            *(gameRect + (player->y * col_size) + player->x) = player->symbol;

            //replace the character in front of player with a "box"
            *(gameRect + ((player->y + m_y) * col_size) + (player->x + m_x)) = '@';

        }
    }
}
