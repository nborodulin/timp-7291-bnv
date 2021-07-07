# Введение
Цель: Освоить работу в среде Gitlab. Написать три пргграммы на языке программирования C. Составить отчет, используя язык разметки Markdown.
***
# Задание
1. Написать программу, печатающую в stdout фразу "Hello, World!" на отдельной строке.
2. Написать программу, принимающую на вход два числа, разделённые пробелом, и суммирующую их. Ввод чисел производить из stdin, вывод результата - в stdout. Вводимые числа не превосходят по модулю 2147483647.
3. Написать программу, принимающую на вход числа x и y, разделённые пробелом, и вычисляющую x в степени y. Ввод чисел производить из stdin, вывод результата - в stdout. Вводимые числа не превосходят по модулю 2147483647. Реализовывать возведение в степень через цикл/рекурсию не допускается.
***
# Ход работы
В ходе выполнения практической работы была установлена ОС Linux. После установки Linux, в терминале прописываем команды, для установки нужного ПО:

```

sudo apt-get update

sudo apt-get install git splint build-essential -y

```

После написания программы, выполняется проверка программы через splint, где программа проверяется на ошибки и частоту написания кода.

Загружаем программы на gitlab и убеждаемся, что pipeline проходит успешно
![(https://gitlab.com/Nikifatron/practices/-/blob/master/pr1/images/pipeline.png)](https://gitlab.com/Nikifatron/practices/-/blob/master/pr1/images/pipeline.png)

Пишем отчет по работе в разметке Markdown.
***
## Код 01_hello.c
```
#include <stdio.h>

int main()
{
  printf("Hello, World!\n");
  return 0; 
}
```
На рисунке снизу представлена работа программы.
![(https://gitlab.com/Nikifatron/practices/-/blob/master/pr1/images/1.png)](https://gitlab.com/Nikifatron/practices/-/blob/master/pr1/images/1.png)
***
## Код 02_sum.c
```
#include <stdio.h>
#include <assert.h>

int main()
{
  double x1, x2;
  int q = scanf("%lf%lf", &x1, &x2);
  assert (q == 2);
  printf("%lf\n", x1 + x2);
  return 0;
}
```
На рисунке снизу представлена работа программы.
![(https://gitlab.com/Nikifatron/practices/-/blob/master/pr1/images/2.png)](https://gitlab.com/Nikifatron/practices/-/blob/master/pr1/images/2.png)
***
## Код 03_pow.c
```
#include <stdio.h>
#include <math.h>
#include <assert.h>

int main()
{
  double x = 0, y = 0, res;
  int r = scanf("%lf%lf", &x, &y);
  assert (r == 2);
  res = pow(x,y);
  printf("%lf\n", res);
  return 0;
}
```
На рисунке снизу представлена работа программы.
![(https://gitlab.com/Nikifatron/practices/-/blob/master/pr1/images/3.png)](https://gitlab.com/Nikifatron/practices/-/blob/master/pr1/images/3.png)
***
# Вывод
В ходе выполнения практической работы был освоен ресурс Gitlab, написаны 3 программы на языке C, которые прошли pipeline. Освоен язык разметки Markdown.
***
