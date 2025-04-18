class Solution
{
public:
    int strStr(std::string haystack, std::string needle)
    {
        // loop through haystack
        for (size_t i = 0; i < haystack.size(); i++)
        {
            // check substrings
            if (haystack.substr(i, needle.size()) == needle)
            {
                return i;
            }
        }
        return -1;
    }
};

class Solution
{
public:
    int strStr(std::string haystack, std::string needle)
    {
        // C++ STL
        return haystack.find(needle);
    }
};