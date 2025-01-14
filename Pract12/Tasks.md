## Сортировки

## Рекурсия
![rec](https://github.com/user-attachments/assets/7d9be49c-1267-4600-8a2e-c7143f36abd3)

### Дефиниция
Рекурсия е програмна техника, при която даден метод извиква сам себе си при решаването на определен проблем.
Един обект наричаме рекурсивен, ако съдържа себе си или е дефиниран чрез себе си.
### Пример
```
int sumRange(int num)
{
    if (num == 0) {
         return 0;
    }

    return num + sumRange(num - 1);
}
```
### Дъно на рекурсия
Реализирайки рекурсия, трябва да сме сигурни, че след краен брой стъпки ще получим конкретен резултат.
Tрябва да имаме един или няколко случаи, чието решение можем да намерим директно, без рекурсивно извикване. Тези случаи наричаме дъно на рекурсията.
**Пример 1**

Рекурсивна функция без дъно... :(
```
int fibonacci(int n) {
    cout << "Изчисляваме fibonacci(" << n << ")" << endl;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
```
Правилно
```
int fibonacci(int n) {
    if (n == 0) return 0; // Дъно на рекурсията
    if (n == 1) return 1; // Друго дъно на рекурсията
    return fibonacci(n - 1) + fibonacci(n - 2); // Рекурсивно извикване
}
```

**Пример 2**

Рекурсивна функция за НОД без дъно... :(
```
int gcd(int a, int b) {
    cout << "gcd(" << a << ", " << b << ")" << endl;
    return gcd(b, a % b);
}
```
Правилно
```
int gcd(int a, int b) {
    // Дъно на рекурсията: когато второто число е 0
    if (b == 0) {
        return a;
    }
    // Рекурсивно извикване
    return gcd(b, a % b);
}
```
### Задача 1 - conatainsDig

Да се напише рекурсивна функция, която установява, дали в записа на естественото число n се съдържа цифрата k

### Задача 2 - isMonotonic
Да се напише рекурсивна програма, която проверява дали редицата а0, а1, …, аn-1 е монотонно растяща.

### Задача 3 - palindrom
Да се напише рекурсивна програма, която проверява дали даден низ е палиндром.

### Задача 4 - powerOfNum
Като се използва рекурсивната дефиниция на функцията за степенуване да се напише програма, която по дадени - цели положителни числа x и n, намира стойността на x^n.

### Задача 5 - contains
Да се реализира рекурсивна функция, която приема произволен масив и число и връща дали числото се съдържа в масива.

### Задача 6 - BinarySearch
Да се реализира рекурсивна функция, която приема сортиран масив и число и връща дали числото се съдържа в масива.(Двоично търсене)

### Задача 7 - LowerUpper
Да се реализира рекурсивна функция, която приема стринг и връща броя на малките и главните букви.

### Задача 8 - ArrDiff
Разлика на два целочислени масива arr1 и arr2 с дължина N се получава като от броя индекси i, за които arr1[i] > arr2[i], извадим броя индекси j, за които arr2[j] > arr1[j].
Напишете **рекурсивна** функция, която пресмята разликата на два подадени целочислени масива с **равна** дължина и пресмята разликата им.

Вход
```
[1, 4, 6, 3, 5]
[5, 4, 2, 1, 3]
```
Изход
```
2
```