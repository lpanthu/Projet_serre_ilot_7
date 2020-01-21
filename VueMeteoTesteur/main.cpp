/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g2
 *
 * Created on 19 décembre 2019, 15:00
 */

#include <QApplication>

#include "VueMeteo.h"


int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    BulletinMeteo *monBulletin = new BulletinMeteo();
    VueMeteo *maVue = new VueMeteo();
    maVue->show();
    
    
    // create and show your widgets here

    return app.exec();
}
