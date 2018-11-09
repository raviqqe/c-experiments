struct foo {
	int x;
	int y;
};

struct foo x = { 123, 456 };

int main() {
	struct foo y;

	for (int i = 0; i < 1000 * 1000 * 1000; i++) {
		y = x;
	}
}
