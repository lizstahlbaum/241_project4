#include <stdio.h>
#include <stdlib.h>

int main(void){
	int nrows;
        int ncols;
        int steps;

        scanf("%d", &steps);
        scanf("%d,%d", &nrows, &ncols);
        getchar(); //Resource one

	//make grid
        int *A = (int *) malloc(nrows*ncols*sizeof(int));
        int **Grid = (int **) malloc(nrows*sizeof(int *));
        for (int i=0; i<nrows; i++){
                Grid[i] = A + i*ncols;
        }

        char *s;
        size_t len=0;

        for (int i=0; i<nrows; i++){
                getline(&s, &len, stdin);
                for (int j=0; j<ncols; j++){
                        Grid[i][j] = s[j*2] - '0'; //Resource two - get int instead of ascii
                }
        }
        for (int i=0;i<nrows; i++){
                for (int j=0; j<ncols; j++){
                        printf("%d", Grid[i][j]);
                }
        }

        free(s);
        free(A);
        free(Grid);
	return 0;
}
