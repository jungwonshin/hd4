// 정리

// 1. C보다 발전된 C++문법 - 객체지향과는 관련없는 문법들
//    auto, template, new, overloading, inline, reference등....

// 2. OOP 핵심 - "타입을 먼저 만들자"
//    => 그런데, 사용하기 쉽고, 안전한 타입을 만들자..
//    => 초보자가 사용해도 문제가 되지 않은 안전하고, 쉬운 타입
//    => 사용하기 쉬운 타입은, 만들기는 "어렵다"

//    그래서, 타입 만들때 사용할 문법을 배운것. class 문법
//    a. 접근 지정자 - private, public
// 
//    b. 생성자, 소멸자 - vector 만들기 예제에서 소멸자의 필요성!
// 
//    c. 생성자에서 멤버 초기화 할때는 - "초기화 리스트"로 !

//    d. static 멤버 데이타 - 모든 객체가 공유, 객체 없어도 메모리에 존재
//       static 멤버 함수   - 객체없이 호출가능. 
//							=> 초급시절에는 static 을 사용하는것이 어렵습니다.

//	  e. 상수 멤버 함수 - "상수객체를 고려한 문법"
//						 상수 객체라도 할수 있는 일이 있다 - 상수 멤버함수로 만들어라
//						  const Rect rc(1,1, 10,10);
//						  rc.move(4,4); // 당연히 에러나와야 한다.
//						  rc.getWidth(); // 되어야 합니다.
										 // 상수객체라도 너비는 구할수 있습니다.
										 // 
//    f. this 키워드 의 의미.. 활용(5일차에 더욱 자세히)
//			=> 멤버 함수의 호출원리 p1.set(10,20) ==> set(&p1, 10, 20)

//    g. 복사 생성자(5일차 배웁니다.)
//--------------------------------------------------------------------
// 남은 것들..
// 3. 상속과 객체지향 디자인
// 
// 4. 연산자 재정의, 예외  => cout 만들기
// 
// 5. STL 사용법(vector 등)


