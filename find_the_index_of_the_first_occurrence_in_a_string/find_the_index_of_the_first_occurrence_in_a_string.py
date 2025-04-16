class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        i, j = 0, len(needle) - 1
        while j < len(haystack):
            if haystack[i:j+1] == needle:
                return i
            i, j = i + 1, j + 1
        return -1
