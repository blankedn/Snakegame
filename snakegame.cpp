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

#include<iostream>
#include<conio.h>

#define GAME_SPEED 100000 // In microseconds
#define GAMEOVER_TEXT1 "Game Over!"
#define GAMEOVER_TEXT2 "Press <ENTER> to start over"
#define GAMESTART_TEXT "Press any key to begin"

using namespace std;

void pressedkey(){

    char key_press;
    int ascii_value;

    cout<<"\n\t\t\tPress Any Key To Check Is It Pressed\n\n\t\t\t **Press ESC to EXIT**\n\n\n";

    bool control = true;
    while (control){

        key_press = getch();
        ascii_value = int(key_press);
        cout << "\t\t\t KEY Pressed (ASCII)->  " << ascii_value;
        cout << endl;
        cout << "\t\t\t KEY Pressed (CHAR)->  " << key_press;
        cout << endl;
    }
}

int main(){
    
    pressedkey();
}

