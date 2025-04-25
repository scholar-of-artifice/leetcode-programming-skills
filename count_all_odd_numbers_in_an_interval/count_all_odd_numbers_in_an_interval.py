class Solution:
    def countOdds(self, low: int, high: int) -> int:
        out_count = 0
        # define a range
        for n in range(low, high + 1):
            # count all the values that are odd
            if n % 2 != 0:
                out_count = out_count + 1
        return out_count


class Solution:
    def countOdds(self, low: int, high: int) -> int:
        # use math
        out_count = ((high - low) // 2) + 1
        if low % 2 == 0 and high % 2 == 0:
            out_count = out_count - 1
        return out_count
