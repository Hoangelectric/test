#include <iostream>
#include <cstdlib>
using namespace std;
// lop co so
class Hinh
{
	public:
		void setchieurong(int rong)
		{
			chieurong = rong;
		}
		void setchieudai(int dai)
		{
			chieudai = dai;
		}
		void setchieucao(int cao)
		{
			chieucao = cao;
		}
		
	protected:
		int chieudai;
		int chieurong;
		int chieucao;
};

class ChiPhi
{
	public:
		int tinhChiPhi(int dientich)
		{
			return dientich * 30000;	
		}	
};

// ke thua lop cha
class HinhChuNhat: public Hinh, public ChiPhi
{
	public:
		int tinhDienTich()
		{
			return chieudai * chieurong;
		}
};



int main()
{
	double dientich =0;
	HinhChuNhat Hcn;
	Hcn.setchieudai(10);
	Hcn.setchieurong(2);
	Hcn.setchieucao(3);
	dientich = Hcn.tinhDienTich();
	
	cout << "dien tich hinh chu nhat: " << Hcn.tinhDienTich() <<endl;
	cout << "The tich la: " << Hcn.tinhChiPhi(dientich) << endl;
};
