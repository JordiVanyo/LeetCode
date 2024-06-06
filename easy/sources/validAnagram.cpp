#include <string>
#include <unordered_map>

/**
 * Given two strings s and t, return true if t is an
 * anagram of s, and false otherwise.
 * An Anagram is a word or phrase formed by
 * rearranging the letters of a different word or phrase,
 * typically using all the original letters exactly once.
 *
 * Example 1:
 * Input: s = "anagram", t = "nagaram"
 * Output: true
 *
 * Example 2:
 * Input: s = "rat", t = "car"
 * Output: false
 */

namespace std
{
    class Anagram
    {
    public:
        bool isAnagram(string s, string t)
        {
            unordered_map<char, int> sMap; ///< Map to indicates if a char is repeated (1) or not (0)

            int sSize = s.size(), tSize = t.size(); ///< Size of the input strings
            int i, j;

            // Empty strings or different size => not anagram
            if ((sSize == 0 || tSize == 0) && (sSize != tSize))
            {
                return false;
            }

            // Fill the map key (character) // value (number of times that appears each char)
            for (i = 0; i < sSize; i++)
            {
                sMap[s[i]]++;
            }

            for (j = 0; j < tSize; j++)
            {
                // Element not found => not anagram
                if (sMap.find(t[i]) == sMap.end() && sMap[s[i]] < 0)
                {
                    return false;
                }
                else
                {
                    sMap[s[i]]--;
                }
            }
            return true;
        }
    };
}
