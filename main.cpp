#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int q;
        cout<<" Cipher(1)  &  Decipher(2)? ";
        cin>>q;

        while ((q!=1)&&(q!=2))
        {
            cout<<"no more option"<<endl;
            cin>>q;
        }
        string word;
        cout<<"enter massage: ";

        if (q==1)
        {
            cin.ignore();
        getline(cin,word);
            for (int i = 0 ; i<word.length() ; i++)
            {
                int z , c ;
                z = word[i];
                if (96<z && z<123){

                    c =  (123) - (z  - 97)-1  ;
                    cout <<  char (c);
                }
                else if (64<z && z<91){
                    c = (91) - (z-65) - 1;
                    cout <<  char (c);
                }
                else if(z>=32 && z<=64){
                    cout<< char(z);
                }
            }
        }
        if(q==2)
        {

    cin.ignore();
        getline(cin,word);
            for (int i = 0 ; i<word.length() ; i++)
            {
                int z , c ;
                z = word[i];
                if (96<z && z<123){

                    c =  (123) - (z  - 97)-1  ;
                    cout <<  char (c);
                }
                else if (64<z && z<91){
                    c = (91) - (z-65) - 1;
                    cout <<  char (c);
                }
                else if(z>=32 && z<=64){
                    cout<< char(z);
                }
            }
        }
        cout<<endl;
        int f;
        cout<<"again(1) & end (2): ";
        cin>>f;
        while ((f!=1)&&(f!=2))
        {
            cout<<"error";
            cin>>f;
        }
        if (f==2)
        {
            string exit(0);
        }
    }

    return 0;
}
