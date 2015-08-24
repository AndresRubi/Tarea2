#include "delimitator.h"
#include "ui_delimitator.h"


Delimitator::Delimitator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Delimitator)
{
    ui->setupUi(this);
    //MyFile("Archivo.txt",ios::app);
    File.open("Archivo.txt",ios::binary | ios::in | ios::out);
     LIMIT_CHARS=20;

}

Delimitator::~Delimitator()
{
    delete ui;
}

void Delimitator::SaveInfo()
{

    ofstream myfile ("Archivo.txt",ios::app);
       if (myfile.is_open())
       {

           QString name = ui->lineEditName->text();
           string n=name.toStdString();
           QString last_name = ui->lineEditLastName->text();
           string l=last_name.toStdString();
           QString age = ui->lineEditAge->text();
           string a=age.toStdString();


         myfile << "#n#" + n+"#a#"+l+"#e#"+a;
         myfile.close();
       }
       else cout << "Unable to open file";

}
void Delimitator::LoadInfo()
{

    string line;
        ifstream myfileread ("Archivo.txt");
        if (myfileread.is_open())
        {
          while ( getline (myfileread,line) )
          {
            cout << line <<endl;
            cout<< "linea de texto"<<endl;
            for(int i =0 ; i<line.length();i++)
            {
                if(line[i]== '#' && line[i+1]=='n' && line[i+2]=='#')
                {
                    string nombre;
                    for(int x=i+3; x<line.length(); x++)
                    {
                        if(line[x]!= '#' )
                        {

                            nombre+=line[x];
                            cout<<nombre<<endl;

                        }else
                        {
                            string texto="Nombre : "+ nombre;
                            QString save=QString::fromStdString(texto);
                            ui->listWidget->addItem(save);
                            cout<<"doasd";
                            break;
                        }
                    }
                }
                else if(line[i]== '#' && line[i+1]=='a' && line[i+2]=='#')
                {
                    string apellido;
                    for(int x=i+3; x<line.length(); x++)
                    {
                        if(line[x]!= '#' )
                        {

                            apellido+=line[x];
                            cout<<apellido<<endl;

                        }else
                        {
                            string texto="Apellido : "+ apellido;
                            QString save=QString::fromStdString(texto);
                            ui->listWidget->addItem(save);
                            cout<<"apellido";
                            break;
                        }
                    }
                }
                else if(line[i]== '#' && line[i+1]=='e' && line[i+2]=='#' || i==line.length() )
                {
                    string edad;
                    for(int x=i+3; x<line.length(); x++)
                    {
                        if(line[x]!= '#' )
                        {

                            edad+=line[x];
                            cout<<edad<<endl;



                        }else
                        {
                            string texto="Edad : "+ edad;
                            QString save=QString::fromStdString(texto);
                            ui->listWidget->addItem(save);
                            cout<<"edad";
                            break;
                        }
                    }
                }

            }
            string ll=line;
            // QString save=ll;
           // ui->listWidget->addItem(save);
          }
          myfileread.close();
        }

        else cout << "Unable to open file";

}

void Delimitator::on_pushButtonSave_clicked()
{
    SaveInfo();
}

void Delimitator::on_pushButtonLoad_clicked()
{
    LoadInfo();
}
