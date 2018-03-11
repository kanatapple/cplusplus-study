#include <iostream>

using namespace std;

class Vector {
public:
	// コンストラクタ
	// クラスのオブジェクトを構築する関数
	Vector(int s) : elem{ new double[s] }, sz{ s } { // メンバ初期化子
	}
	double& operator[](int i) {
		return elem[i];
	}
	int size() {
		return sz;
	}

private:
	double *elem;
	int sz;
};

double read_and_sum(int s) {
	Vector v(6);
	for (int i = 0; i < v.size(); i++) {
		cin >> v[i];
	}

	double sum = 0;
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}

	return sum;
}