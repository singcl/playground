#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[10][10], transpose[10][10], r, c, i, j;
  printf("Please input the row and column:" );
  scanf("%d %d",&r, &c);

  // 存储矩阵的元素
  printf("\n输入矩阵的元素：\n");

  for(i = 0; i < r; i++) {
    for(j = 0; j < c; j++) {
      printf("Input a%d%d\n", i+1, j+1);
      scanf("%d", &a[i][j]);
    }
  }

  // 显示矩阵 a[][]
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      printf("%d ", a[i][j]);
      if (j == c -1) {
        printf("\n\n");
      }
    }
  }

  // 变换
  for(i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      transpose[j][i] = a[i][j];
    }
  }

  // 显示转换后的矩阵 a
  printf("\nMatrx after transpose:\n");
  for (i = 0; i < c; i++) {
    for (j = 0; j < r; j++) {
      printf("%d ", transpose[i][j]);
      if (j == r - 1) {
        printf("\n\n");
      }
    }
  }
  return 0;
}
