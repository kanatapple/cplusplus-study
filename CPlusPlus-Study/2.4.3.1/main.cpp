#include <iostream>
#include <stdexcept>

using namespace std;

class Vector {
public:
	// コンストラクタ
	// クラスのオブジェクトを構築する関数
	Vector(int s) : elem{ new double[s] }, sz{ s } { // メンバ初期化子
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