  #include <iostream>
  #include <iomanip>
  using namespace std;

  int main() {
      const double riseRate = 1.5; // in mm per year
      cout << "Year\tRise (mm)\n";
      cout << fixed << setprecision(1);
      for (int year = 1; year <= 25; year++) {
          double rise = year * riseRate;
          cout << year << "\t" << rise << endl;
      }
      return 0;
  }
