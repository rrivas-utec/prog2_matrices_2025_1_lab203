//
// Created by Ruben on 10/2/2025.
//

#include "matrix.h"
#include <iostream>
#include <iomanip>
#include <random>

int** create_matrix(const int n_rows, const int n_cols) {
  int** m = new int*[n_rows];
  for (int i = 0; i < n_rows; ++i) {
    m[i] = new int[n_cols];
  }
  return m;
}

void print_matrix(int** m, const int n_rows, const int n_cols) {
  // 2.b Imprimir la matriz
  for (int i = 0; i < n_rows; ++i) {
    for (int j = 0; j < n_cols; ++j) {
      std::cout << std::setw(4) << m[i][j];
    }
    std::cout << '\n';
  }
}

void fill_matrix_sequence(int** m, const int n_rows, const int n_cols, int initial) {
  for (int i = 0; i < n_rows; ++i) {
    for (int j = 0; j < n_cols; ++j) {
      m[i][j] = initial++;
    }
  }
}

void fill_matrix_random(int **m, const int n_rows, const int n_cols, const int initial, const int final) {
  std::random_device rd;
  std::uniform_int_distribution<int> dist(initial, final);
  for (int i = 0; i < n_rows; ++i) {
    for (int j = 0; j < n_cols; ++j) {
      m[i][j] = dist(rd);
    }
  }
}

void release_matrix(int**& m, const int n_rows, const int n_cols) {
  for (int i = 0; i < n_rows; ++i) {
    delete[] m[i];
  }
  delete[] m;
  m = nullptr;
}
