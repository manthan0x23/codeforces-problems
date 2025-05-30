#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

typedef long long ll;

void fastIO() {
  ios::sync_with_stdio(0);
  cin.tie(0);
}

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  if (*min_element(a.begin(), a.end()) == a[0]) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {

  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}