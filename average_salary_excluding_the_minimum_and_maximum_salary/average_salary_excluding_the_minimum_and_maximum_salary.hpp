class Solution
{
public:
    double average(vector<int> &salary)
    {
        // find the extremes
        auto max_val = static_cast<double>(*std::max_element(salary.begin(), salary.end()));
        auto min_val = static_cast<double>(*std::min_element(salary.begin(), salary.end()));
        // exclude the extremes
        auto ex = std::accumulate(salary.begin(), salary.end(), 0) - (max_val + min_val);
        // # compute average
        return ex / (salary.size() - 2.0);
    }
};