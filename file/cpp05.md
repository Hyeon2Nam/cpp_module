# Exercise 00: Mommy, when I grow up, I want to be a bureaucrat!
# 엄마, 커서 공무원이 되고 싶어요!

Turn-in directory : ex00/
Files to turn in : Makefile Bureaucrat.hpp Bureaucrat.cpp main.cpp
Forbidden functions : None


Please note that exception classes do not need to be in orthodox canonical form.
예외 클래스는 정통 표준 형식일 필요는 없습니다.

Every other class needs to be written in that way
다른 class는 모두 그렇게 써야 한다.

Today, we’re going to create an artificial nightmare of offices, corridors, forms, and waiting in line.
오늘은 사무실, 복도, 양식, 그리고 줄을 서서 기다리는 인위적인 악몽을 만들 거예요.

Sounds fun? No? Too bad.
재미있을 것 같아요? 아닌가? 아쉽다.

First, we start by the smallest cog in the vast bureaucratic machine: the Bureaucrat.
첫째, 우리는 거대한 관료주의 기계에서 가장 작은 톱니바퀴부터 시작합니다: Bureaucrat.

It must have a constant name, and a grade, that ranges from 1 (highest possible) to 150 (lowest possible).
이름은 일정해야 하며 등급은 1(가능한 가장 높음)에서 150(가능한 가장 낮음) 사이여야 합니다.

Any attempt to create a Bureaucrat with an invalid grade must throw an exception, which will be either a Bureaucrat::GradeTooHighException or a
Bureaucrat::GradeTooLowException.
유효하지 않은 등급의 관료제를 만들려는 시도는 예외를 두어야 하며, 이는 'Bureaucrat::GradeTooHighException' 또는 
'Bureaucrat::GradeTooLowException'입니다.

You will provide getters for both these attributes (getName and getGrade), and two functions to increment or decrement the grade.
이러한 특성(getName 및 getGrade)과 grade를 증가 또는 감소시키는 두 가지 함수에 대해 getter를 제공합니다.

Both these functions will throw the same exceptions as before if the grade gets too high or too low.
이 두 기능 모두 성적이 너무 높거나 낮을 경우 이전과 같은 예외를 둡니다.

Remember, grade 1 is highest, 150 is lowest, so incrementing a grade 3 gives you a grade 2...
명심해, 1등급이 가장 높고 150등급이 가장 낮으니까 3등급을 올리면 2등급이 돼

The exceptions you throw must be catchable by a block like:
던지는 예외는 다음과 같은 블록으로 탐지할 수 있어야 합니다.

~~~cpp
try
{
/* do some stuff with bureaucrats */
}
catch (std::exception & e)
{
/* handle exception */
}
~~~


You will provide an overload of the << operator to ostream that outputs something like <name>, bureaucrat grade <grade>.
당신은 <name>, 관료 등급 <grade>과 같은 것을 출력하는 << 연산자>의 과부하를 ostream에 제공할 것이다.

Of course, you will provide a main function to prove you did all this well.
물론, 당신은 이 모든 것을 잘했다는 것을 증명하는 주요 기능을 제공할 것입니다.


# Exercise 01: Form up, maggots!
# 운동 01: 대형을 지어라, 구더기들아!



Turn-in directory : ex01/
Files to turn in : Same as before + Form.cpp Form.hpp
Forbidden functions : None


Now that we have bureaucrats, better give them something to do with their time.
이제 관료들이 생겼으니, 그들에게 그들의 시간과 관련된 무언가를 주는 것이 좋을 것이다.

What better occupation than a stack of forms to fill out?
서류뭉치를 작성하는 것보다 더 좋은 직업이 어디 있겠어요?

Make a Form class.
Form 클래스를 만들어라.

It has a name, a boolean indicating whether it is signed (at the beginning, it’s not), a grade required to sign it, and a grade required to execute it.
name, 서명 여부를 나타내는 bool(처음에는 서명되지 않음), 서명에 필요한 grade, 실행에 필요한 grade가 있다.

The name and grades are constant, and all these attributes are private (not protected).
이름과 등급은 일정하며 이러한 모든 속성은 private(protectedㄴㄴ)입니다.


