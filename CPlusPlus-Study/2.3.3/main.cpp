/*
 �񋓑�
*/

// enum �̒���� class ��u���錾�́A���̗񋓑̂����͂Ɍ^�t������ƂƂ��ɁA���̗񋓑̓Ǝ��̃X�R�[�v���ɗ񋓎q������
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
Traffic_light next = ++light; // next �� Traffic_light::green �ɂȂ�

// �ȉ��̓G���[
// Color y = Traffic_light::red;
// int i = Color::red; // �񋓎q�̒l�� int �Ƃ��ė��p�������Ȃ�A�錾�� enum class ���� class ���Ȃ��āA�P�Ȃ� enum �ɂ���΂���
// Color c = 2;
