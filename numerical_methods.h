#ifndef NUMERICAL_METHODS_H
#define NUMERICAL_METHODS_H

#include <QMainWindow>
#include "integracion.h"
#include "derivacion.h"
#include "euler.h"
#include "eliminacion_gauss.h"
#include "gauss_seidel.h"
#include "punto_fijo.h"
#include "newton_raphson.h"
#include "interpolacion.h"
#include "regresion_lineal.h"
#include "regresionmultiple.h"
#include "runge_kutta.h"
namespace Ui {
class Numerical_Methods;
}

class Numerical_Methods : public QMainWindow
{
    Q_OBJECT

public:
    explicit Numerical_Methods(QWidget *parent = 0);
    ~Numerical_Methods();
     Integracion *integra;
     Derivacion *deriva;
     Euler *eul;
     Eliminacion_Gauss *eliminaGauss;
     Gauss_Seidel *gaussSeildel;
     Punto_Fijo *puntofijo;
     Newton_Raphson *newton;
     Interpolacion *interpolacion;
     Regresion_Lineal *regreLineal;
     RegresionMultiple *regremul;
     Runge_Kutta *runge;

private:
    Ui::Numerical_Methods *ui;
public slots:
    void integral();
    void derivada();
    void euler();
    void EliminaGauss();
    void gaussseildel();
    void Puntofijo();
    void NewtonRaph();
    void interpo();
    void regresion_lineal();
    void regresionMultiple();
    void run_Kutta();
    void salir();

};

#endif // NUMERICAL_METHODS_H
