#include <iostream>
#include <stdexcept>

using namespace std;

class Vector {
public:
	// �R���X�g���N�^
	// �N���X�̃I�u�W�F�N�g���\�z����֐�
	Vector(int s) : elem{ new double[s] }, sz{ s } { // �����o�������q
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
	Vector v(1);

	try {
		v[v.size()] = 7;
	}
	catch (out_of_range& e) {
		cout << "exception" << endl;
	}

	return 0;
}