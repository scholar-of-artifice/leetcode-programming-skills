#include <ranges>

class Solution
{
public:
    std::shared_ptr<
        std::tuple<std::unordered_set<int>, std::unordered_set<int>>>
    findZeros(const vector<vector<int>> &matrix)
    {
        std::tuple<std::unordered_set<int>, std::unordered_set<int>> rc_set = {
            {}, {}};
        for (const auto [i, row] : std::views::enumerate(matrix))
        {
            for (const auto [j, tile] : std::views::enumerate(row))
            {
                if (tile == 0)
                {
                    std::get<0>(rc_set).insert(i);
                    std::get<1>(rc_set).insert(j);
                }
            }
        }
        return std::make_shared<
            std::tuple<std::unordered_set<int>, std::unordered_set<int>>>(
            rc_set);
    }

    void setZeroes(vector<vector<int>> &matrix)
    {
        // find all the zero locations
        const auto data_ptr = this->findZeros(matrix);
        // mutate the matrix
        for (const auto [i, row] : std::views::enumerate(matrix))
        {
            for (const auto [j, tile] : std::views::enumerate(row))
            {
                if (std::get<0>(*data_ptr).contains(i) ||
                    std::get<1>(*data_ptr).contains(j))
                {
                    matrix.at(i).at(j) = 0;
                }
            }
        }
    }
};