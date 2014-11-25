class Solution:
    # @return an integer
    def reverse(self, x):

    	flag = True
    	if x<0:
    		x = -x
    		flag = False

        num = 0
        while x>10:
        	num = num*10 + x%10
        	x = x%10
            #print x
        if x>0:
        	num = num*10 + x

        if flag == False:
         	num = -num

        return num


test = Solution()
print test.reverse(1234)



