class Solution:
    def arraySign(self, nums: List[int]) -> int:
        # an odd number of negative values is always a negative product
        signedness = 1
        for n in nums:
            # a single zero makes a product 0
            if n == 0:
                return 0
            else:
                if n < 0:
                    signedness = signedness * -1
                else:
                    signedness = signedness * 1
        return signedness
