#include <iostream>

int main()
{
	int x;
	x = 100;

	std::cout << &x << std::endl;		// x�� address


	int* p; // ������ ���� (pointer variable)
			// �������� ����Ű ���� ��� = �ּҰ� �ʿ���
	p = &x;

	std::cout << p << std::endl;

	int y;
	y = 10;

	p = &y; // ���� Ÿ������ �����Ǹ� ������ ����ų �� �ִ�
	std::cout << p << std::endl;
}