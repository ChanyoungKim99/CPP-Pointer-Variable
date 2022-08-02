#include <iostream>

int main()
{
	int x;
	x = 100;

	std::cout << &x << std::endl;		// x의 address


	int* p; // 포인터 변수 (pointer variable)
			// 누군가를 가리키 위해 사용 = 주소가 필요함
	p = &x;

	std::cout << p << std::endl;

	int y;
	y = 10;

	p = &y; // 같은 타입으로 지정되면 누구든 가리킬 수 있다
	std::cout << p << std::endl;
}