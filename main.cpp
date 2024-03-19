#include <string>
#include <fstream>

using std::string;

void countAndWriteDigitsPerLine(string filename, string outputFilename)
{
  ifstream fin(filename);    
  ofstream fout(outputFilename);

  string line;
  size_t size;

  while(getline (fin, line)){
      size = count_if(line.begin(),line.end(),isdigit);
      fout << size << "\n";
  }
}

unsigned int countMaxDigits(string filename)
{
  ifstream fin(filename);   

  unsigned int max = 0;
  unsigned int size;
  while(getline (fin, line)){
      size = count_if(line.begin(),line.end(),isdigit);
      max = max(size,max);
      fout << size << "\n";
  }
    return max;
  
}
