#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
class Table {
public:
	Table(int r, int c) {
		row = r;
		column = c;
		vector<vector<int>>tabl(row, vector<int>(column));
		table = tabl;
	};
	void show() {
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				cout << table[i][j] << " ";
			}
			cout << endl;
		}
	};
	void set(int r, int c, int data) {
		table[r][c] = data;
	};
	void addRow() {
		table.push_back(vector<int>(column));
	};
	void addColumn() {
		column++;
		for (int i = 0; i < column; i++)
			table[i].push_back(0);
	};
	void delRow() {
		table.pop_back();
	};
	void delColumn() {
		column--;
		for (int i = 0; i < column; i++)
			table[i].pop_back();
	};
private:
	int row;
	int column;
	vector<vector<int>>table;
};
int main() {
	Table tb(5, 5);
	tb.show();
	tb.addRow();
	tb.show();
	tb.addColumn();
	tb.show();
	Table tb1(5, 5);
	tb1.show();
	tb1.set(1, 1, 30);
	tb1.show();
	tb1.delRow();
	tb1.show();
	tb1.delColumn();
	tb1.show();
	return 0;
}
