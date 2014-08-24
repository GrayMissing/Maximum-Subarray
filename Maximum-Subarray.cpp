class Solution {
public:
	int maxSubArray(int A[], int n) {
		int curmax = 0, max, i;
		max = A[0];
		for(i = 0; i < n; ++i)
		{
			curmax += A[i];
			if(curmax > max) max = curmax;
			if(curmax < 0) curmax = 0;		
		}
		return max;
	}
};
