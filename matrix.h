//
// Created by Ruben on 10/2/2025.
//

#ifndef MATRIX_H
#define MATRIX_H

int** create_matrix(const int n_rows, const int n_cols);
void print_matrix(int** m, const int n_rows, const int n_cols);
void fill_matrix_sequence(int** m, const int n_rows, const int n_cols, int initial=1);
void fill_matrix_random(int** m, const int n_rows, const int n_cols, int initial, int final);
void release_matrix(int**& m, const int n_rows, const int n_cols);

#endif //MATRIX_H
