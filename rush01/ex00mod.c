#include <stdio.h>

#define N 4

int grid[N][N];

// Check if the given number is valid for the given row
int is_valid_row(int row, int num) {
    for (int j = 0; j < N; j++) {
        if (grid[row][j] == num) {
            return 0;
        }
    }
    return 1;
}

// Check if the given number is valid for the given column
int is_valid_col(int col, int num) {
    for (int i = 0; i < N; i++) {
        if (grid[i][col] == num) {
            return 0;
        }
    }
    return 1;
}

// Check if the given number is valid for the given cell
int is_valid_cell(int row, int col, int num) {
    return is_valid_row(row, num) && is_valid_col(col, num);
}

// Check if the given number is a valid candidate for the given cell based on the given visible count
int is_valid_candidate(int row, int col, int num, int visible_count) {
    int max_row = 0;
    int max_col = 0;
    for (int i = 0; i < N; i++) {
        if (grid[i][col] > max_col) {
            max_col = grid[i][col];
            visible_count--;
        }
        if (grid[row][i] > max_row) {
            max_row = grid[row][i];
            visible_count--;
        }
    }
    return visible_count == 0 && is_valid_cell(row, col, num);
}

// Check if the current grid is a valid solution
int is_valid_solution() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int num = grid[i][j];
            if (!is_valid_candidate(i, j, num, 1)) {
                return 0;
            }
        }
    }
    return 1;
}

// Recursive function to solve the puzzle
int solve(int row, int col) {
    if (row == N) {
        return is_valid_solution();
    }
    int next_row = col == N - 1 ? row + 1 : row;
    int next_col = (col + 1) % N;
    if (grid[row][col] != 0) {
        return solve(next_row, next_col);
    }
    for (int num = 1; num <= N; num++) {
        if (is_valid_candidate(row, col, num, 2)) {
            grid[row][col] = num;
            if (solve(next_row, next_col)) {
                return 1;
            }
            grid[row][col] = 0;
        }
    }
    return 0;
}

// Print the solution grid
void print_grid() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Initialize the grid to all zeros
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            grid[i][j] = 0;
        }
    }

    // Set the input visible counts
    int visible_counts[16];
    printf("Enter the visible counts for the top, bottom, left, and right sides (in that order):\n");
    for (int i = 0; i < 16; i++) {
        scanf("%d", &visible_counts[i]);
    }

    // Solve the puzzle
    if (solve(0, 0)) {
        printf("Solution:\n");
        print_grid();
    } else {
        printf("No solution found.\n");
    }

    return 0;
}

