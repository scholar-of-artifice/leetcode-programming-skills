class Solution:
    def find_main_diagonal(self, mat: List[List[int]]) -> set:
        i, j = 0, 0
        out_set = set()
        while (i < len(mat)) and (j < len(mat[0])):
            out_set.add((i, j))
            i, j = i + 1, j + 1
        return out_set

    def find_anti_diagonal(self, mat: List[List[int]]) -> set:
        i, j = 0, len(mat[0]) - 1
        out_set = set()
        while (i < len(mat)) and (j > -1):
            out_set.add((i, j))
            i, j = i + 1, j - 1
        return out_set

    def diagonalSum(self, mat: List[List[int]]) -> int:
        out_val = 0
        # find all coordinates for diagonals and save in sets
        # take the union of those sets... we do not need the center twice
        s = self.find_main_diagonal(mat).union(self.find_anti_diagonal(mat))
        # accumulate all values at those saved coordinates
        for coor in s:
            r, c = coor
            out_val = out_val + mat[r][c]
        return out_val
