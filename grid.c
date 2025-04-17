#include <stdio.h>
#include <stdlib.h>

typedef struct Grid {
	char *cells;
	int nrows;
	int ncols;
} Grid;

Grid *update(Grid *g, Grid *age_pg) {
    /*for (int i = 0; i < pg->nrows; i++) {
        for (int j = 0; j < pg->ncols; j++) {
            printf("%c ", pg->cells[i * pg->ncols + j]);
        }
        printf("\n");
    }
    printf("\n");
*/
	char cur = NULL;
	for (int i = 0; i < g->nrows; i++) {
		for (int j = 0; j < g->ncols; j++) {
			cur = g->cells[i * g->ncols + j];
			printf("%c", cur);
			
			if (cur=='g'){
				int f_count = 0;
				if (f_count<2){
				//no edges
				if (i!=0 && i!=nrows && j!=0 && j!=ncols){
					//N
					if (g->cells[(i-1) * g->ncols + j == 'f']){
						f_count++;
					}	
					//NE
                                        if (g->cells[(i-1) * g->ncols + (j+1) == 'f']){
                                                f_count++;
					}
					//E
					if (g->cells[i * g->ncols + (j+1)] == 'f'){
						f_count++;
					}	
					//SE
                                        if (g->cells[(i+1) * g->ncols + (j+1)] == 'f'){
                                                f_count++;
                                        }
					//S
					if (g->cells[(i+1) * g->ncols + j] == 'f'){
                                                f_count++;
                                        }
					//SW
                                        if (g->cells[(i+1) * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
					//W
                                        if (g->cells[i * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
					//NW
                                        if (g->cells[(i-1) * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
				//Corners
				}else if ((i!=0 && j!=ncols) && (i!=nrows && j!=ncols) && (i!=nrows && j!=ncols) && (i!=0 && j!=0)){
				//N edge
                                        //NE
                                        //E
                                        if (g->cells[i * g->ncols + (j+1)] == 'f'){
                                                f_count++;
						f_count++;
                                        }
                                        //SE
                                        if (g->cells[(i+1) * g->ncols + (j+1)] == 'f'){
                                                f_count++;
                                        }
                                        //S
                                        if (g->cells[(i+1) * g->ncols + j] == 'f'){
                                                f_count++;
                                        }
                                        //SW
                                        if (g->cells[(i+1) * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
                                        //W
                                        if (g->cells[i * g->ncols + (j-1)] == 'f'){
                                                f_count++;
						f_count++;
                                        }
                                        //NW
				//E edge
                                        //N
                                        if (g->cells[(i-1) * g->ncols + j == 'f']){
                                                f_count++;
						f_count++;
                                        }
                                        //NE
                                        //E
                                        //SE
                                        //S
                                        if (g->cells[(i+1) * g->ncols + j] == 'f'){
                                                f_count++;
						f_count++;
                                        }
                                        //SW
                                        if (g->cells[(i+1) * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
                                        //W
                                        if (g->cells[i * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
                                        //NW
                                        if (g->cells[(i-1) * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
				//S edge
                                        //N
                                        if (g->cells[(i-1) * g->ncols + j == 'f']){
                                                f_count++;
                                        }
                                        //NE
                                        if (g->cells[(i-1) * g->ncols + (j+1) == 'f']){
                                                f_count++;
                                        }
                                        //E
                                        if (g->cells[i * g->ncols + (j+1)] == 'f'){
                                                f_count++;
						f_count++;
                                        }
                                	//SE
                                        //S
					//SW
                                        //W
                                        if (g->cells[i * g->ncols + (j-1)] == 'f'){
                                                f_count++;
						f_count++:
                                        }
                                        //NW
                                        if (g->cells[(i-1) * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
				//W edge
                                        //N
                                        if (g->cells[(i-1) * g->ncols + j == 'f']){
                                                f_count++;
						f_count++;
                                        }
                                        //NE
                                        if (g->cells[(i-1) * g->ncols + (j+1) == 'f']){
                                                f_count++;
                                        }
                                        //E
                                        if (g->cells[i * g->ncols + (j+1)] == 'f'){
                                                f_count++;
                                        }
                                        //SE
                                        if (g->cells[(i+1) * g->ncols + (j+1)] == 'f'){
                                                f_count++;
                                        }
                                        //S
                                        if (g->cells[(i+1) * g->ncols + j] == 'f'){
                                                f_count++;
						f_count++;
                                        }
                                        //W
					//NW
				}
					}
			}else if (f_count>1){
				g->cells[i * g->ncols + j] = 'f';
				age_g->cells[i * g->ncols + j]--;
				f_count = 0;
			}
			}
		//w -> f
		f_count = 0;
		if (cur=='w'){
			if (f_count<4){
                                //no edges
                                if (i!=0 && i!=nrows && j!=0 && j!=ncols){
                                        //N
                                        if (g->cells[(i-1) * g->ncols + j == 'f']){
                                                f_count++;
                                        }
                                        //NE
                                        if (g->cells[(i-1) * g->ncols + (j+1) == 'f']){
                                                f_count++;
                                        }
                                        //E
                                        if (g->cells[i * g->ncols + (j+1)] == 'f'){
                                                f_count++;
                                        }
                                        //SE
                                        if (g->cells[(i+1) * g->ncols + (j+1)] == 'f'){
                                                f_count++;
                                        }
                                        //S
                                        if (g->cells[(i+1) * g->ncols + j] == 'f'){
                                                f_count++;
                                        }
                                        //SW
                                        if (g->cells[(i+1) * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
                                        //W
                                        if (g->cells[i * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
                                        //NW
                                        if (g->cells[(i-1) * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
					//Corners
                                }else if ((i!=0 && j!=ncols) && (i!=nrows && j!=ncols) && (i!=nrows && j!=ncols) && (i!=0 && j!=0)){
                                //N edge
                                        //NE
                                        //E
                                        if (g->cells[i * g->ncols + (j+1)] == 'f'){
                                                f_count++;
                                                f_count++;
                                        }
                                        //SE
                                        if (g->cells[(i+1) * g->ncols + (j+1)] == 'f'){
                                                f_count++;
                                        }
                                        //S
                                        if (g->cells[(i+1) * g->ncols + j] == 'f'){
                                                f_count++;
                                        }
                                        //SW
                                        if (g->cells[(i+1) * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
                                        //W
                                        if (g->cells[i * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                                f_count++;
                                        }
                                        //NW

//E edge
                                        //N
                                        if (g->cells[(i-1) * g->ncols + j == 'f']){
                                                f_count++;
                                                f_count++;
                                        }
                                        //NE
                                        //E
                                        //SE
                                        //S
                                        if (g->cells[(i+1) * g->ncols + j] == 'f'){
                                                f_count++;
                                                f_count++;
                                        }
                                        //SW
                                        if (g->cells[(i+1) * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
                                        //W
                                        if (g->cells[i * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
                                        //NW
                                        if (g->cells[(i-1) * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
 //S edge
                                        //N
                                        if (g->cells[(i-1) * g->ncols + j == 'f']){
                                                f_count++;
                                        }
                                        //NE
                                        if (g->cells[(i-1) * g->ncols + (j+1) == 'f']){
                                                f_count++;
                                        }
                                        //E
                                        if (g->cells[i * g->ncols + (j+1)] == 'f'){
                                                f_count++;
                                                f_count++;
                                        }
                                        //SE
                                        //S
                                        //SW
                                        //W
                                        if (g->cells[i * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                                f_count++:
                                        }
                                        //NW
                                        if (g->cells[(i-1) * g->ncols + (j-1)] == 'f'){
                                                f_count++;
                                        }
					                                //W edge
                                        //N
                                        if (g->cells[(i-1) * g->ncols + j == 'f']){
                                                f_count++;
                                                f_count++;
                                        }
                                        //NE
                                        if (g->cells[(i-1) * g->ncols + (j+1) == 'f']){
                                                f_count++;
                                        }
                                        //E
                                        if (g->cells[i * g->ncols + (j+1)] == 'f'){
                                                f_count++;
                                        }
                                        //SE
                                        if (g->cells[(i+1) * g->ncols + (j+1)] == 'f'){
                                                f_count++;
                                        }
                                        //S
                                        if (g->cells[(i+1) * g->ncols + j] == 'f'){
                                                f_count++;
                                                f_count++;
                                        }
                                        //W
                                        //NW
                                }
                                        }
                        }else if (f_count>3){
                                g->cells[i * g->ncols + j] = 'f';
				age_g->cells[i * g->ncols + j] = -1;
                                f_count = 0;
                        }
                        }
		}
		
		//age of f>2 -> b
			if (cur=='f' &&age_g->cells[i * g->ncols + j]>0){
				age_g->cells[i * g->ncols + j] = -1;
				g->cells[i * g->ncols + j] = 'b';
			}
		//age of b>3 -> s
			if (cur=='b' &&age_g->cells[i * g->ncols + j]>1){
                                age_g->cells[i * g->ncols + j] = -1;
                                g->cells[i * g->ncols + j] = 's';
                        }
		//cur==s && 2 neighbors==g 
		//cur==s && 4 neighbors==w
			if (cur=='s'){
				if (g_count<2){
					//no edges
				if (i!=0 && i!=nrows && j!=0 && j!=ncols){
					//N
					if (g->cells[(i-1) * g->ncols + j == 'g']){
						g_count++;
					}	
					//NE
                                        if (g->cells[(i-1) * g->ncols + (j+1) == 'g']){
                                                g_count++;
					}
					//E
					if (g->cells[i * g->ncols + (j+1)] == 'g'){
						g_count++;
					}	
					//SE
                                        if (g->cells[(i+1) * g->ncols + (j+1)] == 'g'){
                                                g_count++;
                                        }
					//S
					if (g->cells[(i+1) * g->ncols + j] == 'g'){
                                                g_count++;
                                        }
					//SW
                                        if (g->cells[(i+1) * g->ncols + (j-1)] == 'g'){
                                                g_count++;
                                        }
					//W
                                        if (g->cells[i * g->ncols + (j-1)] == 'g'){
                                                g_count++;
                                        }
					//NW
                                        if (g->cells[(i-1) * g->ncols + (j-1)] == 'g'){
                                                g_count++;
                                        }
				//Corners
				}else if ((i!=0 && j!=ncols) && (i!=nrows && j!=ncols) && (i!=nrows && j!=ncols) && (i!=0 && j!=0)){
				//N edge
                                        //NE
                                        //E
                                        if (g->cells[i * g->ncols + (j+1)] == 'g'){
                                                g_count++;
						g_count++;
                                        }
                                        //SE
                                        if (g->cells[(i+1) * g->ncols + (j+1)] == 'g'){
                                                g_count++;
                                        }
                                        //S
                                        if (g->cells[(i+1) * g->ncols + j] == 'g'){
                                                g_count++;
                                        }
                                        //SW
                                        if (g->cells[(i+1) * g->ncols + (j-1)] == 'g'){
                                                g_count++;
                                        }
                                        //W
                                        if (g->cells[i * g->ncols + (j-1)] == 'g'){
                                                g_count++;
						g_count++;
                                        }
                                        //NW
				//E edge
                                        //N
                                        if (g->cells[(i-1) * g->ncols + j == 'g']){
                                                g_count++;
						g_count++;
                                        }
                                        //NE
                                        //E
                                        //SE
                                        //S
                                        if (g->cells[(i+1) * g->ncols + j] == 'g'){
                                                g_count++;
						g_count++;
                                        }
                                        //SW
                                        if (g->cells[(i+1) * g->ncols + (j-1)] == 'g'){
                                                g_count++;
                                        }
                                        //W
                                        if (g->cells[i * g->ncols + (j-1)] == 'g'){
                                                g_count++;
                                        }
                                        //NW
                                        if (g->cells[(i-1) * g->ncols + (j-1)] == 'g'){
                                                g_count++;
                                        }
				//S edge
                                        //N
                                        if (g->cells[(i-1) * g->ncols + j == 'g']){
                                                g_count++;
                                        }
                                        //NE
                                        if (g->cells[(i-1) * g->ncols + (j+1) == 'g']){
                                                g_count++;
                                        }
                                        //E
                                        if (g->cells[i * g->ncols + (j+1)] == 'g'){
                                                g_count++;
						g_count++;
                                        }
                                	//SE
                                        //S
					//SW
                                        //W
                                        if (g->cells[i * g->ncols + (j-1)] == 'g'){
                                                g_count++;
						g_count++:
                                        }
                                        //NW
                                        if (g->cells[(i-1) * g->ncols + (j-1)] == 'g'){
                                                g_count++;
                                        }
				//W edge
                                        //N
                                        if (g->cells[(i-1) * g->ncols + j == 'g']){
                                                g_count++;
						g_count++;
                                        }
                                        //NE
                                        if (g->cells[(i-1) * g->ncols + (j+1) == 'g']){
                                                g_count++;
                                        }
                                        //E
                                        if (g->cells[i * g->ncols + (j+1)] == 'g'){
                                                g_count++;
                                        }
                                        //SE
                                        if (g->cells[(i+1) * g->ncols + (j+1)] == 'g'){
                                                g_count++;
                                        }
                                        //S
                                        if (g->cells[(i+1) * g->ncols + j] == 'g'){
                                                g_count++;
						g_count++;
                                        }
                                        //W
					//NW
				}
					}
			}else if (f_count>1){
				g->cells[i * g->ncols + j] = 'f';
				age_g->cells[i * g->ncols + j]--;
				g_count = 0;
			}
			}
				
				}else if (g_count>4){

				
				}
			}

		}
	}
	printf("\n");
	return g;
}

int main(void) {
	int nrows, ncols, steps;

	scanf("%d", &steps);
	scanf("%d,%d", &nrows, &ncols);
	getchar();  // Source one

	Grid *pg = (Grid *) malloc(sizeof(Grid));
	pg->nrows = nrows;
	pg->ncols = ncols;
	pg->cells = (char *) malloc(nrows * ncols * sizeof(char));

	char *s;
	size_t len = 0;

	for (int i = 0; i < nrows; i++) {
		getline(&s, &len, stdin);
		for (int j = 0; j < ncols; j++) {
			pg->cells[i * ncols + j] = s[j * 2];
		}
	}
	
	//age grid
	Grid *age_pg = (Grid *) malloc(sizeof(Grid));
        age_pg->nrows = nrows;
        age_pg->ncols = ncols;
        age_pg->cells = (char *) malloc(nrows * ncols * sizeof(char));

	char *age_s;
	for (int i = 0; i < nrows; i++) {
                for (int j = 0; j < ncols; j++) {
                        age_pg->cells[i * ncols + j] = 0;
                }
        }

	free(s);

	printf("Age Grid:\n");

	for (int i = 0; i < age_pg->nrows; i++) {
                for (int j = 0; j < age_pg->ncols; j++) {
                        printf("%d", age_pg->cells[i * age_pg->ncols + j]);
                }
        	printf("\n");
        }
        printf("\n");

	printf("Initial Grid:\n");
	for (int i = 0; i < pg->nrows; i++) {
        	for (int j = 0; j < pg->ncols; j++) {
            		printf("%c ", pg->cells[i * pg->ncols + j]);
        	}
        	printf("\n");
    	}
    	printf("\n");

	printf("Updated Grid:\n");
	
	for (int i=0; i<steps; i++){
		update(pg, age_pg);
	}

	free(age_pg->cells);
	free(age_pg);
	free(pg->cells);
	free(pg);

	return 0;
}
