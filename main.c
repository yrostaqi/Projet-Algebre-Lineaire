#include <stdio.h>
#include <stdlib.h>

typedef float E;
typedef struct matrix {
    E *mat;
    int nb_rows, nb_columns;
} Matrix;

Matrix newMatrix(int nb_rows, int nb_columns){
    Matrix m;
    E.mat = malloc(nb_rows * nb_columns * sizeof(E));
    m.nb_rows = nb_rows;
    m.nb_columns = nb_columns;
    return m;
}