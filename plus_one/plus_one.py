class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry_val = 0
        # iterate through the digits backwards
        for i, n in enumerate(reversed(digits)):
            # add 1 or add the carry_val if applicable
            if i == 0:
                a = n + 1
                if a > 9:
                    carry_val = 1
                    a = a % 10
            else:
                a = n + carry_val
                if a > 9:
                    carry_val = 1
                    a = a % 10
                else:
                    carry_val = 0
            digits[len(digits) - i - 1] = a
        # check for number which increased order
        if carry_val == 0:
            return digits
        else:
            return [1] + digits
