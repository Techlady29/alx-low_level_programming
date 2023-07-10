#include "main.h"

/**
 * append_text_to_file - this appends text at the end of a file
 * @filename: this filename
 * @text_content: the text content
 * Return: 1 if file exists, -1 if file does not exist
 * or if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ld;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	ld = open(filename, O_WRONLY | O_APPEND);

	if (ld == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(ld, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(ld);

	return (1);
}
