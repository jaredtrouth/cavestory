/*
 * utils.h
 *
 *  Created on: Oct 12, 2015
 *      Author: jared
 */

#ifndef SOURCE_HEADERS_UTILS_H_
#define SOURCE_HEADERS_UTILS_H_

#include <string>
#include <vector>

class Utils {
public:

	/* unsigned int split
	 * Split a string object <txt> everywhere a certain character <ch> is found.
	 * Store the resulting substrings in a vector
	 * Returns the size of the vector
	 */
	static unsigned int split(const std::string &txt, std::vector<std::string> &strs, char ch) {
		int pos = txt.find(ch);
		int initialPos = 0;
		strs.clear();
		while (pos != std::string::npos) {
			strs.push_back(txt.substr(initialPos, pos - initialPos + 1));
			initialPos = pos + 1;
			pos = txt.find(ch, initialPos);
		}
		//Add the last one
		strs.push_back(txt.substr(initialPos, std::min<int>(pos, txt.size() - (initialPos +1))));

		return strs.size();
	}
};



#endif /* SOURCE_HEADERS_UTILS_H_ */
