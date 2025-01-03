# Уводни Примери


1) Ще се компилира ли следното парче код? Ако да, какво ще се изпечата на екрана?

```C++
#include <iostream>

int main()
{
    double num1 = 6;
    double num2 = 4/7;
    --num2 = ++num1 + 2;
    std::cout<<num2;
    
    return 0;
}

```

2) Ще се компилира ли следното парче код? Ако да, какво ще се изпечата на екрана?
```C++
#include <iostream>

int main()
{
    double num = 0;
    std::cin>>num;
    std::cout<<num % 5;
    
    return 0;
}
```

3) Ще се компилира ли следното парче код? Ако да, какво ще се изпечата на екрана?
```C++
#include <iostream>

int main()
{
    double num = 1.2;
    int a = 4;
    bool b = !!a; 
    num-=b;
    std::cout<<num/0;
    
    return 0;
}
```

4) Ще се компилира ли следното парче код? Ако да, какво ще се изпечата на екрана?
```C++
#include <iostream>

int main()
{
    for (int i = 0, j = 1; j <= 6; i++)
    {
        std::cout << i << ' ' << ++j << std::endl;
    }
    
    return 0;
}
```

5) Ще се компилира ли следното парче код? Ако да, какво ще се изпечата на екрана?
```C++
#include <iostream>

int main()
{
    int a = 10;

    while (--a)
    {
        std::cout << a % 2 << std::endl;
    }

    return 0;
}
```


6) Като използвате do-while, напишете код, еквивалентен на дадения:
```C++
#include <iostream>

int main()
{
    for (int i = 0; i <= 9; i++, std::cout << i << " " << std::endl);
    
    return 0;
}
```

7) Ще се компилира ли следното парче код? Ако да, какво ще се изпечата на екрана?
```C++
#include <iostream>

int main()
{
    do
    {
        int a = 5;
        std::cout<<++a<<std::endl;
    } while(a<=10);

    return 0;
}
```

8) Напишете еквивалентен код на следния програмен фрагмент, като използвате оператор if.
```C++
#include <iostream>

int main()
{
    int n = 0; 
    std::cin >> n;
	switch (n) 
	{
		case 2: cout << "two";
		case 3: cout << "three"; break;
		default: cout << "dflt";
	}

    return 0;
}
```

9) Напишете еквивалентен код на следния програмен фрагмент, като използвате оператор switch.
```C++
#include <iostream>

int main()
{
    int a = 0; 
    std::cin >> a;
    if (a >= 1)
    {
        if (a < 4)
        {
            std::cout << "smaller than 4";
        }
        else if (a == 432) 
        {
            std::cout << "too big";
        }
    }
    return 0;
}
```

10) Ще се компилира ли следното парче код? Ако да, какво ще се изпечата на екрана?

```C++
#include <iostream>

int a = 10;

int f(int num)
{
    a *= 2;
    std::cout << a <<' ';
    return num + a + 2;
}

int main()
{
    int a = 3, b = 4;
    b = f(b);
    std::cout << a << ' ' << b << ::a;
    return 0;
}
```

11) Ще се компилира ли следното парче код? Ако да, какво ще се изпечата на екрана?

```C++
#include <iostream>

int g(int& a, int b = 3)
{
    a -= 3;
    b += 5;
    return a + b;
}

int main()
{
    int a = 6;
    int b = 4;
    std::cout << g(a) << std::endl;
    std::cout << g(a, b) << std::endl;
    std::cout << a << ' ' << b << std::endl;
    return 0;
}
```

# Задачи

1. Да се напише функция, която приема цяло число и връща броя на всичките му делители.

2. Напишете функция, която връща сбора на цифрите на едно число. 

3. Да се напише функция, която приема оценка [2.00; 6.00], и отпечатва на екрана с думи. При невалиден вход да се отпечата подходящо съобщение.

4. Да се напише функция, която приема цяло число, и връща броя на цифрите в него.

5. Да се напише функция, която приема цяло положително число, и го връща обърнато.

6. Да се напише функция, при която се чете число и след това започват да се четат числа, докато не се прочете число, равно на сбора на прочетените преди него числа. 

7. Да се напише функция geometricProgression(int start, int ratio, unsigned int n), която извежда на екрана първите n члена на прогресията.

8. Числата a и b се наричат сдвоени, ако a + 2 = b. Напишете фунцкия, която извежда на екрана всички двойки сдвоени числа в даден интервал [p, q].

9. Да се напише функция, която приема две числа, и го конкатенирa

10. Да се напише функция на C++, със сигнатура int AnalyzeNum(long N) която връща като резултат средната цифра на числото N. Средна цифра, наричаме такава, за която броят M, M>0 на останалите цифри в числото, които са по-големи или по-малки от нея е еднакъв. Функцията да връща -1, ако няма такава цифра. 

11. Дефинирайте функция с име "isPerfect", която определя дали едно число е перфектно. Цяло число се нарича "перфектно", ако сумата от неговите делители, без самото число, е равна на числото. Напишете фунцкия generatePerfectNums, която приема като аргументи краищата на интервала [a; b] и извежда всички пефектни числа в интервала.

12. Да се напише фунцкия bool permutationNumbers(int a, int b), която връща дали числата a и b са пермутации едно на друго.

13. Напишете фунцкия, която по подадени 3 цели числа a, b и k прехвърля последните k цифри на a в началото на b.

14.  Да се напише функция getRemainder(int first, int second), която играе ролята на оператор % (за делене с остатък), т.е. връща като резултат first % second. Не може да използвате оператор % за тази задача!

15.  Напишете функция void removeDigitAt(unsigned& num, unsigned index), която премахва цифрата на съответната позиция. Броим позициите от ляво надясно, започвайки от 1. Функцията не променя числото, при невалиден индекс.
