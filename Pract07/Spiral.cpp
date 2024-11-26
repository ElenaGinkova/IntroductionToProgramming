#include <iostream>
const int ROW = 10, COLS = 10;

void printSpiral(int matrix[][COLS], const int USED_ROWS, const int USED_COLS)
{
	int cur_row = 0, cur_col = 0, row_limit = USED_ROWS, col_limit = USED_COLS;
	while (cur_row < row_limit && cur_col < col_limit) {
		//print first valid row leftToRight
		for (int i = cur_col; i < col_limit; i++) { 
			std::cout << matrix[cur_row][i] << " ";
		}
		cur_row++;
		//print last valid coll topToBottom
		for (int i = cur_row; i < row_limit; i++) {  
			std::cout << matrix[i][col_limit - 1] << " ";
		}
		col_limit--;

		if (cur_row < row_limit) {
			//print last valid row rightToLeft
			for (int i = col_limit - 1; i >= cur_col; i--) {
				std::cout << matrix[row_limit - 1][i] << " ";
			}
			row_limit--;
		}
		if (cur_col < col_limit) {
			//print first valid coll bottomToTop
			for (int i = row_limit - 1; i >= cur_row; i--) {
				std::cout << matrix[i][cur_col] << " ";
			}
			cur_col++;
		}
	}
}

int main() {
	const int USED_ROWS = 4, USED_COLS = 6;
	int arr[ROW][COLS] = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}};
	printSpiral(arr, USED_ROWS, USED_COLS);
	return 0;
}