The grades are subject to the same constraints as in the Bureaucrat, and exceptions will be thrown if any of them are out of bounds, Form::GradeTooHighException and
Form::GradeTooLowException.
등급은 관료제와 동일한 제약을 받으며, 어느 하나라도 범위를 벗어나면 예외가 발생합니다:Form::GradeTooHighException 및
Form::GradeTooLowException.

Same as before, make getters for all attributes, and an overload of the << operator to ostream that completely describes the state of the form.
이전과 마찬가지로, 모든 속성에 대한 getter와 폼의 상태를 완전히 설명하는 ostream에 대한 << 연산자의 오버로드를 만든다.


You will also add a beSigned function that takes a Bureaucrat, and makes the form signed if the bureaucrat’s grade is high enough.
또한 beSigned 기능을 추가하여 관료 등급이 충분히 높을 경우 서명된 양식을 만듭니다.

Always remember, grade 1 is better than grade 2.
항상 기억하세요, 1등급이 2등급보다 높다는 것을.

If the grade is too low, throw a Form::GradeTooLowException.
등급이 너무 낮으면 양식을 던집니다 Form::GradeTooLowException입니다.

Also add a signForm function to the Bureaucrat.
또한 signForm 기능을 Bureaucrat에 추가합니다.

If the signing is successful, it will print something like "<bureaucrat> signs <form>", otherwise it will print something like "<bureaucrat> cannot sign <form> because <reason>".
서명에 성공하면 "<bureaucrat> 부호 <form>"과 같은 것을 인쇄하고, 그렇지 않으면 "<bureaucrat>이 <form>로 서명할 수 없다"와 같은 것을 인쇄한다.

Add whatever’s needed to test this to your main.
이것을 테스트하기 위해 필요한 모든 것을 당신의 메인에 추가하세요.




# Exercise 02: No, you need form 28B, not 28C...
# 연습 02: 28B형이 필요해 28C형이 아니라...


Turn-in directory : ex02/
Files to turn in : Same as before + ShrubberyCreationForm.[hpp,cpp]
RobotomyRequestForm.[hpp,cpp] PresidentialPardonForm.[hpp,cpp]
Forbidden functions : None


Now that you have basic forms, you will make a few forms that actually do something.
이제 기본적인 형태를 갖추었으니, 여러분은 실제로 무언가를 하는 몇 가지 형태를 만들 것입니다.

Create a few concrete forms:
몇 가지 구체적인 양식을 작성합니다.

• ShrubberyCreationForm (Required grades: sign 145, exec 137).
• ShrubberyCreationForm(필수 등급: 145, exec 137)입니다.

Action: Create a file called <target>_shrubbery, and write ASCII trees inside it, in the current directory.
행동: <target>_shrubbery라는 파일을 생성하고 그 안에 ASCII 트리를 현재 디렉터리에 기록합니다.

• RobotomyRequestForm (Required grades: sign 72, exec 45). 
RobotomyRequestForm(필수 등급: 부호 72, Exec 45).


Action: Makes some drilling noises, and tell us that <target> has been robotomized successfully 50% of the time.
조치: 드릴링 소음을 내고 <target>이 50%의 시간 동안 성공적으로 로봇화되었다고 말합니다.

Otherwise, tell us it’s a failure.
그렇지 않으면 실패라고 말해주세요.

• PresidentialPardonForm (Required grades: sign 25, exec 5).
• PresidentialPardonForm(필수 등급: 25, Exec 5).

Action: Tells us <target> has been pardoned by Zafod Beeblebrox.
액션: Zafod Beblebrox에 의해 <target>이 사면되었다는 것을 알려줍니다.

All of these will have to take only one parameter in their constructor, which will represent the target of the form.
이들 모두는 생성자에서 폼의 대상을 나타내는 하나의 매개 변수만 사용해야 합니다.

For example, "home" if you want to plant shrubbery at home. Remember the form’s attributes need to remain private, and in the base class.
예를 들어, 당신이 집에 관목숲을 심고 싶다면 "집"을 말하세요. form의 속성은 기본 클래스에서 비공개로 유지해야 합니다.

