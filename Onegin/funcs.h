/**
 * @file
 * @brief Включает заголовочные файлы используемых библиотек и содержит объявления основных функций программы.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <locale.h>
#include <stdlib.h>

/**
 * @brief Хранит информацию о строке.
 * @param Str Строка
 * @param length Длина строки 
*/
struct Str{
	char *str;
	int length;
};

/**
 * @brief Находит количество символов в файле.
 * @param f Указатель на файл, размер которого нужно найти.
 * @param size указатель на переменную, в которую нужно записать количество символов в файле.
*/
void Size_Of_File(FILE *f, int *size);

/**
 * @brief Переносит данные из текста в буфер.
 * @param f Указатель на файл, из которого производится чтение.
 * @param buff Указатель на буфер, в который мы будем записывать файл.
 * @param size Указатель на переменную, в которой лежит размер файла в символах.
 * @param strcnt Указатель на переменную, в которой лежит кол-во строк в файле. 
*/
void Read_Buff(FILE *f, char **buff, int *size, int *strcnt);

/**
 * @brief Заполняет массив, на который указывает index, данными о строках.
 * @param buff Буфер текста.
 * @param index Указатель на массив структур Str, в котором хранится информация о строках в тексте.
 * @param strcnt Количество строк в тексте.
*/
void Make_Index(char *buff, struct Str **index, int strcnt);

/**
 * @brief Определяет, является ли символ латинской или русской буквой или цифрой.
 * @param x Проверяемый символ
 * @return 1, если символ - латинская или русская буква либо цифра, иначе 0.
*/
int Is_Legit_Symb(unsigned char x);

/**
 * @brief Сравнивает две строки в лексикографическом порядке слева направо.
 * @param str1 Указатель на объект структуры Str #1.
 * @param str1 Указатель на объект структуры Str #1.
 * @return Возвращает 0, если строки равны, 1 - если первая больше, 2 - если вторая больше.
*/
int Str_Comp_Begin(const struct Str *str1, const struct Str *str2);

/**
 * @brief Сравнивает две строки в лексикографическом порядке справа налево.
 * @param str1 Указатель на объект структуры Str #1.
 * @param str1 Указатель на объект структуры Str #1.
 * @return Возвращает 0, если строки равны, 1 - если первая больше, 2 - если вторая больше.
*/
int Str_Comp_End(const struct Str *str1, const struct Str *str2);

/**
 * @brief Выводит отсортированный текст в указанный файл.
 * @param index Массив индекс, содержащий информацию о строках.
 * @param strcnt Количество строк в файле.
 * @param f Файл, в который требуется записать текст.
*/
void Output_Sorted_Text(struct Str *index, int strcnt, FILE *f);

/**
 * @brief Выводит неотсортированный ный текст в указанный файл.
 * @param buff Буфер,хранящий неотсортированный текст.
 * @param size Количество символов в тексте.
 * @param fout Файл, в который требуется записать текст.
*/
void Output_Original_Text(char *buff, int size, FILE *fout);
