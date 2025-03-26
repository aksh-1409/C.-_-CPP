#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int ans,key;
    string file_name;
    cout<<"Enter a program"<<endl;
    cout<<"Enter 1 to encrypt and 2 to decrypt: ";
    cin>>ans;
    cout<<"Enter the file name: ";
    cin>>file_name;
    cout<<"Enter the key: ";
    cin>>key;

    if(ans==1){
        ifstream file_read;
        char ch;;
        ofstream file_write;
        file_read.open(file_name.c_str(),ios::binary);
        file_name= "encrypted_file";
        file_write.open(file_name.c_str(),ios::binary);
        while(file_read.get(ch)){
            int temp = ch+key;
            file_write<<(char)temp;  
        }
        file_read.close();
        file_write.close();
        cout<<"File encrypted successfully"<<endl;
    }
    else if(ans==2){
        ifstream file_read;
        char ch;;
        ofstream file_write;
        file_read.open(file_name.c_str(),ios::binary);
        file_name= "decrypted_file";
        file_write.open(file_name.c_str(),ios::binary);
        while(file_read.get(ch)){
            int temp = ch-key;
            file_write<<(char)temp;  
        }
        file_read.close();
        file_write.close();
        cout<<"File decrypted successfully"<<endl;
    }

return 0;
}