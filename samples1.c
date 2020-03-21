//Алгоритм Эвклида с «вычитанием».
#include <stdio.h>

// Определение наибольшего общего делителя. Алгоритм Эвклида

int main(int argc, const char *argv[])
{
	int a;
	int b;
	printf("%s", "Input a:");
	scanf_s("%d", &a);
	printf("%s", "Input b:");//спецификатор указывает что будет выведена строка
	scanf_s("%d", &b);
	
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}	
	}
		
	printf("Divider: %i", a);
	getch();
	return 0;
}


//Алгоритм Эвклида ускоренный.
#include <stdio.h>
#include <math.h>
// Определение наибольшего общего делителя. Алгоритм Эвклида
//Переопределим тип данных long
#define L long

L Divider(L a, L b)
{
	L c;
	while (b)
	{
		c = a%b; //делим по модулю
		a = b;
		b = c;
	}
	return a;
}


int main(int argc, const char *argv[])
{
	int a;
	int b;
	printf("%s", "Input a:");
	scanf_s("%d", &a);
	printf("%s", "Input b:");
	scanf_s("%d", &b);
	printf("Divider: %i", Divider(a, b));
	getch();
	return 0;
}

//Программа определения простоты числа
//считаем количество делителей
#include <stdio.h>
int main(int argc, char *argv[])
{
	int number;
	printf("Input number:");
	scanf_s("%d", &number);
	int d = 0;
	int i = 2;

	while (i < number)
	{
		if (number % i == 0) d++;
		i++;
	}

	if (d == 0)
		printf("Number is simple");
	else
		printf("Number is not simple");
	getch();
	return 0;
}

//Определение средней оценки с помощью цикла while. Используем счётчик
#include <stdio.h>
// Вычисление средней оценки инструкцией повторения, управляемой счетчиком/ Складываем все оценки и делим на их количество

int main(int argc, char *argv[])
{
	unsigned int counter;   // количество оценок
	int grade;              // значение оценки
	int sum;                // сумма оценок
	double average;         // средняя оценка

	sum = 0;
	counter = 1;

	while (counter <= 10) //считаем сколько оценок введено
	{
		printf("%s", "Enter grade:");
		scanf_s("%d", &grade);
		sum = sum + grade;
		counter++;
	}

	average = (double)sum / 10; //Делим сумму на общее количество оценок
	printf("Class average is %lf\n", average);
	getch();
	return 0;
}

//Определение средней оценки с помощью цикла while. Используем Флаг
#include <stdio.h>
// Разработать программу вычисления средней оценки по классу для произвольного количества учащихся
// Принимаем значения до тех пор пока не будет введен -1

int main(int argc, char *argv[])
{
	int counter = 0;   // количество оценок
	int grade = 0;     // значение оценки
	double sum = 0;    // сумма оценок
	double average;    //средняя оценка

	do
	{
		sum = sum + grade;
		counter++;
		printf("%s", "Enter grade (or -1 to):");
		scanf_s("%d", &grade);
	} while (grade != -1);

	if (counter != 0)
	{
		average = sum / counter;
		printf("Class average is %g\n", average);
	}
	else
	{
		puts("No grades were entered");
	}

	getch();
	return 0;
}

//Найти сумму цифр целого числа
#include <stdio.h>
int sumDigit(long a)
{
    int result = 0;
    while (a > 0)
    {
        result = result + a % 10;
        a = a / 10;
    }
    return result;
}

int main(int argc, char *argv[])
{
    int n;
    printf("Input number:");
    scanf("%d", &n);
    printf("Sum digit: %d", sumDigit(n));

    return 0;
}

//Функция переворота числа
#include <stdio.h>
long reverse(long n)
{
   long result = 0;
   while (n > 0)
   {
       result = result * 10 + n % 10;
       n /= 10;
   }
   return result;
}

int main(int argc, char *argv[])
{
   int n = 123;
   printf("%d %d\n", n, reverse(n));
   return 0;
}

//Перевод из одной системы счисления в другую
   int result = 0;
   while (n > 0)
   {
       result = result * 10 + n % 2;
       n /= 2;
}


///Вариант перевода из одной системы счисления в другую
#include <stdio.h>
#define ARR_SIZE 100

// Задаём значение первого элемента, чтобы обнулить остальные
int bin[ARR_SIZE] = {0};
int size = 0;    // количество реально задействованных элементов массива

void convertToBin(long n)
{
    int i=0;
    while (n > 0)
    {
        bin[i++] = n % 2;
        n /= 2;
    }
    size = i;
}
void binPrint()
{
    int i;
    for(i = size - 1; i >= 0; i--)
        printf("%d", bin[i]);
    printf("\n");
}
int main(int argc, char *argv[])
{
    int N = 3;
    convertToBin(N);
    binPrint();

    N = 1024;
    convertToBin(N);
    binPrint();

    return 0;
}

//Функция возведения в степень
#include <stdio.h>
long Pow(int a, int b)//Первое число основание степени, второе показатель.
{
	long p = 1;
	while (b)
	{
		p = p * a;//Умножаем число а само на себя b раз
		b--;
	}
	return p;
}

int main(int argc, char *argv[])
{
	int number;
	int power;

	printf("Input: number power:  ");
	scanf("%d %d", &number, &power);

	printf("%d", (int)Pow(number,power));//Результат приводим к типу int и выводим как десятичное число.
	
	getch();
	return 0;
}


//УСКОРЕННАЯ Функция возведения в степень
#include <stdio.h>
long quickPow(int a, int b) //Первое число основание степени, второе показатель.
{
	long n = 1;
	while (b) 
	{
		//Если число делится по модулю на два то получается 0, а это значит что оно чётное и здесь будет false
		if (b % 2) 
		{
			b--;
			n *= a;
		}
		else
		{
			//Поэтому тут пользуемся свойством чётности степени. Если степень n чётная, то переходим к степени вдвое меньшей, иначе заменяем по имеющимся правилам нечётную степень на чётную.
			a *= a;
			b /= 2;
		}
	}
	return n;
}


int main(int argc, char *argv[])
{
	int number;
	int power;

	printf("Input: number power:  ");
	scanf("%d %d", &number, &power);

	printf("%d", quickPow(number,power));
	
	getch();
	return 0;
}


//Генератор псевдослучайных чисел
#include <stdio.h>
int main(int argc, char *argv[])
{
    int x, a, b, m;
    m = 100; // Вершина последовательности
    b = 3;
    a = 2;
    x = 1;
    int i;
    int modulus = 100;

    for (i = 0; i < modulus; i++)
    {
        x = (a * x + b) % m;
        printf("%d ", x);
    }
    
    return 0;
}

//Встроенный генератор случайных чисел
#include <stdio.h>
#include <stdlib.h>        // Для использования генератора случайных чисел
int main(int argc, char *argv[])
{
    srand(time(NULL));   // Инициализация счётчика случайных чисел.
    printf("%d\n", rand());// возвращает псевдослучайное целое число в диапазоне int.
    printf("%d\n", rand() % 100);           //... от 0 до 99
    printf("%d\n", rand() % 100 + 1);     //... от 1 до 100
    printf("%d\n", rand() % 10 + 100);   //... от 100 до 109
}