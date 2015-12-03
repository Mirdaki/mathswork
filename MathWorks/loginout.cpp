#include "loginout.h"
#include "ui_loginout.h"

// Constructor and destructor
LogInOut::LogInOut(QWidget *parent) : QDialog(parent), ui(new Ui::LogInOut){
    ui->setupUi(this);
}

LogInOut::~LogInOut(){
    delete ui;
}

// Return string in text box
std::string LogInOut::getName(){
    // Must convert to std::string
    return (ui->usernameIn->text()).toUtf8().constData();;
}

// When ok is clicked close close
void LogInOut::on_ok_clicked(){
    this->close();
}
