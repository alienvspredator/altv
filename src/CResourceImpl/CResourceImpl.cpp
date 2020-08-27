//
// Created by Данил Шевченко on 27.08.2020.
//

#include <CResourceImpl/CResourceImpl.h>
#include <altv-sdk/events/CEvent.h>
#include <altv-sdk/ICore.h>
#include <fmt/printf.h>
#include <altv-sdk/events/CPlayerConnectEvent.h>
#include <altv-sdk/entities/IPlayer.h>
#include <random>

bool altmod::CResourceImpl::Start() {
    alt::ICore::Instance().LogInfo(
            fmt::sprintf("Starting #ff0000altmod #ffffffresource #00ff00%s", this->resource->GetName().CStr()));
    return true;
}

bool altmod::CResourceImpl::Stop() {
    return true;
}

bool altmod::CResourceImpl::OnEvent(const alt::CEvent *ev) {
    alt::ICore::Instance().LogInfo(fmt::sprintf("Got event %d\n", (uint16_t) ev->GetType()));


    if (ev->GetType() == alt::CEvent::Type::PLAYER_CONNECT) {
        auto e = dynamic_cast<const alt::CPlayerConnectEvent *>(ev);
        alt::ICore::Instance().LogInfo(fmt::sprintf("Player %s connected\n", e->GetTarget()->GetName().CStr()));
        return true;
    }

    if (ev->GetType() == alt::CEvent::Type::PLAYER_ENTER_VEHICLE) {
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_real_distribution<double> dist(1.0, 2.0);
        if (dist(mt) == 2)
            ev->Cancel();
    }

    return true;
}

void altmod::CResourceImpl::OnTick() {}

void altmod::CResourceImpl::OnCreateBaseObject(alt::Ref<alt::IBaseObject> object) {}

void altmod::CResourceImpl::OnRemoveBaseObject(alt::Ref<alt::IBaseObject> object) {}
