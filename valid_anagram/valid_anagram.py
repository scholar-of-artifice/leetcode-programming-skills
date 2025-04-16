class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # two anagrammatic strings are the same when sorted
        return sorted(s) == sorted(t)


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # Counter is a dictionary with { key : frequency } entries
        return Counter(s) == Counter(t)
