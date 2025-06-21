class Solution {
public:
	int catchThieves(vector<char> &arr, int k) {
		int n = arr.size();
		int tInd = 0, res = 0;

		for (int i = 0; i < n; i++) {
			if (arr[i] == 'P') {
				tInd = max(tInd, i - k);
				
				while (tInd <= i + k && tInd < n) {
					if (arr[tInd] == 'T') {
						arr[tInd] = '*'; 
						res++;
						tInd++;
						break;
					}
					
					tInd++;
				}
			}
		}

		return res;
	}
};