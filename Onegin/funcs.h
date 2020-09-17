#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <locale.h>
#include <stdlib.h>
//заголовочный файл
//Str - структура для хранения информации о строке
//str - указатель на начало строки в буфере, length - её длина
struct Str{
	char *str;
	int length;
};

//Read_Buff производит считывание символов из указателя f файла input.txt в буфер buff
// и возвращает в size кол-во символов в файле, а в strcnt кол-во строк в файле
void Read_Buff(FILE *f, char **buff, int *size, int *strcnt);

//Make_Index заполняет массив структур Str данными о строках из буфера
void Make_Index(char *buff, struct Str **index, int strcnt);

//Is_Legit_Symb возвращает 1, если x является русской/латинской буквой или цифрой, иначе возвращает 0
int Is_Legit_Symb(unsigned char x);

//Str_Comp_Begin сравнивает строки str1 и str2 СЛЕВА НАПРАВО и возвращает:
// 1, если str1 > str2
// 0, если str1 == str2
//-1, если str2 < str1
int Str_Comp_Begin(const struct Str *str1, const struct Str *str2);

//Str_Comp_End сравнивает строки str1 и str2 СПРАВА НАЛЕВО и возвращает:
// 1, если str1 > str2
// 0, если str1 == str2
//-1, если str2 < str1
int Str_Comp_End(const struct Str *str1, const struct Str *str2);

//Output_Text записывает данные из массива index 
//в файл, на который указывает f
void Output_Sorted_Text(struct Str *index, int strcnt, FILE *f);

//Output_Original_Text выводит исходный текст в файл fout
void Output_Original_Text(char *buff, int size, FILE *fout);
