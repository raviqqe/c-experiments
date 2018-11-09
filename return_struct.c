struct foo {
	int x;
	int y;
};

struct foo bar() {
	struct foo x = { 123, 456 };
	return x;
}

int main() {
	struct foo y;

	for (int i = 0; i < 1000 * 1000 * 1000; i++) {
		y = bar();
	}
}
