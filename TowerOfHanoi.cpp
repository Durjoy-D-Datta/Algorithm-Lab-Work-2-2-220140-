#include <iostream>
using namespace std;

void Toh(int n, string source, string dest, string aux) {
    if (n > 0) {
        Toh(n - 1, source, aux, dest);
        cout << "Move disk " << n << " from " << source << " to " << dest << endl;
        Toh(n - 1, aux, dest, source);
    }
}

int main() {
    int n;
    cin >> n;
    Toh(n, "A", "B", "C");
    return 0;
}
