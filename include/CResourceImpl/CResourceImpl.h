//
// Created by Данил Шевченко on 27.08.2020.
//

#ifndef ALTV_CRESOURCEIMPL_H
#define ALTV_CRESOURCEIMPL_H

#include <altv-sdk/IResource.h>

namespace altmod {
    class CResourceImpl : public alt::IResource::Impl {
    public:
        CResourceImpl() = default;

        bool Start() override;

        bool OnEvent(const alt::CEvent *ev) override;
    };
}

#endif //ALTV_CRESOURCEIMPL_H
