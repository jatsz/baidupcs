#ifndef _TEST_UTILS_H
#define _TEST_UTILS_H

/*ͨ���ƥ���㷨*/
int stringmatch(const char *pattern, const char *string, int nocase);
int stringmatchlen(const char *pattern, int patternLen,
	const char *string, int stringLen, int nocase);

#endif
