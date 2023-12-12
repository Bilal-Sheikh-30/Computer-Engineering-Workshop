#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H
int fileExist(const char *filename);
void readFile(const char *filename);
void writeInFile(const char *filename, const char *content);
#endif