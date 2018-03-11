/*
 列挙体
*/

// enum の直後に class を置く宣言は、その列挙体を強力に型付けするとともに、その列挙体独自のスコープ中に列挙子を入れる
enum class Color {
	red,
	blue,
	green
};

enum class Traffic_light {
	green,
	yellow,
	red
};

Traffic_light& operator++(Traffic_light& t) {
	switch (t) {
	case Traffic_light::green:
		return t = Traffic_light::yellow;
	case Traffic_light::yellow:
		return t = Traffic_light::red;
	case Traffic_light::red:
		return t = Traffic_light::green;
	}
}

Color col = Color::red;
Traffic_light light = Traffic_light::red;
Traffic_light next = ++light; // next は Traffic_light::green になる

// 以下はエラー
// Color y = Traffic_light::red;
// int i = Color::red; // 列挙子の値を int として利用したいなら、宣言の enum class から class を省いて、単なる enum にすればいい
// Color c = 2;
