# Exercise 00: Aaaaand... OPEN!
# 연습 00: 그으으리고... 열어!

Here you have to make a class! How original!
여기, 니가 만들 class란다! 얼마나 오리지널하니!

The class will be called ClapTrap, and will have the following private attributes, initialized to the specified values:
이 클래스는 ClapTrap으로 불릴 것이며 다음과 같은 private attributes을 가질 것이다. 지정된 값으로 초기화됨:

• Name (Parameter of constructor)
• Hitpoints (10)
• Energy points (10)
• Attack damage (0)

• Name(생성자의 매개 변수)
• Hitpoints(10)
• Energy points(10)
• Attack damage(0)

You will also give it a few public functions to make it more life-like:
또한 보다 실제처럼 만들기 위해 몇 가지 public functions을 제공할 것입니다.

• void attack(std::string const &target)
• void takeDamage(unsigned int amount)
• void beRepaired(unsigned int amount)

In all of these functions, you have to display something to describe what happens.
이 모든 기능에서, 당신은 무슨 일이 일어나는지 설명하기 위해 무언가를 표시해야 합니다.

For example, the attack function may display something along the lines of:
예를 들어, 공격 함수는 다음과 같은 선을 따라 표시할 수 있습니다.

`ClapTrap <name> attack <target>, causing <damage> points of damage!`

The constructor and destructor must also display something, so people can see they have been called.
생성자와 소멸자 또한 사람들이 그것들이 호출된 것을 볼 수 있도록 무언가를 표시해야 한다.

You will provide a main function, with enough tests to demonstrate that your code is functional.
코드가 작동하는지 입증할 수 있는 충분한 테스트와 함께 main 함수를 제공해야한다.

# Exercise 01: Serena, my love!
# 연습 01: 세레나, 내 사랑!

제출 파일 : 전 문제 +  ScavTrap.cpp ScavTrap.hpp

Because we can’t ever have enough Claptraps, now you will make another one.
Claptraps가 아무리 많아도 모자라니까, 이제 또 한 번 만들어보세요.

The class will be named ScavTrap, and will inherit from ClapTrap, the constructor, destructor, and attack have to use different outputs. 
클래스는 ScavTrap으로 명명되며 생성자, 소멸자 및 공격이 다른 출력을 사용해야 하는 ClapTrap에서 상속됩니다.

After all, a Claptrap has to have some measure of individuality.
결국, Claptrap은 어느 정도 개성을 가지고 있어야 합니다.

The ScavTrap class will have its construction and destruction messages.
ScavTrap 클래스에는 구성 및 파괴 메시지가 표시됩니다.

Also, proper construction/destruction chaining must be present
(When you build a ScavTrap, you must start by building a ClapTrap... Destruction is in reverse order),
and the tests have to show it.
또한 적절한 생성/소멸 체인이 있어야 합니다
(ScavTrap을 만들 때는 ClapTrap을 만드는 것부터 시작해야 합니다... 소멸은 역순)
그리고 테스트는 그것을 보여줘야 한다.

• Name (Parameter of constructor)
• Hitpoints (100)
• Energy points (50)
• attack damage (20)

• Name(생성자의 매개 변수)
• Hitpoints (100)
• Energy points (50)
• attack damage (20)


ScavTrap will also have a new specific function: void guardGate();
ScavTrap에는 void guardGate();라는 새로운 기능이 추가될 예정입니다.

this function will display a message on the standard outputs to anounce that ScavTrap have enterred in Gate keeper mode.
이 함수는 ScavetTrap이 게이트 키퍼 모드로 전환했다고 안내 메시지를 표준 출력으로 표시합니다.

Extend your main function to test everything.
모든 것을 테스트하기 위해 당신의 주요 기능을 확장하세요.

# Exercise 02: Repetitive work
# 연습 02: 반복 작업

제출 파일 : 이전 내용 + FragTrap.cpp FragTrap.hpp

Making Claptraps is probably starting to get on your nerves.
Claptraps를 만드는 것은 아마도 여러분의 신경을 거슬리기 시작할 것입니다.

