# Побитови операции

# Задачи

1) Да се напише функция, която извежда на екрана двоичната репрезентация на 32 битово число, записано в десетична бройна система.

**Пример:**

Вход:
```
10
```
Изход:
```
00000000000000000000000000001010
```

2) Да се напише функция unsigned invertBit(unsigned num, unsigned k), която в числото num преобръща битът на позиция k.

**Примери:**

Вход:
```
num = 21 //10101
k = 3
```
Изход:
```
29 //11101 
```

Вход:
```
num = 37 //100101
k = 2
```
Изход:
```
33 //100001
```

3) Напишете функция, която по подадени цели числа n и k връща числото,
което е "закодирано" в най-десните k бита на n.

**Пример:**

Вход:
```
n = 35 //100011 
k = 3
```
Изход:
```
3 //011
```

4) Да се напише функцията unsigned getLeadingZerosCount(unsigned num), която приема цяло число и връща броя на водещите нули в двоичния му запис.

**Пример:**

Вход:
```
n = 18 // 00000000000000000000000000010010

```
Изход:
```
27
```


5) Да се напише функция, която приема 2 цели числа a и b и проверява дали
битовете (вкл. и водещите нули, ако има такова) на a са пермутация на битовете на b.

**Пример:**

Вход:
```
3 // 011 
5 // 101
```
Изход:
```
1
```

6) Да се напише функция, която приема 3 цели числа x, m и n и връща числото, което се получава, ако от x се вземат n бита, започвайки от позиция m.

**Пример:**

Вход:
```
16 4 3
```
Изход:
```
4 //16 = 10000 -> |100|00 -> 100 = 4
```

7) С помощта на побитови операции и 8-битово число запазваме информация в кой ден от предстоящата седмица във ФМИ имаме контролно. Да се напише функция, която приема цяло и извежда "закодираната" в него информация. Hint: Можем да примем, че най-десният бит носи информация за понеделник, съседния отляво за вторник и т.н...

**Пример:**

Вход:
```
105 // 01101001
```

Изход:
```
Monday, Thursday, Saturday, Sunday
```

8) Да се напише функция, която приема 2 цели числа a и b и разменя стойностите им без допълнителна променлива с побитови операции.

**Пример:**

Вход:
```
3 4
```
Изход:
```
4 3
```


9) Напишете функция, която приема цяло неотрицателно число, и връща дали двоичният запис (като игнорираме водещите нули) на числото е палиндром.

**Примери:**

Вход:
```
73 // 1001001
```

Изход:
```
1
```

Вход:
```
52 // 110100
```

Изход:
```
0
```

10) Разграничаваме устройствата, свързани към интернет, по техния IP адрес. Това е едно най-обикновено цяло беззнаково 32-битово число. Да се гледа като число не е удобно, заради това (и други причини, които ще учите във втори курс) IP адресът се изписва във формата “a.b.c.d”, като a, b, c и d са съответно десетичното представяне на всички осморки битове.

**Пример:**

Вход:
```
2155905152 // 10000000 10000000 10000000 10000000
```

Изход:
```
128 128 128 128 // 10000000(2) = 128(10)
```


11) Напишете функция, която приема масив(разглеждаме го като множество) и отпечатва всички негови подмножества.

**Пример:**

Вход:
```
[1, 2, 3]
```
Изход:
```
[], [1], [2], [3], [1,2], [2,3], [1,3], [1,2,3]
```


**Задача от миналогодишното домашно**

12) Нашишете функция, която приема 8-битово число и го кодира по следните правила:

- Всеки бит на символ от оригиналното число, който има стойност 1, се преобразува в два бита със стойност 10 в новото число;
- Всеки всеки бит от оригиналното число, който има стойност 0, се преобразува в два бита със стойност 01 в новото число.

**Пример:**

Вход:
```
45 // 00101101
```
Изход:
```
22950 // 0101100110100110
``` 
