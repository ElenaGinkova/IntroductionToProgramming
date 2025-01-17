# Символни низове

Уводни примери:

 - Обръщане на стринг
 - Преброяване на срещанията на малки/главни букви

# Задачи

1) Да се напише фунцкия, която приема символен низ и символ. Тя връща дали символът се среща в низа.

**Пример**:

Вход:
```
"abcd", 'b'
```
Изход:
```
1
```


2)  Да се напише функция, която приема символен низ и превръща всички негови главни букви в малки и всички малки в главни.

**Пример**:

Вход:
```
"sTriNgS$$$s"
```
Изход:
```
"StRInGs$$$S"
```

3) Да се напише функция, която приема стринг с произволна дължина от цифри, и стринг result. Функцията да обработва result така, че да представлява стринг, в който пише коя цифра колко пъти се среща.

**Пример**:

Вход:
```
"4231148"
```
Изход:
```
"2x1,1x2,1x3,2x4,1x8"
```

4) Да се напише функция на C++, със сигнатура long convertNumber(const char* numStr), която връща като резултат сумата от ASCII кодовете на цифрите на числото, представено с арабски цифри чрез символния низ num. Ако num не съдържа коректно число (т.е. има символи, които не принадлежат на множеството от арабски цифри от 0 до 9), функцията да връща -1.

**Примери**:

Вход:
```
"123" 
```
Изход:
```
150 // ascii code of '1' is 49, '2' - 50, '3' - 51
```

Вход:
```
"a435" 
```
Изход:
```
-1
```

5) Да се напише функция, която приема стринг и стринга, в който всички цифри са цензурирани. (Всяко число е заменено с '*').
**Пример**

Вход:
```
"a#s50d4Q8=w"
```
Изход:
```
"a#s**d*Q*=w"
```
6) Да се напише функция void getDifference(const char* string1, const char* string2, char* result), която приема 2 стринга и стринг result. Функцията да обработва result така, че да предтсавлява стринг, който съдържа с разликите между подадените.

**Пример**:

Вход:
```
"abcde"
"acdef"
```
Изход:
```
"bf"
```

7)   Да се напише функция със сигнатура bool checkstr(const char*), която 
приема като параметър низ и проверява дали той е поредица от 
редуващи се малки и големи букви от латинската азбука. 

**Пример**:

Вход:
```
"aBcDe"
```
Изход:
```
1
```
Вход:
```
"aB#De"
```
Изход:
```
0
```

8) Да се напише функция, която приема стрингове text и result, символ symbol и индекс i и обработва така result, че да представлява стринг, в който е вмъкнат symbol в text на позиция i.

**Пример**:

Вход:
```
"Hello, y friend!"
m
7
```
Изход:
```
"Hello, my friend!"
```

9) Да се напише функция, която приема стринг с произволна дължина text, символ symbol. Функцията да обработва text така, че да не съдържа symbol.

**Пример**:

Вход:
```
"Hello world!"
'o'
```
Изход:
```
"Hell wrld!"
```

10) Да се напише функция bool isSubstring(const char* s1, const char* s2), която приема два символни низа и връща дали вторият е подниз на първия.

**Примери**:

Вход:
```
"abcdef", "bcd"
```
Изход:
```
1
```

Вход:
```
"abcdefg", "efgh"
```
Изход:
```
0
```


11) Напишете функция unsigned int getWordsCount(const char* words), която приема стринг и връща броя на думите в него. Думите са разделени с произволен брой интервали, табулации и препинателни знаци.

**Пример**:

Вход:
```
"       Helloooo        World            ?????!"
```
Изход:
```
2
```
