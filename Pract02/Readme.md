# Уводни Примери
Kакво ще се изпечата:

1.
```C++
#include <iostream>

int main()
{
  int energy = 60;
  if ( energy = 0 )
    std::cout << "Game over";
  else if ( energy > 0 && energy < 50)
    std::cout << "Exhausted";
  else if ( energy >= 50 && energy < 100)
    std::cout << "Healthy";
  else
    std::cout << "Perfect";
  return 0;
}
```
2. 
```C++
#include <iostream>

int main()
{
  int a = 10;
  int b = 5;
  if (a, a/b, a - 2 * b)
  {
    std::cout << "If";
  }
  else
  {
    std::cout << "Else"; 
  }
}
```
3. Еквивалетни ли са кодовете?
```C++
#include <iostream>

int main()
{
  int grade = 0;
  std::cin >> grade;
  if ( grade == 6 )
    std::cout << "Excellent";
  else if ( grade == 5 )
    std::cout << "Very good";
  else if ( grade == 4 )
    std::cout << "Good";
  else if ( grade == 3 )
    std::cout << "Fair";
  else if ( grade == 2 )
    std::cout << "Poor";
  else
    std::cout << "Invalid";
}
```
```C++
#include <iostream>

int main()
{
   int grade = 0;
   std::cin >> grade;
   switch (grade)
   {
   case 2: std::cout << "Poor"; break;
   case 3: std::cout << "Fair"; break;
   case 4: std::cout << "Good"; break;
   case 5: std::cout << "Very good"; 
   case 6: std::cout << "Excellent"; break;
   case 1:
   default: std::cout << "Invalid"; break;
   }
}
```
4.
```C++
#include <iostream>

int main()
{
  int number = 3;
  if(number %= 2)
  {
    std::cout << "Odd" << std::endl;
    if(number == 1)
    {
      std::cout << "The number is 1";
    }
  }
}  
```
5.
```C++
#include <iostream>

int main() {
    int x = 3;
    int y = 8;
    int z = 2 * x + y;

    int result = (++x) * ((y += 2) / 2) - (y-- % 5) + (z * x) / (x + 1);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
```
6.
```C++
#include <iostream>

int main()
{
  int num = 10;
  if ( num = 9 )
    num / 3;
  if ( num, (--num)++ % 3 == 2)
  {
    std::cout << "Number is now: " << num;
  }
}
```

7. Пренапишете следния фрагмент, като използвате switch case
```C++
#include <iostream>

int main()
{
    int a;
    std::cin>>a;
    
    if(a!=4)
    {
        std::cout<<"four"<<std::endl;
    }
    if(a>=5 && a<=7)
    {
        std::cout<<"five & seven"<<std::endl;
    }
    if(a!=6)
    {
        std::cout<<"no value"<<std::cout;
    }
}

```
# Задачи
1. Да се напише програма, която приема година и връща дали е високосна. Упътване: Една година е високосна, ако се дели на 4 и не се дели на 100 или ако се дели на 400.

**Примери:**

Вход:
```
2016
```

Изход:
```
2016 is a leap year
```

Вход:
```
1983
```

Изход:
```
1983 isn't a leap year
```

2. Да се напише програма, която прочита цяло число. Програмата да извежда "zero", ако числото е 0, "even", ако е четно, и "odd", ако е нечетно.

**Примери:**

Вход:
```
45
```

Изход:
```
Odd
```

Вход:
```
0
```

Изход:
```
Zero
Even
```
3. Като използвате тернарен оператор, установете дали въведения символ от конзолата е малка латинска буква.

**Примери:**

Вход:
```
z
```

Изход:
```
True
```

Вход:
```
D
```

Изход:
```
False
```

4. Да се напише програма, която чете от конзолата символ и, ако е малка буква, извежда съответната голяма, ако е голяма буква, извежда съответната малка, а ако не е буква, да изведе съобщение за невалиден символ. Ако е буква, да се изведе и дали е гласна или съгласна.

**Примери:**

Вход:
```
a
```

Изход:
```
A
Vowel
```
Вход:
```
C
```

Изход:
```
c
Consonant
```

Вход:
```
#
```

Изход:
```
Not a letter
```

5. Напишете програма която спрямо кратността на въведено число печата ден от седмицата. Т.е., ако числото дава остатък 0 при деление на 7 - Понеделник, остатък 1 - Вторник и така до Неделя.

**Пример:**

Вход:
```
64
```

Изход:
```
Tuesday
```

6. Да се напише програма, която чете от конзолата число между 1 и 10 и отпечатва съответстващата му римска цифра.

**Примери:**

Вход:
```
5
```

Изход:
```
V
```

Вход:
```
10
```

Изход:
```
X
```

Вход:
```
11
```

Изход:
```
Invalid number
```

7. Една редица ще наричаме "трион", ако всеки елемент е едновременно строго по-голям или по-малък от двата си съседа. Установете дали въведените 5 числа от конзолата са такава поредица.

**Примери:**

Вход:
```
1, 3, 1, 3, 1
```

Изход:
```
True
```

