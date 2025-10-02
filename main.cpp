#include <iostream>
#include <iomanip>

void ejemplo_crear_matriz() {
  // 1. Crear una matriz
  constexpr int n_rows = 4;
  constexpr int n_cols = 5;
  int** m = new int*[n_rows];
  for (int i = 0; i < n_rows; ++i) {
    m[i] = new int[n_cols];
  }

  // 2.a Asignarle valores
  int x = 1;
  for (int i = 0; i < n_rows; ++i) {
    for (int j = 0; j < n_cols; ++j) {
      m[i][j] = x++;
    }
  }

  // 2.b Imprimir la matriz
  for (int i = 0; i < n_rows; ++i) {
    for (int j = 0; j < n_cols; ++j) {
      std::cout << std::setw(4) << m[i][j];
    }
    std::cout << '\n';
  }

  // Liberar una matriz
  for (int i = 0; i < n_rows; ++i) {
    delete[] m[i];
  }
  delete[] m;
}

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

void fill_matrix_sequence(int** m, const int n_rows, const int n_cols, int initial=1) {
  for (int i = 0; i < n_rows; ++i) {
    for (int j = 0; j < n_cols; ++j) {
      m[i][j] = initial++;
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

void ejemplo_crear_matriz_2() {
  auto m = create_matrix(4, 5);
  fill_matrix_sequence(m, 4, 5, 4);
  print_matrix(m, 4, 5);
  release_matrix(m, 4, 5);
}


int main() {
  // ejemplo_crear_matriz();
  ejemplo_crear_matriz_2();
  return 0;
}