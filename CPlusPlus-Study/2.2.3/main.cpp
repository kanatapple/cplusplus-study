/*
  �萔
  �l�̕s�ϐ��������L�@��2����
  �Econst
  �@��Ƃ��āA�C���^�[�t�F�[�X�̎w��Ɏg����
  �Econstexpr
  �@�R���p�C�����ɕ]�������
   ��Ƃ��Ē萔�̎w��Ɏg���A�ǂݎ���p�̃������̈�Ƀf�[�^��z�u���邱�Ƃ������A���\�����シ��
*/

#include <vector>

using namespace std;

// �萔���̒��ł����p�ł���֐��A���Ȃ킿�A�R���p�C���ɂ���ĕ]������邱�ƂɂȂ鎮�̒��ŗ��p�����֐���
// constexpr �Ƃ��Ē�`���Ȃ���΂Ȃ�Ȃ�
constexpr double square(double x) {
	return x * x;
}

// sum �͎�������ύX���Ȃ�
double sum(const vector<double>&);

int main() {
	const int dmv = 17;
	int var = 17;
	constexpr double max1 = 1.4 * square(dmv); // squqre(17)���萔�Ȃ̂�OK
	// constexpr double max2 = 1.4 * square(var); // �G���[�Fvar�͒萔����Ȃ�
	const double max3 = 1.4 * square(var); // OK�F���s���ɕ]�������

	vector<double> v{ 1.2, 3.4, 4.5 }; // v�͒萔����Ȃ�
	const double s1 = sum(v); // OK�F���s���ɕ]�������
	// constexpr double s2 = sum(v); // �G���[�Fsum(v)�͒萔����Ȃ�

	return 0;
}