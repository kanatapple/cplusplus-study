#include <iostream>
#include <stdexcept>

using namespace std;

class Vector {
public:
	// コンストラクタ
	// クラスのオブジェクトを構築する関数
	Vector(int s) { // メンバ初期化子
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
		// 同じ例外を再放出する場合は、単に「throw;」記述すればいい
		throw;
	}
	catch (bad_alloc) {
		cout << "bad alloc" << endl;
	}

	return 0;
}
