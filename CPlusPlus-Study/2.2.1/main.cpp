// �W�����o�̓X�g���[��
#include <iostream>

using namespace std; // std:: �Ȃ��� std ���̖��O��������悤�ɂ���

double square(double x) {
	return x * x;
}

void print_square(double x) {
	cout << "the square of " << x << " is " << square(x) << endl;
}

int main() {
	// <<�@���V�t�g���Z�q(1�Ԗڂ̈�����2�Ԗڂ̈������o�͂���)
	std::cout << "Hello, World!\n";

	print_square(1.234);

	// �ԋp�l����[���̏ꍇ�͏����Ɏ��s�������Ƃ�`���鎞
	// �����Ԃ��Ȃ������ꍇ�͐���I���������Ƃ�\���l(0?)��Ԃ�
	return 0;
} // �ŏ���C++�v���O����