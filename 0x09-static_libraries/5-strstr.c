#include "holberton.h"

/**
 * _strstr - ƒ() locates first occurence of substring.
 * @haystack: pointer to original string.
 * @needle: pointer to substring.
 * Return: pointer to located substring if found, NULL otherwise.
 */
char *_strstr(char *haystack, char *needle)
{
	/**
	 * by the principle of least access privelege,
	 * we can use a constant pointer to constant data.
	 */
	const char *hay = haystack, *weed = needle;

	/* loop to control compararison and passes */
	for (;;)
	{
		if (!*weed)
			return (haystack);
		if (!*hay)
			break;
	/**
	 * if substring is found, return pointer (haystack at location),
	 * otherwise, we've arrived at end of haystack and nothing found,
	 * so just return us the address of 0 (null).
	 */

		if (*hay++ != *weed++)
		{
			hay = ++haystack;
			weed = needle;
		}
	/**
	 *if substring is found, return pointer (haystack at location),
	 * otherwise, we've arrived at end of haystack and nothing found,
	 * we break and return (null) -> pointer to 0
	 */
	}
	return (0);
}
