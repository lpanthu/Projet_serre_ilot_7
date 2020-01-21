#include "ClientMeteo.h"

ClientMeteo::ClientMeteo() {
    BulletinMeteo* bulletinMeteo = new BulletinMeteo();
}

ClientMeteo::~ClientMeteo() {
}

void ClientMeteo::traiterBulletinMeteo(BulletinMeteo bulletin) {
}

void ClientMeteo::declencherAlerteVent() {
}

void ClientMeteo::declencherFinAlerteVent() {
}

BulletinMeteo* ClientMeteo::getBulletinMeteo() {
    return dernierBilletinMeteo;
}