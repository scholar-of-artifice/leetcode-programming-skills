class Solution:
    def average(self, salary: List[int]) -> float:
        # find the extremes
        max_val, min_val = max(salary), min(salary)
        # exclude the extremes
        ex = (sum(salary) - max_val - min_val)
        # compute average
        mean_val = ex / (len(salary) - 2)
        return mean_val
