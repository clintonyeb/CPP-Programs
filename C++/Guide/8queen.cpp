#include <iostream>
#include <stdint.h>
#include <string.h>

const uint8_t size = 8;

bool check(char board[size][size], uint8_t row, uint8_t col){
    int i, j;

    // cannot be same column
    for(i = 0; i < row; i++){
        if (board[i][col] == '1') return false;
    }

    // cannot be on the same diagonal

    i = row - 1, j = col - 1;
    while (i >= 0 && j >= 0){
        if (board[i][j] == '1') return false;
        i--; j--;
    }

    i = row - 1, j = col + 1;
    while(i >= 0 && col < size){
        if (board[i][j] == '1') return false;
        i--; j++;
    }

    return true;

    
}

void print(char board[size][size]){
    for(uint8_t i = 0; i < size; i++){
        for (uint8_t j = 0; j < size; j++){
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void _solve(char board[size][size], uint8_t row){
    uint8_t i =0;
    for (i = 0; i < size; i++){
        board[row][i] = '1';
        if (check(board, row, i)){
            if (row == size - 1){
                print(board);
            } 
            else _solve(board, row + 1);
        }
        board[row][i] = '0';
    }
}

uint8_t solve(char board[size][size]){
    memset(board,'0', size * size);
    _solve(board, 0);
}

int main(){
    char board[size][size];
    solve(board);
    return 0;
}
