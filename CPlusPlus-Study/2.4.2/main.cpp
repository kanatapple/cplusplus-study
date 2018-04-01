namespace My_code {
	class complex {};
	complex sqrt(complex);
	int main();
}

int My_code::main() {
	return 0;
}

int main() {
	return My_code::main();
}
