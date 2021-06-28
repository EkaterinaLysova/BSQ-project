#include "ft_bsq.h"

int ft_search_place (int a, char *mass[])
{
    char a; // здесь мы указываем препятствия
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
    

    else if(mass[y][count] == "." && (mass[y + 1][count] != "o" || mass[y + 1][count] != "\n"))
        write (1, "x", 1);

/*Начните с верхнего левого угла. Посмотрите, сработает ли квадрат 1x1.

Если это сработает, увеличьте длину сторон квадрата на 1 и повторите.
Если это не сработает, двигайтесь вправо и повторите. Если вы достигли 
самой правой позиции, перейдите к следующей строке.
}*/

int	ft_recursive_for_square(int nb, int power) // функция возвращает значение степени, примененной к числу. Изменено под нужные нам параметры.
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb + (ft_recursive_for_square(nb, power - 1)));
}

int max_square (int lenght, int *value)
{
    char square; 
    int size;

    square = [matrix * lenght];
    size = 0;

    if (size == 0)
        if (size =="o")
            size++;
        else
            size = size + 1;
}
