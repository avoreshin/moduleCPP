### New rules
From now on, all your classes must be designed in the Orthodox Canonical Form,
unless explicitely stated otherwise. Then, they will implement the four required member
functions below:
• Default constructor
• Copy constructor
• Copy assignment operator
• Destructor
Split your class code into two files. The header file (.hpp/.h) contains the class
definition whereas the source file (.cpp) contains the implementation.

###Exercise 00: My First Class in Orthodox Canonical Form

You think you know integers and floating-point numbers. How cute.
Please read this 3 pages article (1, 2, 3) to discover that you don’t. Go on, read it.
Until today, every number you used in your code was basically either an integer or a
floating-point number, or any of their variants (short, char, long, double, and so forth).
After reading the article above, it’s safe to assume that integers and floating-point numbers have opposite caracteristics.
But today, things will change. You are going to discover a new and awesome number
type: fixed-point numbers! Forever missing from the scalar types of most languages,
fixed-point numbers offer a valuable balance between performance, accuracy, range and
precision. That explains why fixed-point numbers are particularly applicable to computer
graphics, sound processing or scientific programming, just to name a few.
As C++ lacks fixed-point numbers, you’re going to add them. This article from
Berkeley is a good start. If you have no idea what Berkeley University is, read this
section of its Wikipedia page.

Вы думаете, что знаете целые числа и числа с плавающей точкой. Как мило.
Пожалуйста, прочитайте эту статью на 3 страницах (1, 2, 3), чтобы понять, что это не так. Давайте, читайте.
До сегодняшнего дня каждое число, которое вы использовали в своем коде, в основном было либо целым числом, либо числом с плавающей точкой, либо любым другим числом.
или число с плавающей точкой, или любой из их вариантов (short, char, long, double и так далее).
Прочитав статью выше, можно предположить, что целые числа и числа с плавающей точкой имеют противоположные характеристики.
Но сегодня все изменится. Вы откроете для себя новый удивительный тип чисел.
тип: числа с фиксированной точкой! Вечно отсутствующие в скалярных типах большинства языков,
числа с фиксированной точкой предлагают ценный баланс между производительностью, точностью, диапазоном и
точностью. Это объясняет, почему числа с фиксированной точкой особенно применимы в компьютерной
графике, обработке звука или научном программировании, и это только некоторые из них.
Поскольку в C++ отсутствуют числа с фиксированной точкой, вам предстоит их добавить. Эта статья из
Беркли - хорошее начало. Если вы понятия не имеете, что такое университет Беркли, прочитайте этот
раздел его страницы в Википедии.

Create a class in Orthodox Canonical Form that represents a fixed-point number:
• Private members:
◦ An integer to store the fixed-point number value.
◦ A static constant integer to store the number of fractional bits. Its value
will always be the integer literal 8.
• Public members:
◦ A default constructor that initializes the fixed-point number value to 0.
◦ A copy constructor.
◦ A copy assignment operator overload.
◦ A destructor.
◦ A member function int getRawBits( void ) const;
that returns the raw value of the fixed-point value.
◦ A member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number.

Создайте класс в ортодоксальной канонической форме, представляющий число с фиксированной точкой:
- Частные члены:
◦ Целое число для хранения значения числа с фиксированной точкой.
◦ Статическая константа целое число для хранения количества дробных битов. Его значением
всегда будет целочисленный литерал 8.
- Открытые члены:
◦ Конструктор по умолчанию, который инициализирует значение числа с фиксированной точкой равным 0.
◦ Конструктор копирования.
◦ Перегрузка оператора присваивания копии.
◦ Деструктор.
◦ Функция-член int getRawBits( void ) const;
которая возвращает необработанное значение величины с фиксированной точкой.
◦ Функция-член void setRawBits( int const raw );
которая устанавливает необработанное значение числа с фиксированной точкой.

``` shell
$> ./a.out
Default constructor called
Copy constructor called
Copy assignment operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Copy assignment operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called

$>
 
```

###Exercise 01: Towards a more useful
fixed-point number class

The previous exercise was a good start but our class is pretty useless. It can only
represent the value 0.0.
Add the following public constructors and public member functions to your class:
• A constructor that takes a constant integer as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value is
initialized to 8 like in exercise 00.
• A constructor that takes a constant floating-point number as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value is
initialized to 8 like in exercise 00.
• A member function float toFloat( void ) const;
that converts the fixed-point value to a floating-point value.
• A member function int toInt( void ) const;
that converts the fixed-point value to an integer value.
And add the following function to the Fixed class files:
• An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter.

редыдущее упражнение было хорошим началом, но наш класс довольно бесполезен. Он может только
представлять значение 0,0.
Добавьте в класс следующие публичные конструкторы и публичные функции-члены:
- Конструктор, который принимает в качестве параметра целое число.
  Он преобразует его в соответствующее значение с фиксированной точкой. Значение дробных битов
  инициализируется 8, как в упражнении 00.
- Конструктор, принимающий в качестве параметра постоянное число с плавающей точкой.
  Он преобразует его в соответствующее значение с фиксированной точкой. Значение дробных битов
  инициализируется на 8, как в упражнении 00.
- Функция-член float toFloat( void ) const;
  которая преобразует значение с фиксированной точкой в значение с плавающей точкой.
- Функция-член int toInt( void ) const;
  которая преобразует значение с фиксированной точкой в целочисленное значение.
  И добавьте следующую функцию в файлы класса Fixed:
- Перегрузка оператора insertion ("), который вставляет представление с плавающей точкой
  числа с фиксированной точкой в объект выходного потока, переданный в качестве параметра.

```shell
$> ./a.out
Default constructor called
Int constructor called
Float constructor called
Copy constructor called
Copy assignment operator called
Float constructor called
Copy assignment operator called
Destructor called
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called
$>
```

