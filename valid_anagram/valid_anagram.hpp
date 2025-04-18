class Solution
{
public:
    bool isAnagram(std::string s, std::string t)
    {
        // two anagrammatic strings are the same when sorted
        // sort strings
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        // compare
        return s == t;
    }
};

class Solution
{
public:
    auto make_Counter(std::string s)
    {
        std::unordered_map<char, size_t> obs_map;
        for (const auto &c : s)
        {
            if (obs_map.find(c) == nullptr)
            {
                obs_map.insert({c, 1});
            }
            else
            {
                obs_map[c] = obs_map[c] + 1;
            }
        }
        auto s_ptr = std::make_shared<std::unordered_map<char, size_t>>(obs_map);
        return s_ptr;
    }

    bool isAnagram(std::string s, std::string t)
    {
        // 2 strings of different lengths cannot be anagrams
        if (s.size() != t.size())
        {
            return false;
        }
        // make a Counter object...
        // ... Counter is a dictionary with { key : frequency } entries
        auto s_map_ptr = this->make_Counter(s);
        auto t_map_ptr = this->make_Counter(t);
        // compare the data between Counters
        return *s_map_ptr == *t_map_ptr;
    }
};