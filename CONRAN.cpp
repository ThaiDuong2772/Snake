class CONRAN{
public:
    struct Point A[100];
    int DoDai;
    CONRAN(){
        DoDai = 4;
        for(int i=0;i<DoDai-1;i++)
        {
            A[i].x=tuongtrai+9-i;
            A[i].y=15;
        }
    }
    void Ve(){
        for (int i = 0; i < DoDai; i++){
            if(i==0)
            {
                gotoxy(A[i].x,A[i].y);
            cout<<"O";
            }
            else{
                gotoxy(A[i].x,A[i].y);
            cout<<"o";
            }
        }
    }
//cập nhật lại hàm di chuyển, thêm chức năng tránh xung đột khi nhặp phím w s, chú thích hướng
    void DiChuyen(int Huong){
        for (int i = DoDai-1; i>0;i--)
            A[i] = A[i-1];
            switch (Huong)
        {
        case 2:
            A[0].x--; break;
        case 1:
            A[0].y++; break;
        case 0:
            A[0].x++; break;
        case 3:
            A[0].y--; break;
        }
    }
    void XoaCu()
    {
        gotoxy(A[DoDai].x,A[DoDai].y);
        cout<<" ";
    }
//tạo riêng một game_over cho gamemode tự do
    bool Game_Over1()
    {   if(A[0].x==tuongtrai ||A[0].x== tuongphai ||A[0].y==tuongtren ||A[0].y==tuongduoi)
        {return true;}

     return false;
    }
};
