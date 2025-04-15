class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        # input edge case
        if word1 == "":
            return word2
        if word2 == "":
            return word1
        # build a string
        out_s = ""
        i, j = 0, 0
        while i < len(word1) and j < len(word2):
            if i <= j:
                out_s = out_s + word1[i]
                i = i + 1
            else:
                out_s = out_s + word2[j]
                j = j + 1
        # append remaining letters
        if i < len(word1):
            out_s = out_s + word1[i:]
        else:
            out_s = out_s + word2[j:]
        # return the new string
        return out_s
