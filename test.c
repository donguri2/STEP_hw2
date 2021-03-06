#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	if (argc != 2) {
    printf("usage: %s N\n", argv[0]);
    return -1;
  }

  int n = atoi(argv[1]);
  int* a = (int*)malloc(n * n * sizeof(int)); // Matrix A
  int* b = (int*)malloc(n * n * sizeof(int)); // Matrix B
  int* c = (int*)malloc(n * n * sizeof(int)); // Matrix C
	
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      a[i * n + j] = i * n + j; // A[i][j]
      b[i * n + j] = j * n + i; // B[i][j]
      c[i * n + j] = 0; // C[i][j]
    }
}


  int tmp =0;
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  for (int k = 0; k < n; ++k)
	    {
	      tmp += a[i * n + k] * b[k * n + j];
	    }
	  c[i * n + j] = tmp;
	  tmp = 0;
     	}
    }
  
  
  
  for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < n; ++j)
	{
	  printf("%3d ",c[i * n + j]);
	}
      printf("\n");
    }
  
}
