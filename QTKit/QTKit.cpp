// QTKit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
  if (argc < 2)
  {
    cout << "QTKit v0.0.1"
         << " -- usage: " << "\n"
         << "filepath rm_timecode" << "\n"
         << "filepath mk_timecode [01:00:00:00]" << endl;
  } else {
    wchar_t* filepath = argv[1];
    cout << "Target file: ";
    wcout << filepath << endl;
    if (wcscmp(argv[2], L"rm_timecode") == 0)
    {
      cout << "Removing timecode track" << endl;
      // Commit change
    }
    else if (wcscmp(argv[2], L"mk_timecode") == 0)
    {
      wchar_t* new_timecode;
      if (argc >= 4)
      {
        new_timecode = argv[3]; // Make sure it's proper timecode
        // You can also glean DFTC vs NDFTC from the notation
      } else {
        new_timecode = L"01:00:00:00";
      }
      wcout << L"Adding timecode track: " << new_timecode << endl;
      // Commit change
    }
  }
  return 0;
}
