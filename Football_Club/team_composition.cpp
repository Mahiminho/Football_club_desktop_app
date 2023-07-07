#include "team_composition.h"
#include "ui_team_composition.h"

Team_Composition::Team_Composition(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Team_Composition)
{
    ui->setupUi(this);
    lead = new Leadership();
    connect(lead, &Leadership::second, this, &Team_Composition::show);
    coa = new Coach();
    connect(coa, &Coach::third, this, &Team_Composition::show);
    play = new Players();
    connect(play, &Players::fourth, this, &Team_Composition::show);

}

Team_Composition::~Team_Composition()
{
    delete ui;
}


void Team_Composition::on_pushButton_director_clicked()
{
    //hide();
    this->close();
    //lead = new Leadership(this);
    lead->show();
}

void Team_Composition::on_pushButton_coach_clicked()
{
    //hide();
    this->close();
    //coa = new Coach(this);
    coa->show();
}

void Team_Composition::on_pushButton_back_clicked()
{
    //emit first();
    this->close();
    emit first();
}

void Team_Composition::on_pushButton_players_clicked()
{
    this->close();
    play->show();
}
