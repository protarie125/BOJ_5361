#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const double va = 350.34;
	const double vb = 230.90;
	const double vc = 190.55;
	const double vd = 125.30;
	const double ve = 180.90;

	int t;
	cin >> t;
	while (0 < (t--)) {
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;

		cout << '$' << fixed << setprecision(2) << a * va + b * vb + c * vc + d * vd + e * ve << '\n';
	}

	return 0;
}