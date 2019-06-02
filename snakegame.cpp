/*  
 *  Copyright (c) Free Software Free Society 
 *  
 *  blankedn ---> https://github.com/blankedn
 *  nasibovv ---> https://github.com/nasibovv
 *
 *  Simple Snake Game with C language
 *
 *  Visit our github page...   
 **********************************************/

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define GAME_SPEED 100000 // In microseconds
#define GAMEOVER_TEXT1 "Game Over!"
#define GAMEOVER_TEXT2 "Press <ENTER> to start over"
#define GAMESTART_TEXT "Press any key to begin"

using namespace std;

bool gameOver;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirecton dir;

void clear_screen(){

    #ifdef WINDOWS
        system("cls");

    #else
        system("clear");

    #endif
}

void main_menu(){

}

void draw_game(int width){

    int height = width / 2;
    
    cout << "*";
    for (size_t x = 0; x <= width; x++) { 
        cout << "*";    // Up floor

        if (x == width){
            for (size_t y = 0; y <= height; y++){   
                cout << endl;
                cout << "*";    // Height floor left

                for (int i = 0; i < width; i++){
                    cout << " ";
                    if (i == width - 1){
                        cout << "*";    // Height floor right
                    }
                }

                if (y == height){
                    cout << endl; 
                    for (size_t x = 0; x <= width + 1; x++) {
                        cout << "*"; // Down floor

                    }
                }
            }
        }
    }
}

void pressedkey(){

    char key_press;
    bool control = true;
    while (control){

        key_press = getch();
        int ascii_value = int(key_press);

        switch (key_press){

        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

int main(){
    
   draw_game(50);
   pressedkey();

}

