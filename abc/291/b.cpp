#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

#define YES result(1, 1)
#define Yes result(2, 1)
#define yes result(3, 1)
#define NO result(1, 0)
#define No result(2, 0)
#define no result(3, 0)

#define rep(i, n) for (int i = 0; i < (n); i++)

void result(int letter, int either);

int main() {
    int n;
    cin >> n;

    vector<int> score(5 * n), sub_score(3 * n);
    rep(i, 5 * n) { cin >> score.at(i); }
    sort(score.begin(), score.end());

    copy(score.begin() + n, score.end() - n, sub_score.begin());

    double ave =
        accumulate(sub_score.begin(), sub_score.end(), 0.0) / sub_score.size();

    cout << ave << endl;

    return 0;
}

void result(int letter, int either) {
    string output;

    switch (letter) {
        case 1:
            if (either)
                output = "YES";
            else
                output = "NO";
            break;
        case 2:
            if (either)
                output = "Yes";
            else
                output = "No";
            break;
        case 3:
            if (either)
                output = "yes";
            else
                output = "no";
            break;
    }

    cout << output << endl;
}
