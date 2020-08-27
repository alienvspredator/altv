//
// Created by Данил Шевченко on 27.08.2020.
//

#include <CResourceImpl/CResourceImpl.h>
#include <CScriptRuntime/CScriptRuntime.h>

alt::IResource::Impl *altmod::CScriptRuntime::CreateImpl(alt::IResource *resource) {
    return new CResourceImpl(this, resource);
}

void altmod::CScriptRuntime::DestroyImpl(alt::IResource::Impl *impl) {
    delete dynamic_cast<CResourceImpl *>(impl);
}
