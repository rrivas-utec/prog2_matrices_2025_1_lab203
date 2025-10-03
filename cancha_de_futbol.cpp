//
// Created by Ruben on 10/2/2025.
//

#include "cancha_de_futbol.h"

#include <iostream>
#include <ostream>
#include <iomanip>

#include "matrix.h"

void print_cancha(int** m, const int n_rows, const int n_cols) {

  std::cout << std::setw(4) << "";
  for (T j = 0; j < n_cols; ++j) {
      std::cout << std::setw(4) << col_name[j];
  }
  std::cout << std::endl;

  for (int i = 0; i < n_rows; ++i) {
    std::cout << std::setw(4) << i + 1;
    for (int j = 0; j < n_cols; ++j) {
      std::cout << std::setw(4) << m[i][j];
    }
    std::cout << '\n';
  }
}

void cancha_de_futbol() {
  constexpr int n_rows = 8;
  constexpr int n_cols = 10;
  auto cancha = create_matrix(n_rows, n_cols);
  fill_matrix_random(cancha, n_rows, n_cols, 0, 399);
  print_cancha(cancha, n_rows, n_cols);

  while (true) {
    int opcion = menu();
    if (opcion == 4) {
      break;
    }

    switch (opcion) {
      case 1: //
        reporte_total_resanado(cancha, n_rows, n_cols);
        break;
      case 2:
        reporte_por_sector_especifico(cancha, n_rows, n_cols);
        break;
      case 3:
        reporte_por_letra(cancha, n_rows, n_cols);
        break;
    }
  }
}

int menu() {
  int option;
  std::cout << "MENU" << std::endl;
  std::cout << "----" << std::endl;
  std::cout << "1. Reporte total de resanado" << std::endl;
  std::cout << "2. Reporte por sector especifico" << std::endl;
  std::cout << "3. Reporte por Letra" << std::endl;
  std::cout << "4. Salir" << std::endl;

  std::cout << "\nOpcion:" << std::endl;
  do {
    std::cin >> option;
  } while (option < 1 || option > 4);
  return option;
}

void reporte_total_resanado(int **cancha, int n_row, int n_col) {

  // Calculo total de sectores a resanar
  int total_resana = 0;
  for (int i = 0; i < n_row; i++) {
    for (int j = 0; j < n_col; j++) {
      if (cancha[i][j] >= 100 && cancha[i][j] < 200) {
        total_resana++;
      }
    }
  }
  std::cout << "Total a resanar: " << total_resana << std::endl;

  // Impresion de los sectores
  for (int i = 0; i < n_row; i++) {
    for (int j = 0; j < n_col; j++) {
      if (cancha[i][j] >= 100 && cancha[i][j] < 200) {
        std::cout << "Sector:" << i + 1 <<  col_name[j] << std::endl;
      }
    }
  }
}

void reporte_por_sector_especifico(int **cancha, int n_row, int n_col) {
}

void reporte_por_letra(int **cancha, int n_row, int n_col) {
}
