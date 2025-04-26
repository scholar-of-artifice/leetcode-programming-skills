class Solution
{
public:
    std::string toLowerCase(std::string s)
    {
        // use STL...
        std::transform(s.begin(), s.end(), s.begin(), [](auto c)
                       { return std::tolower(c); });
        return s;
    }
};