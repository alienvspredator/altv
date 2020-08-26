//
// Created by Данил Шевченко on 27.08.2020.
//

#include <CResourceImpl/CResourceImpl.h>
#include <altv-sdk/events/CEvent.h>

bool altmod::CResourceImpl::Start() {
    return true;
}

bool altmod::CResourceImpl::OnEvent(const alt::CEvent *ev) {
    if (ev->GetType() == alt::CEvent::Type::PLAYER_CONNECT) {
        std::cout << "Player connected!!!" << std::endl;
        return true;
    }

    return false;
}
