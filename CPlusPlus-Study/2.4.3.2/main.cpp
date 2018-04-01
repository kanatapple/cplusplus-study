#include <iostream>
#include <stdexcept>

using namespace std;

class Vector {
public:
	// �R���X�g���N�^
	// �N���X�̃I�u�W�F�N�g���\�z����֐�
	Vector(int s) { // �����o�������q
		if (s < 0) throw length_error{ "Vector::constructor" };
		elem = new double[s];
		sz = s;
	}

	double& operator[](int i) {
		if (i < 0 || size() <= i) throw out_of_range{ "Vector::operator[]" };
		return elem[i];
	}
	int size() {
		return sz;
	}

private:
	double *elem;
	int sz;
};

int main() {
	try {
		Vector v(-27);
	}
	catch (length_error) {
		cout << "length error" << endl;
		// ������O���ĕ��o����ꍇ�́A�P�Ɂuthrow;�v�L�q����΂���
		throw;
	}
	catch (bad_alloc) {
		cout << "bad alloc" << endl;
	}

	return 0;
}
