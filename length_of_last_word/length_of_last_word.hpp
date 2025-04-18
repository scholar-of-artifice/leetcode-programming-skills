class Solution
{
public:
    std::vector<std::string> split(const std::string &s, const char delimiter = ' ')
    {
        std::vector<std::string> out_list;
        // we will have at least this many splits
        out_list.reserve(std::count(s.begin(), s.end(), delimiter));
        std::string temp_s;
        for (const auto c : s)
        {
            if (c != ' ')
            {
                temp_s.push_back(c);
            }
            else
            {
                // only write word if not an empty string
                if (!temp_s.empty())
                {
                    out_list.push_back(temp_s);
                    temp_s.clear();
                }
            }
        }
        if (temp_s.empty())
        {
            return out_list;
        }
        else
        {
            out_list.push_back(temp_s);
            return out_list;
        }
    }

    int lengthOfLastWord(std::string s)
    {
        // write an equivalent of typical python or js
        auto tokens = this->split(s);
        auto last_word = tokens.back();
        return last_word.size();
    }
};

class Solution
{
public:
    size_t findWordRightBound(const std::string &s)
    {
        for (auto i = s.rbegin(); i != s.rend(); ++i)
        {
            if (*i == ' ')
            {
                continue;
            }
            else
            {
                return std::distance(i, s.rend());
            }
        }
        return 0;
    }

    size_t findWordLeftBound(const std::string &s)
    {
        for (auto i = s.rbegin(); i != s.rend(); ++i)
        {
            if (*i == ' ')
            {
                return std::distance(i, s.rend());
            }
            else
            {
                continue;
            }
        }
        return 0;
    }

    int lengthOfLastWord(std::string s)
    {
        auto j = this->findWordRightBound(s);
        auto i = this->findWordLeftBound(s.substr(0, j));
        return j - i;
    }
};