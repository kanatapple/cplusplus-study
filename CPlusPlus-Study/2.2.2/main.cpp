#include <math.h>

void some_function() {
	double d = 2.2;
	int i = 7;
	d = d + i;
	i = d * i; // double�^��d * i��int�ɐ؂�̂�

	// �������̋L�@������ނ�����
	// = �ȊO�ɂ��A{} �ň͂ޖ��\�ȏ������q���т̌`�������p�ł���
	double d1 = 2.3;
	double d2{ 2.3 };
	double d3 = { 2.3 }; // {...}�`���ł� = ��t���Ă��悢

	int i1 = 7.2;
	// int i2{ 7.2 }; // �G���[
	// int i3 = { 7.2 }; // �G���[

	// �ϐ���`�̍ۂɁA�������q�Ɋ�Â��Č^�������ł���ꍇ�́A�����I�Ɍ^���w�肷��K�v���Ȃ�
	auto b = true;
	auto ch = 'X';
	auto i = 123;
	auto d = 1.2;
	auto z = sqrt(2);
}

int main() {
	some_function();

	return 0;
}