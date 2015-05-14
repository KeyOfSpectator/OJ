class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
    	d = {}
        for num in A:
        	if d.get(num)==None:
        		d[num] = 'true'
        	else :
        		d.pop(num)
        return d.keys()[0]

test = Solution()
Arr = [1,2,3,1,2]
print test.singleNumber(Arr)