//
// Created by Ruben on 10/2/2025.
//

#include "matrix.h"
#include <iostream>
#include <iomanip>
#include <random>

T** create_matrix(const T n_rows, const T n_cols) {
  T** m = new T*[n_rows];
  for (T i = 0; i < n_rows; ++i) {
    m[i] = new T[n_cols];
  }
  return m;
}

void print_matrix(T** m, const T n_rows, const T n_cols) {
  // 2.b Imprimir la matriz
  for (T i = 0; i < n_rows; ++i) {
    for (T j = 0; j < n_cols; ++j) {
      std::cout << std::setw(4) << m[i][j];
    }
    std::cout << '\n';
  }
}

void fill_matrix_sequence(T** m, const T n_rows, const T n_cols, T initial) {
  for (T i = 0; i < n_rows; ++i) {
    for (T j = 0; j < n_cols; ++j) {
      m[i][j] = initial++;
    }
  }
}

void fill_matrix_random(T **m, const T n_rows, const T n_cols, const T initial, const T final) {
  std::random_device rd;
  std::uniform_int_distribution<T> dist(initial, final);
  for (T i = 0; i < n_rows; ++i) {
    for (T j = 0; j < n_cols; ++j) {
      m[i][j] = dist(rd);
    }
  }
}

void release_matrix(T**& m, const T n_rows, const T n_cols) {
  for (T i = 0; i < n_rows; ++i) {
    delete[] m[i];
  }
  delete[] m;
  m = nullptr;
}
