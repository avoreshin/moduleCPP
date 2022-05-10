###  Exercise 00: Aaaaand... OPEN!

First, you have to implement a class! How original!

It will be called ```ClapTrap``` and will have the following private attributes initialized to the values specified in brackets:
* Name, which is passed as parameter to a constructor 
* Hit points (10), represent the health of the ```ClapTrap``` 
* Energy points (10)
* Attack damage (0)
 
Add the following public member functions so the ClapTrap looks more realistic:
```c++
* void attack(const std::string& target); 
* void takeDamage(unsigned int amount);
* void beRepaired(unsigned int amount);
``` 
When ```ClapTrack``` attacks, it causes its target to lose ```<attack damage>``` hit points. When ```ClapTrap``` repairs itself, it gets ```<amount>``` hit points back. Attacking and repairing cost 1 energy point each. Of course, ```ClapTrap``` can’t do anything if it has no hit points or energy points left.

In all of these member functions, you have to print a message to describe what hap- pens. For example, the attack() function may display something like (of course, without the angle brackets):
ClapTrap ```<name>``` attacks ```<target>```, causing ```<damage>``` points of damage!

The constructors and destructor must also display a message, so your peer-evaluators can easily see they have been called.
Implement and turn in your own tests to ensure your code works as expected.

###RUS

Во-первых, вы должны реализовать класс! Как оригинально!

Он будет называться ``ClapTrap'' и будет иметь следующие приватные атрибуты, инициализированные в значения, указанные в скобках:
* Имя, которое передается в качестве параметра в конструктор.
* Очки попадания (10), представляющие здоровье ``ClapTrap''.
* Очки энергии (10)
* Урон от атаки (0)

Добавьте следующие публичные функции-члены, чтобы ClapTrap выглядела более реалистично:
```c++
* void attack(const std::string& target); 
* void takeDamage(unsigned int amount);
* void beRepaired(unsigned int amount);
``` 
Когда ``ClapTrack'' атакует, он заставляет свою цель терять ``<атакующий урон>`` хит-пойнтов. Когда ``ClapTrap`` восстанавливает себя, он получает ```<арифметическое количество>`` хит-поинтов обратно. Атака и ремонт стоят по 1 очку энергии. Конечно, ``ClapTrap'' не может ничего сделать, если у него не осталось ни очков попадания, ни очков энергии.

Во всех этих функциях-членах необходимо вывести сообщение, описывающее происходящее. Например, функция attack() может вывести что-то вроде (конечно, без угловых скобок):
ClapTrap ```<name>`` атакует ```<target>``, нанося ```<damage>`` пунктов урона!

Конструкторы и деструкторы должны также отображать сообщение, чтобы ваши коллеги-оценщики могли легко увидеть, что они были вызваны.
Реализуйте и включите собственные тесты, чтобы убедиться, что ваш код работает так, как ожидается.


