#include <ranges>

class Solution
{
public:
    std::string mergeAlternately(std::string word1, std::string word2)
    {

        std::basic_string<char> out_s;              // make a string object
        out_s.reserve(word1.size() + word2.size()); // reserve the size
        // interleave the characters up to the length of the shortest string
        size_t i = 0;
        for (i; i < std::min(word1.size(), word2.size()); i++)
        {
            out_s += word1.at(i);
            out_s += word2.at(i);
        }
        // append the remaining characters
        if (i < word1.size())
        {
            out_s.append(word1.begin() + i, word1.end());
        }
        else if (i < word2.size())
        {
            out_s.append(word2.begin() + i, word2.end());
        }
        // return the new string
        return out_s;
    }
};

class Solution
{
public:
    std::string mergeAlternately(std::string word1, std::string word2)
    {

        std::basic_string<char> out_s;              // make a string object
        out_s.reserve(word1.size() + word2.size()); // reserve the size
        // zip and interleave
        for (const auto &[a, b] : std::ranges::views::zip(word1, word2))
        {
            out_s.push_back(a);
            out_s.push_back(b);
        }
        // append the remaining characters
        if (word1.size() > word2.size())
        {
            out_s.append(word1.begin() + std::min(word1.size(), word2.size()), word1.end());
        }
        else
        {
            out_s.append(word2.begin() + std::min(word1.size(), word2.size()), word2.end());
        }
        // return the new string
        return out_s;
    }
};