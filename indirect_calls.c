int foo(int x) {
	return x;
}

int bar(int (*f)(int x)) {
	return f(42);
}

int main() {
	for (int i = 0; i < 1000 * 1000 * 1000; i++) {
		bar(foo);
	}
}
