#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0, count = 0;
    queue<int> q;

    for (int i = 1; i <= N; i++) {
        q.push(i);
        sum += i;

        while (sum > N) {
            sum -= q.front();
            q.pop();
        }

        if (sum == N) count++;
    }

    cout << count << endl;
    return 0;
}
