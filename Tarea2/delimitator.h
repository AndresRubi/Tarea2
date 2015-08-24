#ifndef DELIMITATOR_H
#define DELIMITATOR_H
#include <QCoreApplication>
#include <fstream>
#include <iostream>
using namespace std;


#include <locale>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <sstream>
#include <QWidget>

namespace Ui {
class Delimitator;
}

class Delimitator : public QWidget
{
    Q_OBJECT

public:
    explicit Delimitator(QWidget *parent = 0);
    ~Delimitator();
    ofstream MyFile;
    fstream File;
    int LIMIT_CHARS;
    void SaveInfo();
    void LoadInfo();

private slots:
    void on_pushButtonSave_clicked();

    void on_pushButtonLoad_clicked();

private:
    Ui::Delimitator *ui;
};

#endif // DELIMITATOR_H
