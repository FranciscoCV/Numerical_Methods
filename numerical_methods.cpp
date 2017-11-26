#include "numerical_methods.h"
#include "ui_numerical_methods.h"

Numerical_Methods::Numerical_Methods(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Numerical_Methods)
{
    ui->setupUi(this);
    integra = new Integracion();
    deriva = new Derivacion();
    eul= new Euler();
    eliminaGauss= new Eliminacion_Gauss();
    gaussSeildel= new Gauss_Seidel();
    puntofijo= new Punto_Fijo();
    newton= new Newton_Raphson();
    interpolacion= new Interpolacion();
    regreLineal= new Regresion_Lineal();
    regremul= new RegresionMultiple();
    runge= new Runge_Kutta();
    connect(ui->met9,SIGNAL(clicked()),this,SLOT(integral()));
    connect(ui->met8,SIGNAL(clicked()),this,SLOT(derivada()));
    connect(ui->met10,SIGNAL(clicked()),this,SLOT(euler()));
    connect(ui->met3,SIGNAL(clicked()),this,SLOT(EliminaGauss()));
    connect(ui->met4,SIGNAL(clicked()),this,SLOT(gaussseildel()));
    connect(ui->met1,SIGNAL(clicked()),this,SLOT(Puntofijo()));
    connect(ui->met2,SIGNAL(clicked()),this,SLOT(NewtonRaph()));
    connect(ui->met5,SIGNAL(clicked()),this,SLOT(interpo()));
    connect(ui->met6,SIGNAL(clicked()),this,SLOT(regresion_lineal()));
    connect(ui->met7,SIGNAL(clicked()),this,SLOT(regresionMultiple()));
    connect(ui->met11,SIGNAL(clicked()),this,SLOT(run_Kutta()));
    connect(ui->salir,SIGNAL(clicked()),this,SLOT(salir()));
}

Numerical_Methods::~Numerical_Methods()
{
    delete ui;
}
void Numerical_Methods::integral(){
    integra->show();
}
void Numerical_Methods::derivada(){
    deriva->show();
}
void Numerical_Methods::euler(){
    eul->show();
}
void Numerical_Methods::EliminaGauss(){
    eliminaGauss->show();
}
void Numerical_Methods::gaussseildel(){
    gaussSeildel->show();
}
void Numerical_Methods::Puntofijo(){
    puntofijo->show();
}
void Numerical_Methods::NewtonRaph(){
    newton->show();
}
void Numerical_Methods::interpo(){
    interpolacion->show();
}
void Numerical_Methods::regresion_lineal(){
    regreLineal->show();
}
void Numerical_Methods::regresionMultiple(){
    regremul->show();
}
void Numerical_Methods::run_Kutta(){
    runge->show();
}

void Numerical_Methods::salir(){
    delete integra;
    delete deriva;
    delete eul;
    delete eliminaGauss;
    delete gaussSeildel;
    delete puntofijo;
    delete newton;
    delete interpolacion;
    delete regreLineal;
    delete regremul;
    delete runge;

    close();
}
