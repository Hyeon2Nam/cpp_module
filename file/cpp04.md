# Exercise 00: Polymorphism
# 연습 00: 다형성

- Turn-in directory : ex00/
  Files to turn in : Makefile, main.cpp, Every other files you need
  Forbidden functions : None
-

For every exercise, your main must test everything.
모든 연습에서, 당신의 메인은 모든 것을 테스트해야 합니다.

Constructors and destructors of each class must have specifics output.
각 클래스의 생성자와 소멸자는 특정 출력을 가져야 합니다.

Create a simple and complete base class Animal.
단순하고 완전한 기본 클래스 Animal을 만듭니다.

The animal class got one protected attribute:
Animal 클래스는 하나의 protected 속성이 있습니다.

• std::string type;

Create a class Dog that inherits from Animal.
Animal에서 상속하는 Dog 클래스를 만듭니다.

Create a class Cat that inherits from Animal.
Animal에서 상속하는 Cat 클래스를 만듭니다.

(for the animal class the type can be left empty or put at any value).
(animal 클래스의 경우 유형을 비워두거나 어떤 값도 넣을 수 있다.)

Every class should put their name in the Type field for example:
모든 클래스는 Type 필드에 이름을 입력해야 합니다. 예:

The Dog class type must be initialized as "Dog".
Dog 클래스 유형은 "Dog"로 초기화되어야 합니다.

Every animal must be able to use the method makeSound().
모든 동물은 makeSound() 메소드를 사용할 수 있어야 합니다.

This method will display an appropriate message on the standard outputs based on the class.
이 메서드는 클래스를 기반으로 표준 출력에 적절한 메시지를 표시합니다.

```cpp
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
}
```

This should output the specific makeSound of the Dog and cat class, not the animal one.
이것은 Animal이 아닌 Dog와 Cat 클래스의 특정 makeSound를 출력해야 합니다.

To be sure you will create a WrongCat class that inherits a WrongAnimal class that will output the WrongAnimal makeSound() when test under the same conditions.
동일한 조건에서 테스트 시 WrongAnimal makeSound()를 출력하는 WrongAnimal 클래스를 상속하는 WrongCat 클래스를 만들 수 있습니다.





# Exercise 01: I don’t want to set the
# 연습 01: 나는 그것을 세팅하고 싶지 않아

Turn-in directory : ex01/
Files to turn in : Makefile, main.cpp, plus the needed files for your tests
Forbidden functions : None


You’ll reuse the Ex00 classes.
Ex00 클래스는 재사용할 수 있습니다.

Create one class called Brain.
Brain이라는 하나의 클래스를 만듭니다.

Brain will contain an array of 100 std::string called ideas
Brain은 아이디어라고 불리는 100개의 std::string의 배열을 포함할 것이다.

Now, Dog and cat will have a private Brain* attribute.
이제 Dog와 cat은 Brain* 속성을 갖게 됩니다.

노랭이
Not every animal got a brain!
모든 동물이 뇌를 가진 것은 아닙니다!


Upon construction Dog and Cat will initialize their Brain* with a new Brain();
Dog와 Cat은 새로운 Brain()으로 Brain*을 초기화합니다;

Upon destruction Dog and Cat will delete their Brain.
파괴 시 개와 고양이는 뇌를 삭제할 것입니다.

Your main will create and fill an Array of Animal half of it will be Dog and the other half will be Cat.
당신의 메인은 Animal 배열을 만들고 채울 것입니다 반은 Dog가 되고 나머지 반은 Cat이 될 것입니다.

Before exit, your main will loop over this array and delete every Animal.
종료하기 전에 메인 프로그램이 이 배열에 반복되어 모든 Animal을 삭제합니다.

You must delete directly Cat and Dog as an Animal.
Cat과 Dog는 Animal로 직접 삭제해야 합니다.

A copy of a Cat or Dog must be "deep".
Cat 또는 Dog "깊은" 복사를 해야합니다.

Your test should show that copies are deep!
당신은 깊은 복사가 된 것을 보여줘야 합니다.

Constructors and destructors of each class must have specifics output.
각 클래스의 생성자와 소멸자는 특정 출력을 가져야 합니다.

The appropriate destructors must be called.
적절한 소멸자를 호출해야 합니다.

```cpp
int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
}
```





# Exercise 02: abstract class
# 연습 02: 추상 클래스


Turn-in directory : ex02/
Files to turn in : Makefile, main.cpp, plus any needed files
Forbidden functions : None


A general Animal doesn’t make sense after all.
일반적인 Animal은 결국 말이 안 돼요.

For example, it makes no sound!
예를 들어, 그것은 소리를 내지 않습니다!

To avoid any future mistakes, the default animal class should not be instantiable.
미래의 실수를 피하기 위해, 기본 animal 클래스는 객체를 만들 수 없어야 합니다.


Fix the Animal class so nobody instantiates it by mistakes.
실수로 동물 클래스를 인스턴스화하지 않도록 수정하십시오.

The rest should work as before.
나머지는 이전과 같이 작동해야 합니다.








# Exercise 03: Interface & recap
# 인터페이스 & 리캡


Turn-in directory : ex03/
Files to turn in : Makefile, main.cpp, plus any needed files
Forbidden functions : None


There’s no interface in C++98 (not even in C++20) but it’s common to call pure abstract class Interface.
C++98(C++20에도 없음)에는 인터페이스가 없지만 순수 추상 클래스 인터페이스라고 부르는 것이 일반적입니다.

