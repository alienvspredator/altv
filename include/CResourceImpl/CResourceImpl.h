//
// Created by Данил Шевченко on 27.08.2020.
//

#ifndef ALTV_CRESOURCEIMPL_H
#define ALTV_CRESOURCEIMPL_H

#include <altv-sdk/IResource.h>

namespace altmod {
    class CScriptRuntime;

    class CResourceImpl : public alt::IResource::Impl {
    public:
        explicit CResourceImpl(CScriptRuntime *_runtime, alt::IResource *_resource) : runtime(_runtime),
                                                                                      resource(_resource) {}

        CResourceImpl(const CResourceImpl &) = delete;

        bool Start() override;

        bool Stop() override;

        bool OnEvent(const alt::CEvent *ev) override;

        void OnTick() override;

        void OnCreateBaseObject(alt::Ref<alt::IBaseObject> object) override;

        void OnRemoveBaseObject(alt::Ref<alt::IBaseObject> object) override;

    protected:
        CScriptRuntime *runtime;
        alt::IResource *resource;
    };
}

#endif //ALTV_CRESOURCEIMPL_H
