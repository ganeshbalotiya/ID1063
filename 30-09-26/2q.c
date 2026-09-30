//ganesh balotiya 
//30-09-26

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define M 3

// Direction vectors for checking all 8 neighboring cells
int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};

int main() {
    int board[N][M];
    int result[N][M];

    // Seed the random number generator
    srand(time(0));

    // 1. Generate random 3x3 binary matrix (0 for empty, 1 for mine)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            board[i][j] = rand() % 2;
        }
    }

    // Print the generated input matrix
    printf("Generated Input Matrix (3x3):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d%s", board[i][j], (j == M - 1) ? "" : " ");
        }
        printf("\n");
    }

    // 2. Minesweeper Processing Logic
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (board[i][j] == 1) {
                result[i][j] = -1; // -1 represents a mine
            } else {
                int mine_count = 0;
                for (int d = 0; d < 8; d++) {
                    int ni = i + dx[d];
                    int nj = j + dy[d];

                    // Check grid boundaries
                    if (ni >= 0 && ni < N && nj >= 0 && nj < M) {
                        if (board[ni][nj] == 1) {
                            mine_count++;
                        }
                    }
                }
                result[i][j] = mine_count;
            }
        }
    }

    // Print the Minesweeper output matrix
    printf("\nMinesweeper Output Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d%s", result[i][j], (j == M - 1) ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}

