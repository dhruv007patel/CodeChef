
#include<bits/stdc++.h>

using namespace std;

int main() {
	int t, n, arr, zeros, ones, minusOnes, others;
	scanf("%d", &t);

	while(t--) {
		scanf("%d", &n);
		zeros = ones = minusOnes = others = 0;
		while(n--) {
			scanf("%d", &arr);
			if(arr == 0)
				zeros++;
			else if(arr == 1)
				ones++;
			else if(arr == -1)
				minusOnes++;
			else
				others++;
		}
		if(others > 1)
			printf("no\n");
		else if(minusOnes > 0 && others == 1)
			printf("no\n");
		else if(minusOnes > 1 && ones == 0)
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}
