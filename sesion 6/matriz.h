
#ifndef MATRIZ_H
#define MATRIZ_H

double** generarMatrizDouble(int fils, int cols);
int** generarMatrizInt(int fils, int cols);


void generarMatriz(int **&mat, int fils, int cols);
//int** generarMatriz(int fils, int cols);
void llenarAleatorios(int **mat, int fils, int cols, int min, int max);
void imprimir(int **mat, int fils, int cols);

#endif //MATRIZ_H
