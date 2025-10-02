//
// Created by Ruben on 10/2/2025.
//

#include "cancha_de_futbol.h"
#include "matrix.h"

void cancha_de_futbol() {
  constexpr int n_rows = 8, n_cols = 10;
  auto cancha = create_matrix(n_rows, n_cols);
  fill_matrix_random(cancha, n_rows, n_cols, 0, 399);
  print_matrix(cancha, n_rows, n_cols);
}
