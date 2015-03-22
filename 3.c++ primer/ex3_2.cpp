/*
3.2答：
string line;
while (getline(cin, line))
cout << line << endl;//每次读入一整行，直到到达文件末尾
string word;
while (cin >> word)
cout << word << endl;//逐个输出输入的单词，每个单词后紧跟一个换行符

3.3答：string读取规则：忽略开头的空白并从第一个真正的字符开始读取，直到遇见下一处空白位置。
getline不忽略开头的空白直到遇到换行符，换行符不读取。

*/