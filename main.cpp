#include <iostream>
#define tuongtrai 10
#define tuongphai 70
#define tuongtren 5
#define tuongduoi 25
using namespace std;

void gotoxy( int column, int line );

int main()
{
    cout << "--------------- CHAO MUNG DEN VOI GAME RAN SAN MOI ---------------\n\n";
    while(1)
    {
        // chọn chế độ chơi
        int chedo;
        cout << "****** Hay nhap che do ban muon choi ******\n\n";
        cout << "- Nhap 1 de mo che do choi co dien" << endl;
        cout << "- Nhap 2 de mo che do choi tu do" << endl;
        cout << "- Nhap 3 de thoat khoi tro choi\n" << endl;
        cin >> chedo;
        while(chedo != 1 && chedo != 2 && chedo != 3)
        {
            cout << "Che do da nhap khong hop le, nhap lai: ";
            cin >> chedo;
        }
        if(chedo == 3)
        {
            cout << "\n--------------- HEN GAP LAI BAN ---------------";
            return 0;
        }
        // bên dưới là phần cho các chế độ chơi
    }
}