class Solution:
    def countOrders(self, n: int) -> int:
        ans = 1
        for i in range(2,n+1):
            print("i = ",i)
            ans = (i * ans *(2 * i - 1)) % 1000000007
        print("newans = ",ans)
        return ans
    
    def countOrders2(self, n: int) -> int:
        if n == 1:
            return 1
        ans = self.countOrders2(n-1)
        newans = 2*ans
        finalans = ( ans + newans * (n - 1) ) * n 
        return finalans
