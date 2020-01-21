#include "ClientMeteo.h"

ClientMeteo::ClientMeteo() {
}

ClientMeteo::ClientMeteo(const ClientMeteo& orig) {
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