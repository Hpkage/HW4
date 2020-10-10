#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <vector>

void Add(char choice, std::vector<std::string>& bookarray);
void Delete(char choice, std::vector<std::string>& bookarray);
void Clear(char choice, std::vector<std::string>& bookarray);
void ReadNum(char choice, std::vector<std::string>& bookarray);
void NameBooks(char choice, std::vector<std::string>& bookarray);

#endif DATABASE_H