#include "ft_bsq.h"

int ft_search_place (int a, char *mass[])
{
    char a;
    int count; // а здесь - положение конкретного печатаемого символа
    int x; // это мы считаем длину массива по горизонтали
    int y; // а это - длина по вертикали

    a = "o";
    x = 0;
    count = 0;
    if (count != a && count == ".")
        write (1, "x", 1);
        count++;
    else
        count++;
    

    else if(mass[y][count] == "." && mass[y + 1][count] == ".")
        write (1, "x", 1);

}
