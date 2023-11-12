#include <stdio.h>

int main() {
  int maze[11][11];
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			scanf("%d", &maze[i][j]);
		}
	}
	int r = 2, c = 2;
	while (true) {
		if (maze[r][c] == 2) {
			maze[r][c] = 9; break;
		}
		maze[r][c] = 9;
		if (maze[r][c+1] != 1) {
			c++;
		}
		else if (maze[r+1][c] != 1) {
			r++;
		}
		else break;
	}
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}

	return 0;
}
