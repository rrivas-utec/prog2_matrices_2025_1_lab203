//
// Created by Ruben on 10/2/2025.
//

#ifndef CANCHA_DE_FUTBOL_H
#define CANCHA_DE_FUTBOL_H

// Declaración

const char col_name[] = "ABCDEFGHIJ";
void cancha_de_futbol();
int menu();
void reporte_total_resanado(int** cancha, int n_row, int n_col);
void reporte_por_sector_especifico(int** cancha, int n_row, int n_col);
void reporte_por_letra(int** cancha, int n_row, int n_col);



#endif //CANCHA_DE_FUTBOL_H
