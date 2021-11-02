#include <iostream>
int main()
{
    int n;
    std:: cin >> n;
    int k = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 7 == 0) {
            k *= i;
        }
    }
    std:: cout << k;
}
