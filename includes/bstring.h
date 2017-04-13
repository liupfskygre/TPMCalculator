/* 
 * File:   cString.h
 * Author: veraalva
 *
 * Created on April 13, 2016, 3:47 PM
 */

#ifndef BSTRING_H
#define BSTRING_H

class BString {
public:
    BString();
    virtual ~BString();

    /**
     * Shuffle the string
     * @param str string to be shuffled
     * @return string
     */
    static std::string shuffle(std::string str);

    /**
     * Count the number of occurrences of characters in c in the string str
     * 
     * @param str the string to count on
     * @param c the characters to be counted
     * @return the number of occurrences 
     */
    static int countCharacter(std::string str, std::string characters);

    /**
     * Split string in a vector of strings using a delimiter
     * @param s string to be split
     * @param delim delimiter
     * @param elems vector with result
     * @return vector with result
     */
    static std::vector<std::string> &split(const std::string &s, std::string delim, std::vector<std::string> &elems);

    /**
     * Split string in a set of strings using a delimiter
     * @param s string to be split
     * @param delim delimiter
     * @param elems vector with result
     * @return set with result
     */
    static std::set<std::string> &split(const std::string &s, std::string delim, std::set<std::string> &elems);
private:

};

#endif /* CSTRING_H */

