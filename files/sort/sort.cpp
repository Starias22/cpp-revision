#include<fstream>
#include<iostream>
#include<vector>
#include<algorithm>



using namespace std;
void sort( vector<string> &str){
sort(str.begin(),str.end());

}

int main()
{
    //open the source file in read mode
    ifstream src("source.txt",ios::in);
    //open the destination file in write mode
    ofstream dest("final.txt",ios::out);
    if(src&& dest)
    {
        cout<<"The source and the destination file are opened"<<endl;

     /*get all the lines of the file diff from "\n" in a vector of strings
     */

        vector<string> lines;
        string line;
        while(getline(src,line))
    {
            if(line.length()!=0)
            {
                if(*line.begin()==32)
                line.erase(1);

                /*cout<<"This line contains "<<line.length()
                <<" chars"<<endl;*/
                lines.push_back(line);
            }
    }
    cout<<lines.size()<<" lines#'\\n' readen"<<
     " from the source file\n";
   //sort the vector of string
    sort(lines);
    //browse the vector
    for(string l:lines)

       //write the line in the dest file whith 2 lines
        dest<<l<<endl<<endl;



    //close the source file
    src.close();
    //close the destination file
    dest.close();
    cout<<"Files closed!\n";

   /* lines.clear();
    lines.push_back("Papa");
    lines.push_back("atchade");
    lines.push_back("rocarf");
    lines.push_back("island");
    lines.push_back("barnaabé");
    lines.push_back("maman");


for(string l:lines)
    cout<<l<<endl;

    sort(lines);
        cout<<endl<<endl;


    for(string l:lines)
    cout<<l<<endl;
     */

     }
    else
            cout<<"The source or the destination file is not opened"<<endl;

    return 0;

}