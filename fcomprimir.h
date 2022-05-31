#ifndef __FCOMPRIMIR_H_
#define __FCOMPRIMIR_H_

BTree* arr_ascii_chars();

void arr_ascii_chars_frec(char* res, int len, BTree* ascii_chars);

BTree* arr_merge(BTree *a1, int l1, BTree *a2, int l2);

BTree* arr_mergesort(BTree *a, int n);

BTree huff_chars_tree (BTree* ascii_chars);

void codificar_valores(BTree arbolGenerado, char* codificacion,
                      char* serializacion, int* cant_hojas,
                      int* len_codificacion, char** arr_codificaciones);

char* codificar_archivo(char** arr_codificaciones, char* file_arr, int len_file, int lenMax);

void serializar_arbol(BTree arbolGenerado, char* codificado);

#endif