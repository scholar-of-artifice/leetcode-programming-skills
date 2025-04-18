class Solution
{
public:
    char findTheDifference(std::string s, std::string t)
    {
        // find the difference between sets
        std::multiset<char> s_set(s.begin(), s.end());
        std::multiset<char> t_set(t.begin(), t.end());
        std::vector<char> o_vec;
        std::set_symmetric_difference(s_set.begin(), s_set.end(), t_set.begin(), t_set.end(), std::back_inserter(o_vec));
        return o_vec.at(0);
    }
};