##Exercise 00: Polymorphism

Для каждого упражнения вы должны предоставить наиболее полные тесты, какие только сможете.
Конструкторы и деструкторы каждого класса должны выводить определенные сообщения. Не используйте
одно и то же сообщение для всех классов.

Начните с реализации простого базового класса `Animal`. Он имеет один защищенный
атрибут:
``` c++
 std::string type;
```

Реализуйте класс `Dog`, который наследуется от Animal.
Реализуйте класс `Cat`, который наследуется от Animal.

Эти два производных класса должны установить свое поле типа в зависимости от своего имени. Тогда,
тип Dog будет инициализирован в `Dog`, а тип `Cat` будет инициализирован в `Cat`.
Тип класса `Animal` может быть оставлен пустым или установлен в значение по вашему выбору.

Каждое животное должно уметь использовать функцию-член:

``` c++ 
makeSound()
```
Он напечатает соответствующий звук (`кошки не лают`)(`cats don’t bark`).

Выполнение этого кода должно вывести специфические звуки классов `Dog` и `Cat`, а не
звуки класса Animal’s.
```c++


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
...
return 0;
}
```

чтобы убедиться, что вы поняли, как это работает, реализуйте класс `WrongCat`, который наследует
от класса `WrongAnimal`. Если вы замените `Animal` и Cat на неправильные
в приведенном выше коде, `WrongCat` должен выдать звук WrongAnimal.
Реализуйте и сдайте больше тестов, чем приведенные выше.

### Exercise 01: I don’t want to set the world on fire

Конструкторы и деструкторы каждого класса должны отображать определенные сообщения.

Реализуйте класс `Brain`. Он содержит массив из 100 std::string под названием ideas.
Таким образом, у Собаки и Кошки будет частный атрибут Brain*.
При создании, `Dog` и `Cat` создадут свой Brain, используя `new Brain();`.
При уничтожении `Dog` и `Cat` - `delete` своего Мозга.

В своей функции main создайте и заполните массив объектов `Animal`. Половина массива будет
будут объекты Dog, а другая половина - объекты Cat. В конце выполнения программы
в конце выполнения программы выполните цикл по этому массиву и удалите каждое животное. Вы должны удалить непосредственно собак
и кошек как Животных. Соответствующие деструкторы должны быть вызваны в ожидаемом порядке.


Не забудьте проверить наличие `memory leaks.`

Копия `Dog` или `Cat` не должна быть поверхностной. Таким образом, вы должны проверить, что ваши копии
являются глубокими копиями!


``` c++
int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
...
return 0;
}
```
Реализуйте и сдайте больше тестов, чем приведенные выше.

## Exercise 02: Abstract class

Создание объектов-животных не имеет смысла, в конце концов. Это правда, они не издают никаких звуков!

Чтобы избежать возможных ошибок, класс Animal по умолчанию не должен быть инстанцируемым.
Исправьте класс Animal так, чтобы никто не мог его инстанцировать. Все должно работать как прежде.

Если хотите, вы можете обновить имя класса, добавив к Animal префикс A.


## Exercise 03: Interface & recap

Interfaces don’t exist in C++98 (not even in C++20). However, pure abstract classes
are commonly called interfaces. Thus, in this last exercise, let’s try to implement interfaces in order to make sure you got this module.

Complete the definition of the following AMateria class and implement the necessary
member functions.

```c++
class AMateria
{
protected:
[...]
public:
AMateria(std::string const & type);
[...]
std::string const & getType() const; //Returns the materia type
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);
};
```


Implement the Materias concrete classes Ice and Cure. Use their name in lowercase ("ice" for Ice, "cure" for Cure) to set their types. Of course, their member function
clone() will return a new instance of the same type (i.e., if you clone an Ice Materia,
you will get a new Ice Materia).

```c++
The use(ICharacter&) member function will display:
• Ice: "* shoots an ice bolt at <name> *"
• Cure: "* heals <name>’s wounds *"
<name> is the name of the Character passed as parameter. Don’t print the angle
brackets (< and >).
```
Write the concrete class Character which will implement the following interface:

```c++
class ICharacter
{
public:
virtual ~ICharacter() {}
virtual std::string const & getName() const = 0;
virtual void equip(AMateria* m) = 0;
virtual void unequip(int idx) = 0;
virtual void use(int idx, ICharacter& target) = 0;
};
```
The Character possesses an inventory of 4 slots, which means 4 Materias at most.
The inventory is empty at construction. They equip the Materias in the first empty slot
they find. This means, in this order: from slot 0 to slot 3. In case they try to add
a Materia to a full inventory, or use/unequip an unexisting Materia, don’t do anything
(but still, bugs are forbidden). The unequip() member function must NOT delete the
Materia!

The use(int, ICharacter&) member function will have to use the Materia at the
slot[idx], and pass the target parameter to the AMateria::use function.

Your Character must have a constructor taking its name as a parameter. Any copy
(using copy constructor or copy assignment operator) of a Character must be deep.
During copy, the Materias of a Character must be deleted before the new ones are added
to their inventory. Of course, the Materias must be deleted when a Character is destroyed.
Write the concrete class MateriaSource which will implement the following interface:

```c++
class IMateriaSource
{
public:
virtual ~IMateriaSource() {}
virtual void learnMateria(AMateria*) = 0;
virtual AMateria* createMateria(std::string const & type) = 0;
};
```

```c++
learnMateria(AMateria*)
Copies the Materia passed as a parameter and store it in memory so it can be cloned
later. Like the Character, the MateriaSource can know at most 4 Materias. They
are not necessarily unique.
```

```c++
createMateria(std::string const &)
Returns a new Materia. The latter is a copy of the Materia previously learned by
the MateriaSource whose type equals the one passed as parameter. Returns 0 if
the type is unknown.
```

In a nutshell, your MateriaSource must be able to learn "templates" of Materias to
create them when needed. Then, you will be able to generate a new Materia using just
a string that identifies its type.