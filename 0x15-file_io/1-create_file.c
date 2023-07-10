#include "main.h"

/**
 * create_file - this creates a file
 * @filename: the filename
 * @text_content: content written in the file
 * Return: 1 if success, -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int ld;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	ld = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ld == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(ld, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(ld);

	return (1);
}
