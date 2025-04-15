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
            out_s += word1[i];
            out_s += word2[i];
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