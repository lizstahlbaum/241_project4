#ifndef GRID_H
#define GRID_H

typedef struct {
    char *cells;
    int nrows;
    int ncols;
} Grid;

Grid * update(Grid *, int nrows, ncols);

#endif
