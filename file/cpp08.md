## Day-specific rules
## 날짜 별 규칙

- You will notice that in this particular subject, a lot of the problems you are asked to solve can be solved by NOT using standard containers and NOT using standard algorithms. However, using those is precisely the goal, and if you do not make every effort to use standard containers and algorithms wherever it’s appropriate, you WILL get a very bad grade, however functional your work may be. Please don’t be so lazy.

- 이 특정 주제에서 해결하도록 요청 받은 많은 문제들은 표준 컨테이너를 사용하지 않고 표준 알고리즘을 사용하지 않음으로써 해결할 수 있음을 알 수 있습니다. 그러나 그것들을 사용하는 것이 목표이며, 적절한 곳에서 표준 컨테이너와 알고리즘을 사용하기 위해 모든 노력을 기울이지 않으면 매우 나쁜 점수를 받게 될 것입니다. 너무 게으르지 마세요.

# page 5

## Chapter III
## 챕터 III
## Exercise 00: Easy find
## 연습 문제 00: 쉽게 찾기

```
Exercise : 00
Easy find
Turn-in directory : ex00/
Files to turn in : easyfind.hpp main.cpp
Forbidden functions : None
```

```
연습 문제 : 00
쉽게 찾기
제출 디렉터리 : ex00/
제출할 파일 : easyfind.hpp main.cpp
금지 된 기능 : 없음
```

An easy one to start off on the right foot...  

쉬운 성공적인 시작을 위해...  

Make a template function called easyfind, templated on a type T, that takes a T and an int.  

easyfind라는 템플릿 함수를 만들고, T와 int를 받는 T 타입을 템플릿으로 만듭니다.  

Assume the T is a container of int, and find the first occurence of the second parameter in the first parameter.  

T가 int의 컨테이너라고 가정하고 첫번째 매개 변수에서 두번째 매개 변수의 첫 번째 항목을 찾습니다.  

If it can’t be found, handle the error either using an exception or using an error return value. Take ideas from how standard containers work.  

찾을 수 없는 경우 예외를 사용하거나 오류 반환 값을 사용하여 오류를 처리합니다. 표준 컨테이너의 작동 방식에서 아이디어를 얻으십시오.  

Of course, you will provide a main function that tests it thoroughly.  

물론 당신은 철저하게 테스트하는 main 함수을 제공해야 합니다.  

# page 6

## Chapter IV
## 챕터 IV
## Exercise 01: Span
## 연습 문제 01: 간격

```
Exercise : 01
Span
Turn-in directory : ex01/
Files to turn in : span.cpp span.hpp main.cpp
Forbidden functions : None
```

```
연습 문제 : 01
간격
제출 디렉터리 : ex01/
제출할 파일 : span.cpp span.hpp main.cpp
금지 된 기능 : 없음
```

Make a class in which you can store N ints. N will be an unsigned int, and will be passed to the constructor as its only parameter.  

N개의 정수를 저장할 수 있는 클래스를 만드세요. N은 ```unsigned int```이며 생성자에게 유일한 매개변수로 전달됩니다.  

This class will have a function to store a single number (addNumber), that will be used to fill it. Attempting to add a new number if there are already N of them stored in the object is an error and should result in an exception.  

이 클래스는 단일 숫자를 저장하기 위한 함수(addNumber)를 갖으며, 숫자들을 채우는데 사용됩니다. 객체에 이미 N 개가 저장 되어있는 경우 새 번호를 추가하려고 하면 오류가 발생하고 예외가 발생합니다.  

You will now make two functions, shortestSpan and longestSpan, that will find out respectively the shortest and longest span between all the numbers contained in the object, and return it. If there’s no numbers stored, or only one, there is no span to find, and you will throw an exception.  

이제 shortestSpan 및 longestSpan이라는 두 개의 함수를 만들어 각각 객체에 포함된 모든 숫자 사이의 최단 및 최장 범위를 찾아 반환합니다. 저장된 숫자가 없거나 하나만 있으면 찾을 범위가 없으며 예외가 발생합니다.  

Below is a (way too short) example of a test main and its associated output. Of course, your main will be way more thorough than this. You have to test at the very least with 10000 numbers. More would be a good thing. It would also be very good if you could add numbers by passing a range of iterators, which would avoid the annoyance of making thousands of calls to addNumber...  

아래는 main 테스트 및 관련 출력의 (너무 짧은) 예입니다. 물론, 당신의 main은 이것보다 훨씬 더 철저할 것입니다. 최소한 10000개의 숫자로 테스트해야 합니다. 더 많이 할수록 좋습니다. 반복자의 범위를 전달하여 숫자를 추가 할 수 있다면 addNumber를 수천번 호출하는 번거로움을 피할수 있어 매우 좋습니다.  

# page 7

```c++
int main()
{
Span sp = Span(5);
sp.addNumber(5);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
}
```

```sh
$> ./ex01
2
14
$>
```

# page 8

## Chapter V
## 챕터 V
## Exercise 02: Mutated abomination
## 연습 문제 02: 돌연변이 혐오

```
연습 문제 : 02
돌연변이 혐오
제출 디렉터리 : ex02/
제출할 파일 : mutantstack.cpp mutantstack.hpp main.cpp
금지 된 기능 : 없음
```

Now that the appetizers are done, let’s do some disgusting stuff.  

이제 애피타이저가 완성되었으니 역겨운 일을 해보겠습니다.  

The std::stack container is VERY cool, but it’s one of the only STL containers that is NOT iterable. That’s too bad. But why be okay with it, when we can simply play God and just butcher it to add some stuff we like?  

std::stack 컨테이너는 매우 멋지지만 iterable 할 수 없는 유일한 STL 컨테이너 중 하나입니다. 유감이네요. 하지만 우리가 신처럼 행동하고 우리가 좋아하는 것들을 더하기 위해 그냥 도살할 수 있는데 이것으로 만족 할 수 있겠습니까?  

You will splice this ability into the std::stack container, to repair this grave injustice.  

여러분의 신과같은 이 능력을 std::stack 컨테이너에 써서 중대한 불의를 고쳐봅시다.  

Make a MutantStack class, that will be implemented in terms of a std::stack, and offer all of its member functions, only it will also offer an iterator.  

std::stack 측면에서 구현 될 MutantStack 클래스를 만들고 모든 멤버 함수를 제공합니다.이 클래스만 반복자를 제공합니다.  

Below is an example of code, the output of which should be the same as if we replaced the MutantStack with, for example, and std::list. You will of course provide tests for all of this in your main function.  

다음은 코드의 예입니다. 출력은 예를 들어 MutantStack을 std::list로 바꾼 것과 동일해야합니다. 물론 주 기능에서이 모든 것에 대한 테스트를 제공합니다.  

# page 9

```c++
int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
return 0
}
```