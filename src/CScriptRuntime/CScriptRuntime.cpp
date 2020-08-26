//
// Created by Данил Шевченко on 27.08.2020.
//
//#include <CScriptRuntime/CScriptRuntime.h>
#include <CResourceImpl/CResourceImpl.h>
#include <CScriptRuntime/CScriptRuntime.h>

[[maybe_unused]] alt::IResource::Impl *altmod::CScriptRuntime::CreateImpl(alt::IResource *resource) {
    return new CResourceImpl;
}
