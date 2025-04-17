class Solution
{
public:
    int arraySign(std::vector<int> &nums)
    {
        int signedness = 1;
        for (const auto &n : nums)
        {
            if (n == 0)
            {
                // a single zero means the entire product is zero
                return 0;
            }
            else
            {
                // alternate the signedness based on finding negative values
                auto s = (n < 0) ? -1 : 1;
                signedness = signedness * s;
            }
        }
        return signedness;
    }
};