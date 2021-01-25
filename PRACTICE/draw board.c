#include <stdio.h>

    char gameboard[3][3];
    int showresult(char ch);
    int validateinput(int cell);
    void turnplayer0(int* pCell);
    void turnplayerX(int* pcell);
    void gerRowCol(int cell, int* pX, int* pY);

    int main()
    {
        int x = 0, y = 0, row, col, selectedCell = 0, aviableCell = 9;
        char startchar = '1';

        for(row = 0; row < 3; row++){
            for(col = 0; col < 3; col++){
                gameboard[row][col] = startchar++;

            }
        }

        return 0;
    }

