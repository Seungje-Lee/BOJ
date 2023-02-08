#include <bits/stdc++.h>

using namespace std;

int i, N, height[1000000], NGD[1000000];
stack <int> s;

int main() {

	scanf("%d", &N);
	for(i = 0;i < N;i++) {
		scanf("%d", &height[i]);
		NGD[i] = -1;
	}

	for(i = 0;i < N;i++) {
		if(!s.empty()) {
			while(!s.empty() && height[s.top()] < height[i]) {
				NGD[s.top()] = height[i];
				s.pop();
			}
		}
		s.push(i);
	}

	for(i = 0;i < N;i++)
		printf("%d ", NGD[i]);

	return 0;
}