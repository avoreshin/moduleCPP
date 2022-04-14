###Exercise 00: BraiiiiiiinnnzzzZ
Сначала реализуйте `класс Zombie`. У него есть строковый приватный атрибут `name`.
Добавьте функцию-`void announce( void );`
в `класс Zombie`. Зомби объявляют о себе следующим образом:

```<name>: BraiiiiiiinnnzzzZ...```

Не печатайте угловые скобки (< and >). Для зомби с именем Foo 
сообщение будет выглядеть следующим образом:

``    Foo: BraiiiiiiinnnzzzZ...``

Затем реализуйте две следующие функции:

`Zombie* newZombie( std::string name );`

Он создает зомби, присваивает ему имя и возвращает его, чтобы вы могли 
использовать его за пределами области действия функции.

`• void randomChump( std::string name );`

Он создает зомби, дает ему имя, и зомби объявляет о себе.
В чем, собственно, смысл упражнения? Вы должны определить, в каком случае лучше выделять зомби на стеке или в куче.
Зомби должны быть уничтожены, когда они вам больше не нужны. Деструктор должен выводить сообщение с именем зомби для целей отладки.

###Exercise 01: Moar brainz!

Пора создать орду зомби!
Реализуйте следующую функцию в соответствующем файле:
``` c++
Zombie* zombieHorde( int N, std::string name );
```
Она должна выделить N объектов зомби за одно распределение.
Затем она должна инициализировать зомби, давая каждому из них имя, переданное в качестве параметра. Функция возвращает указатель на первого зомби.
Проведите собственные тесты, чтобы убедиться, что ваша функция `zombieHorde()` работает так, как ожидается. Попробуйте вызвать функцию `announce()` для каждого из зомби.
Не забудьте удалить всех зомби и проверить на утечку памяти.

####Exercise 02: HI THIS IS BRAIN

Напишите программу, которая содержит:
- Строковую переменную, инициализированную в "HI THIS IS BRAIN". - stringPTR: указатель на строку.
- stringREF: Ссылка на строку.
  Ваша программа должна вывести:
- Адрес памяти строковой переменной.
- Адрес памяти, хранящийся в stringPTR.
- Адрес памяти, хранящийся в stringREF.
  А затем:
- Значение строковой переменной.
- Значение, на которое указывает stringPTR. - Значение, на которое указывает stringREF.
  
Вот и все, никаких хитростей. Целью этого упражнения является разъяснение ссылок, которые могут показаться совершенно новыми. Хотя есть некоторые небольшие различия, это другой синтаксис для того, что вы уже делаете: работа с адресами.

####Exercise 03: Unnecessary violence