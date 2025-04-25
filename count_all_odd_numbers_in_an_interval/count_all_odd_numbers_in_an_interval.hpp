class Solution
{
public:
    int countOdds(int low, int high)
    {
        int out_count = 0;
        // define a range
        for (size_t i = low; i < high + 1; i++)
        {
            // count all the values that are odd
            if (i % 2 != 0)
            {
                out_count = out_count + 1;
            }
        }
        return out_count;
    }
};

class Solution
{
public:
    int countOdds(int low, int high)
    {
        // use math
        int out_count = ((high - low) / 2) + 1;
        if ((high % 2 == 0) && (low % 2 == 0))
        {
            out_count = out_count - 1;
        }
        return out_count;
    }
};