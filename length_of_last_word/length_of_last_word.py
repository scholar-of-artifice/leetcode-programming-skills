class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        # use built in language features
        tokens = s.split()
        last_word = tokens[-1]
        # NOTE: alternatively can be written as one line
        #   return len(s.split()[-1])
        return len(last_word)


class Solution:
    def final_word_right_bound(self, s: str) -> int:
        # find the first right bound of a word
        # start search from right
        i = len(s) - 1
        while i >= 0:
            # ignore characters that are whitespace
            if s[i] == ' ':
                i = i - 1
            else:
                return i
        return i

    def final_word_left_bound(self, s: str) -> int:
        # find the first right bound of a word
        # start search from right
        i = len(s) - 1
        while i > 0:
            # ignore characters that are whitespace
            if s[i - 1] == ' ':
                return i
            else:
                i = i - 1
        return i

    def lengthOfLastWord(self, s: str) -> int:
        # use 2 pointers to find bounds of final word
        j = self.final_word_right_bound(s)
        i = self.final_word_left_bound(s[:j + 1])
        # the size of a string is the difference in indexes plus 1
        size_s = abs(j - i) + 1
        return size_s