Now, you will make a FragTrap class that inherits from ClapTrap.
이제 여러분은 ClapTrap을 계승한 FragTrap 클래스를 만들 것입니다.

• Name (Parameter of constructor)
• Hitpoints (100)
• Energy points (100)
• attack damage (30)

• Name(생성자의 매개 변수)
• Hitpoints (100)
• Energy points (100)
• attack damage (30)

The FragTrap class will have its construction and destruction messages.
FragTrap 클래스는 생성 및 파괴 메시지가 표시됩니다.

Also, proper construction/destruction chaining must be present
(When you build a FragTrap, you must start by building a ClapTrap... Destruction is in reverse order),
and the tests have to show it.
또한 적절한 생성/소멸 체인이 있어야 합니다
(FragTrap을 만들 때는 ClapTrap을 만드는 것부터 시작해야 합니다... 소멸은 역순)
그리고 테스트는 그것을 보여줘야 한다.


** 이거 하이파이브 모드 들어갔을때 출력 메시지 달라야함
아래는 평가표
There is a highFivesGuys function that displays a small message on the standard output.
There is an attack function that displays a small message on the standard output different
from the original "ClapTrap".




The specific function for FragTrap will be void highFivesGuys(void) and will display a positive high fives request on the standard output.
FragTrap의 특정 기능은 void highFivesGuys(void)이며, 표준 출력에 양의 하이파이브 요청이 표시됩니다.

Extend your main function to test everything.
모든 것을 테스트하기 위해 당신의 주요 기능을 확장하세요.

# Exercise 03: Now it’s weird!
# 연습 03: 이제 이상해!

Now, you will create a monster by making a Claptrap that’s half Fragtrap, half ScavTrap.
이제 반은 Fragtrap이고 반은 Scav Trap인 Claptrap을 만들어서 몬스터를 만들게 됩니다.

It will be named DiamondTrap, and it will inherit from both the FragTrap AND the ScavTrap.
DiamondTrap이라는 이름을 갖게 될 것이며, FragTrap과 Scav Trap의 이름을 이어받게 될 것입니다.

Very risky and horrible act the DiamondTrap class will declare a private attribute called name like the one inside ClapTrap.
매우 위험하고 끔찍한 행동은 DiamondTrap 클래스가 ClapTrap 안에 있는 이름이라는 개인 속성을 선언합니다.

Its attributes and functions will be chosen from either of its parent classes:
속성과 함수는 상위 클래스 중 하나에서 선택된다.

• Name (Parameter of constructor)
• Claptrap::Name (Parameter of constructor + "_clap_name")
• Hitpoints (Fragtrap)
• Energy points (Scavtrap)
• Attack damage (Fragtrap)
• attack (Scavtrap)

• Name(생성자의 매개 변수)
• Claptrap::Name(생성자 + "_clap_name")
• Hitpoints(Fragtrap)
• Energy points(Scavtrap)
• Attack damage(Fragtrap)
• attack(Scavtrap)

It will have the special functions of both.
그것은 두 가지 모두의 특별한 기능을 가질 것입니다.

As usual, your main will be extended to test the new class.
평소처럼, 새로운 클래스를 테스트하기 위해 당신의 main이 확장될 것입니다.

Of course, the Claptrap part of the Diamondtrap will be created once, and only once...
물론, Diamondtrap의 Claptrap 부분은 한 번만 생성될 것입니다.

Yes, there’s a trick.
네, 속임수가 있어요.

DiamondTrap will have a new function void whoAmI(); that will display its name and its clapTrap name.
DiamondTrap에는 void whoAmI();이라는 새로운 기능이 추가될 예정입니다. 그것엔 이름과 clapTrap 이름이 표시됩니다.

노랭이↓
Compilation flags like -Wshadow and -Wno-shadow!
-Wshadow and -Wno-shadow 플래그 사용해서 컴파일!


내기전에 평가표 체크 필수~~~~~