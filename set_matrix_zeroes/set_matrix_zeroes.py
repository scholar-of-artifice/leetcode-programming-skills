class Solution:
    def findZeroes(self, matrix: List[List[int]]) -> tuple:
        r_set = set()
        c_set = set()
        for i, row in enumerate(matrix):
            for j, tile in enumerate(row):
                if tile == 0:
                    r_set.add(i)
                    c_set.add(j)
        return r_set, c_set

    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        # find all zeros
        z_r, z_c = self.findZeroes(matrix)
        # zero out columns and rows
        for i, row in enumerate(matrix):
            for j, tile in enumerate(row):
                if (i in z_r) or (j in z_c):
                    matrix[i][j] = 0
