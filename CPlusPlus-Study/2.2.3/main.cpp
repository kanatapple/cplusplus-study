/*
  定数
  値の不変性を示す記法は2つある
  ・const
  　主として、インターフェースの指定に使われる
  ・constexpr
  　コンパイル時に評価される
   主として定数の指定に使われ、読み取り専用のメモリ領域にデータを配置することを許可し、性能も向上する
*/

#include <vector>

using namespace std;

// 定数式の中でも利用できる関数、すなわち、コンパイラによって評価されることになる式の中で利用される関数は
// constexpr として定義しなければならない
constexpr double square(double x) {
	return x * x;
}

// sum は実引数を変更しない
double sum(const vector<double>&);

int main() {
	const int dmv = 17;
	int var = 17;
	constexpr double max1 = 1.4 * square(dmv); // squqre(17)が定数なのでOK
	// constexpr double max2 = 1.4 * square(var); // エラー：varは定数じゃない
	const double max3 = 1.4 * square(var); // OK：実行時に評価される

	vector<double> v{ 1.2, 3.4, 4.5 }; // vは定数じゃない
	const double s1 = sum(v); // OK：実行時に評価される
	// constexpr double s2 = sum(v); // エラー：sum(v)は定数じゃない

	return 0;
}