Now you need to add a method execute(Bureaucrat const & executor) const to the base form, and implement a method executing the form’s action in all the concrete forms. 
이제 기본 폼에 execute(Bureaucrat const & executor) const 메서드를 추가하고 모든 구체적인 폼에서 폼의 동작을 실행하는 메소드를 구현해야 합니다.

You have to check that the form is signed, and that the bureaucrat attempting to execute the form has a high enough grade, else you will throw an appropriate exception.
양식에 서명이 되어 있는지, 그리고 양식을 실행하려는 관료들의 등급이 충분히 높은지 확인해야 합니다. 그렇지 않으면 적절한 예외를 두게 됩니다.


Whether you want to make these checks in every concrete class or make the check-in the base class then calling another method to execute the action is up to you, but one way is prettier than the other one.
모든 구체적인 클래스에서 이러한 검사를 수행할지 아니면 체크인을 기본 클래스로 설정한 후 작업을 실행하기 위한 다른 메서드를 호출할지는 사용자에게 달렸지만, 다른 방법보다 더 예쁜 방법이 있습니다.

In any event, the base form must be an abstract class.
어떤 경우에도 기본 양식은 추상 클래스여야 합니다.

Finish this by adding an executeForm(Form const & form) function to the bureaucrat.
bureaucrat에 executeForm(Form const & form) 함수를 추가하여 이것을 마무리한다.

It must attempt to execute the form, and if it’s a success, print something like <bureaucrat> executes <form>.
반드시 폼 실행을 시도해야 하며, 성공한다면 <bureaucrat>와 같은 것을 인쇄하면 <form>이 실행된다.

If not, print an explicit error message.
그렇지 않으면 명시적 오류 메시지를 인쇄합니다.

Add whatever you need to your main to test that everything works.
모든 것이 작동하는지 테스트하기 위해 필요한 모든 것을 당신의 메인에 추가합니다.



# Exercise 03: At least this beats coffee-making
# 운동 03: 적어도 이것은 커피를 만드는 것보다 낫습니다.



Turn-in directory : ex03/
Files to turn in : Same as before + Intern.hpp Intern.cpp
Forbidden functions : None


Because filling out forms is annoying enough, it would just be cruel to ask our bureaucrats to write them entirely by themselves.
양식을 작성하는 것도 충분히 귀찮기 때문에, 우리 관료들에게 전적으로 그들 스스로 작성하라고 요구하는 것은 잔인할 것이다.

No, we’ll just have an intern do that.
아니, 그냥 인턴을 시켜서 그렇게 하면 돼

You’re going to create the Intern class.
넌 Intern class 만들거야

The intern has no name, no grade, no defining characteristics whatsoever, we only care that it does its job.
그 인턴은 이름, 성적, 특징 따위 아무것도 없어 우린 그게 제 역할을 하는지 신경써야 해

The intern has one important thing, the makeForm function.
인턴에게는 한가지 중요한 것이 있는데 바로 makeForm function이에요.

It takes two strings, the first representing the name of a form, and the second one being the target for the form.
첫 번째 문자열은 폼의 이름을 나타내고 두 번째 문자열은 폼의 대상입니다.

It will return, as a pointer to Form, a pointer to whichever concrete form class is represented
by the first parameter, initialized with the second parameter.
폼에 대한 포인터로 표현된 구체적인 폼 클래스에 대한 포인터가 반환됩니다.
첫 번째 파라미터에 의해 두 번째 파라미터로 초기화됩니다.

It will print something like "Intern creates <form>" to the standard output.
그것은 "Intern creates <form>"과 같은 것을 표준 출력으로 출력할 것이다.

If it’s using a worse method, like if/elseif/elseif/else branchings, or some other ugly stuff like this, it will not be accepted during the evaluation.
만약 if/elseif/elseif/elsef/else 분기 또는 이와 같은 추악한 것들을 사용하는 경우 평가 시 받아들여지지 않습니다.

If the requested form is not known, print an explicit error message.
요청한 양식을 알 수 없는 경우 명시적 오류 메시지를 인쇄합니다.

For example, this would create a RobotomyRequestForm targeted on "Bender":
예를 들어, "Bender"를 대상으로 하는 RobotomyRequestForm을 생성할 수 있습니다.

~~~cpp
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}
~~~


Your main must, of course, test all of this.
본인은 물론 이 모든 것을 테스트해야 합니다.