So for this last exercise let’s try interfaces and recap everything!
이 마지막 연습에서는 인터페이스를 사용해 보고 모든 것을 요약해 봅시다!

Complete the definition of the following AMateria class, and implement the necessary member functions.
다음 AMAteria 클래스의 정의를 완료하고 필요한 멤버 함수를 구현합니다.


~~~cpp
class AMateria
{
	protected:
	[...]
	public:
	AMateria(std::string const & type);
	[...]
	std::string const & getType() const; //Returns the 	materia type
	virtual AMateria* clone() const = 0;	
	virtual void use(ICharacter& target);
};
~~~

Create the concrete Materias Ice and Cure . Their type will be their name in lowercase ("ice" for Ice, etc...).
구체적인 마테리어 Ice과 Cure를 만드십시오. 그들의 type은 소문자("ice 등의 경우 Ice")가 될 것이다.

Their clone() method will, of course, return a new instance of the real Materia’s type.
물론 그들의 clone() method는 진짜 마테리아의 유형의 새 객체를 반환할 것이다.

Regarding the use(ICharacter&) method, it’ll display:
사용과 관련하여(Icharacter&) 방법, 표시:

• Ice: "* shoots an ice bolt at NAME *"
• Cure: "* heals NAME’s wounds *"


(Of course, replace NAME by the name of the Character given as parameter.)
(물론 매개 변수로 지정된 문자 이름으로 NAME을 바꿉니다.)

노랭이
While assigning a Materia to another, copying the type doesn’t make sense...
다른 사람에게 마테리아를 할당하면서 유형을 복사하는 건 말이 안 돼


Create the Character class, which will implement the following interface:
다음 인터페이스를 구현하는 Character 클래스를 만듭니다.


~~~cpp
class ICharacter
{
	public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};
~~~

The Character possesses an inventory of 4 Materia at most, empty at the start. He’ll equip the Materia in slots 0 to 3, in this order.
캐릭터는 최대 4개의 마테리아의 인벤토리를 가지고 있으며 시작 시 비어 있습니다. 마테리아를 슬롯 0부터 3까지 순서대로 장착합니다

In case we try to equip a Materia in a full inventory, or use/unequip a nonexistent Materia, don’t do a thing.
우리가 Materia의 전체 재고를 갖추려고 하거나 존재하지 않는 마테리아의 사용/제거를 시도한다면, 아무것도 하지 마세요.

The unequip method must NOT delete Materia!
비경쟁 방법으로 마테리아를 삭제해서는 안 됩니다!

The use(int, ICharacter&) method will have to use the Materia at the idx slot, and pass target as parameter to the AMateria::use method.
use(int, ICharacter&)은 idx 슬롯에서 마테리아를 사용하고, 표적을 AMateria::use의 매개 변수로  AMateria::use를 사용합니다.

빨강
Of course, you’ll have to be able to support ANY AMateria in a Character’s inventory.
물론, 캐릭터의 인벤토리에 있는 모든 AMateria를 지원할 수 있어야 합니다.

Your Character must have a constructor taking its name as a parameter.
Character는 이름을 매개 변수로 사용하는 생성자가 있어야 합니다.

Copy or assignation of a Character must be deep, of course.
물론 캐릭터는 깊은 복가 되야 합니다.

The old Materia of a Character must be deleted.
캐릭터의 이전 마테리아는 삭제되어야 합니다.

Same upon the destruction of a Character 
캐릭터를 파괴할 때도 마찬가지입니다.

Create the MateriaSource class, which will have to implement the following interface:
다음 인터페이스를 구현해야 하는 MateriaSource 클래스를 만듭니다.

~~~cpp
class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};
~~~


learnMateria must copy the Materia passed as a parameter, and store it in memory to be cloned later.
learnMateria는 매개 변수로 전달된 Materia를 복사하여 메모리에 저장하여 나중에 복제해야 합니다.

Much in the same way as for Character, the Source can know at most 4 Materia, which are not necessarily unique.
캐릭터와 마찬가지로 소스도 기껏해야 4개의 마테리아를 알 수 있는데, 마테리아가 유일할 필요는 없다.

createMateria(std::string const &) will return a new Materia, which will be a copy of the Materia (previously learned by the Source) which type equals the parameter.
createMateria(std::string const &)는 새로운 Materia를 반환하며, 이 Materia는 형식과 매개변수가 동일한 Materia(소스에 의해 이전에 학습된 Materia)의 복사본이 될 것이다.


Returns 0 if the type is unknown.
형식을 알 수 없는 경우 0을 반환합니다.

In a nutshell, your Source must be able to learn "templates" of Materia and re-create them on demand.
간단히 말해서, 당신의 소스는 마테리아의 "템플릿"을 학습하고 필요에 따라 다시 만들 수 있어야 한다.

You’ll then be able to create a Materia without knowing its "real" type, just a string identifying it.
그러면 "실제" 유형을 몰라도 Materia를 만들 수 있습니다. 단지 문자열만 식별하면 됩니다.

As usual, here’s a test main that you’ll have to improve on:
다음은 평소처럼 개선해야 할 테스트 주요 사항입니다.

~~~cpp
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	ICharacter b = me;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
~~~

Output:

~~~bash
$> clang++ -W -Wall -Werror *.cpp
$> ./a.out | cat -e
* shoots an ice bolt at bob *$
* heals bob's wounds *$
~~~
