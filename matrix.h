//
// Created by Ruben on 10/2/2025.
//

#ifndef MATRIX_H
#define MATRIX_H

using T = int;
T** create_matrix(const T n_rows, const T n_cols);
void print_matrix(T** m, const T n_rows, const T n_cols);
void fill_matrix_sequence(T** m, const T n_rows, const T n_cols, T initial=1);
void fill_matrix_random(T** m, const T n_rows, const T n_cols, T initial, T final);
void release_matrix(T**& m, const T n_rows, const T n_cols);

#endif //MATRIX_H