Вход:
```
10, 3, 13, 6, 1
```

Изход:
```
False
```


8. Да се напише програма, която при подадени радиус r и двумерни точки P(a,b) и Q(х, у) проверява дали точка Q се намира вътре/извън или по контура на окръжност с радиус r център P.

**Примери:**

Вход:
```
7, -3, -4, 0, 0
```

Изход:
```
Inside the circle
```

Вход:
```
10, 2, 2, 12, 2
```

Изход:
```
On the circle
```

Вход:
```
3, 2, 4, 1, 0
```

Изход:
```
Outside the circle
```

9. Напишете програма, която чете от конзолата температура в градуси Целзий и изведе каква е текущата климатична категория, базирана на следната скала:
 - Very Hot (т.е. >= 35°C)
 - Hot (т.е. >= 25°C и < 35°C)
 - Warm (т.е. >= 15°C и < 25°C)
 - Cool (т.е. >= 5°C и < 15°C)
 - Cold (т.е. < 5°C)

**Пример:**

Вход:
```
17
```

Изход:
```
Warm
```

10. Напишете програма, която намира корените на квадратно уравнение. За целта потребителя да въведе коефицентите на уравнението - a, b, и c.

**Примери:**

Вход:
```
1 -3 2
```

Изход:
```
2 1
```

Вход:
```
1 2 1
```

Изход:
```
-1
```

Вход:
```
1 0 5
```

Изход:
```
No real roots
```

11. Напишете програма, която приема 4-цифрено число, и проверява дали то е "магическо", т.е. дали сумата на първите му 2 цифри е същата като сумата на последните му 2.

**Примери:**

Вход:
```
3461
```

Изход:
```
Yes
```

Вход:
```
2140
```

Изход:
```
No
```

12. Напишете програма, която приема 3-цифрено число и цифра, която проверява дали в записа на числото се среща въведената цифра.

**Примери:**

Вход:
```
127 7
```

Изход:
```
Yes
```

Вход:
```
821 6
```

Изход:
```
No
```

13. Напишете програма, която въвежда цяло число n и по следните критерии определя дали n е странно или не:
  - n е странно, ако е нечетно и е по-малко от 15
  - n не е странно, ако е четно е в интервала [15; 30]
  - n e странно, ако е четно, по-голямо е от 30 и се дели на 4
  - Във всички други случаи n не е странно


**Примери:**

Вход:
```
-43
```

Изход:
```
Strange
```

Вход:
```
16
```

Изход:
```
Not strange
```

14. Ще бъдат въведени секунди. Превърнете ги в следния формат hh hours, mm minutes, ss seconds.

**Пример:**

Вход:
```
13568
```

Изход:
```
03 hours, 46 minutes, 08 seconds
```

15. Въвеждат се час и минути. Добавете 5 минути към вече установения час. Принирайте новия час във формат hh:mm.

**Пример:**

Вход:
```
23 57
```

Изход:
```
00:02
```
    
# БОНУС ЗАДАЧИ

16. Прочетете от конзолата 2 числа - ден и месец от невисокосна годината. Да се изведе следващата дата.

**Примери:**

Вход:
```
15 5
```

Изход:
```
16 5
```

Вход:
```
28 2
```

Изход:
```
1 3
```

Вход:
```
31 12
```

Изход:
```
1 1
```

17. Да се напише прост калкулатор, който поддържа операциите +, -, *, / на две реални числа. От конзолата се прочита число, операция и още едно число и се извежда резултатът. Внимавайте с делението на 0.

**Примери:**

Вход:
```
5 8 *
```

Изход:
```
40
```

Вход:
```
28 0 /
```

Изход:
```
Cannot divide by zero!
```

18. Да се въведат от конзолата 3 цифри и да се изведе най-голямото число, което може да се получи, ако тези цифри са единици, десетици и стотици.

**Пример:**

Вход:
```
1 9 5
```

Изход:
```
951
```

19. Напишете програма, която получава число от конзолата и отпечатва дали то е цяло или не. (Няма да има случаи, в които дробното число е с толкова малка дробна част, че да е сравнимо с цяло)

**Примери:**

Вход:
```
754
```

Изход:
```
Integer number
```

Вход:
```
6.91
```

Изход:
```
Floating point number
```

20. Да се напише програма, която получава 5 латински букви. Първите две от тях са главни и образуват множеството A, където A съдържа всички букви между въпросните две букви, включително самите тях. Вторите две букви са малки и образуват множеството B, където B съдържа всички букви между тях, включително самите тях.
    Четем 5-та буква (case insensitive). Да се изведе:
    - Дали 5-тата буква принадлежи на обединението на A и B.
    - Дали 5-тата буква принадлежи на сечението на A и B.
    - Дали 5-тата буква принадлежи на разликата на A с B.
    - Без да използвате допълнителни проверки (освен резултатите от предните три условия) определете дали 5-тата буква принадлежи само и единствено в някое от множествата A или B.

**Примери:**

Вход:
```
C W u z V
```

Изход:
```
True
True
False
False
```

Вход:
```
E J a c i
```

Изход:
```
True
False
True
True
```
