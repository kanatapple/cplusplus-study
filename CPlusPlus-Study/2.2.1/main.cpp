// 標準入出力ストリーム
#include <iostream>

using namespace std; // std:: なしで std 内の名前を見えるようにする

double square(double x) {
	return x * x;
}

void print_square(double x) {
	cout << "the square of " << x << " is " << square(x) << endl;
}

int main() {
	// <<　左シフト演算子(1番目の引数に2番目の引数を出力する)
	std::cout << "Hello, World!\n";

	print_square(1.234);

	// 返却値が非ゼロの場合は処理に失敗したことを伝える時
	// 何も返さなかった場合は正常終了したことを表す値(0?)を返す
	return 0;
} // 最小のC++プログラム