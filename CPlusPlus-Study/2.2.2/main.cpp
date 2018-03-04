#include <math.h>

void some_function() {
	double d = 2.2;
	int i = 7;
	d = d + i;
	i = d * i; // double型のd * iをintに切り捨て

	// 初期化の記法が何種類もある
	// = 以外にも、{} で囲む万能な初期化子並びの形式も利用できる
	double d1 = 2.3;
	double d2{ 2.3 };
	double d3 = { 2.3 }; // {...}形式では = を付けてもよい

	int i1 = 7.2;
	// int i2{ 7.2 }; // エラー
	// int i3 = { 7.2 }; // エラー

	// 変数定義の際に、初期化子に基づいて型が推測できる場合は、明示的に型を指定する必要がない
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