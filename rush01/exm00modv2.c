#include <stdio.h>
#include <stdbool.h>

#define N 4

int grid[N][N];

// Check if a given number is valid for a given row
bool is_valid_row(int row, int num) {
    for (int i = 0; i < N; i++) {
        if (grid[row][i] == num) {
            return false;
        }
    }
    return true;
}

// Check if a given number is valid for a given column
bool is_valid_col(int col, int num) {
    for (int i = 0; i < N; i++) {
        if (grid[i][col] == num) {
            return false;
        }
    }
    return true;
}

// Check if a given number is a valid candidate for a given cell based on the given visible count
bool is_valid_candidate(int row, int col, int num, int* visible_counts) {
    // Check visible counts for the row
    int left_count = 0, right_count = 0;
    for (int i = 0; i < N; i++) {
        if (grid[row][i] > left_count) {
            left_count = grid[row][i];
            if (left_count == N) {
                break;
            }
        }
    }
    for (int i = N - 1; i >= 0; i--) {
        if (grid[row][i] > right_count) {
            right_count = grid[row][i];
            if (right_count == N) {
                break;
            }
        }
    }
    if (left_count > visible_counts[col] || right_count > visible_counts[col + N]) {
        return false;
    }

    // Check visible counts for the column
    int top_count = 0, bottom_count = 0;
    for (int i = 0; i < N; i++) {
        if (grid[i][col] > top_count) {
            top_count = grid[i][col];
            if (top_count == N) {
                break;
            }
        }
    }
    for (int i = N - 1; i >= 0; i--) {
        if (grid[i][col] > bottom_count) {
            bottom_count = grid[i][col];
            if (bottom_count == N) {
                break;
            }
        }
    }
    if (top_count > visible_counts[col + 2*N] || bottom_count > visible_counts[col + 3*N]) {
        return false;
    }

    // Check if the number is valid for the cell
    return is_valid_cell(row, col, num);
}

// Check if the current grid is a valid solution
bool is_valid_solution(int* visible_counts) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == 0) {
                return false;
            }
            if (!is_valid_candidate(i, j, grid[i][j], visible_counts)) {
                return false;
            }
        }
    }
    return true;
}

// Solve the puzzle using backtracking with while loops
bool solve(int* visible_counts) {
    int row = 0, col = 0, num = 1;
    while (row < N
        if (grid[row][col] == 0) {
            while (num <= N) {
                if (is_valid_candidate(row, col, num, visible_counts)) {
                    grid[row][col] = num;
                    if (col == N - 1) {
                        if (solve(visible_counts)) {
                            return true;
                        }
                    }
                    else {
                        col++;
                    }
                }
                num++;
            }
            if (num > N) {
                grid[row][col] = 0;
                if (col == 0) {
                    if (row == 0) {
                        return false;
                    }
                    row--;
                    col = N - 1;
                }
                else {
                    col--;
                }
                num = grid[row][col] + 1;
            }
        }
        else {
            if (col == N - 1) {
                if (solve(visible_counts)) {
                    return true;
                }
            }
            else {
                col++;
            }
        }
    }
    return is_valid_solution(visible_counts);
}

// Print the grid
void print_grid() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Set the visible counts (the numbers at the side of the grid)
    int visible_counts[] = {2, 2, 1, 3, 2, 3, 2, 1, 2, 2, 3, 1, 2, 2, 2, 3};

    // Solve the puzzle and print the solution
    if (solve(visible_counts)) {
        printf("Solution:\n");
        print_grid();
    }
    else {
        printf("No solution found.\n");
    }

    return 0;
}

