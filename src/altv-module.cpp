//
// Created by Данил Шевченко on 27.08.2020.
//

#include <altv-sdk/SDK.h>
#include <CScriptRuntime/CScriptRuntime.h>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
EXPORT uint32_t GetSDKVersion() {
    return alt::ICore::SDK_VERSION;
}
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
EXPORT bool altMain(alt::ICore *_core) {
    alt::ICore::SetInstance(_core);

    auto &apiCore = alt::ICore::Instance();
    auto &runtime = altmod::CScriptRuntime::Instance();

    apiCore.RegisterScriptRuntime("altmod", &runtime);

    return true;
}
#pragma clang diagnostic pop
