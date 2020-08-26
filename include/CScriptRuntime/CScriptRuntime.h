//
// Created by Данил Шевченко on 27.08.2020.
//

#ifndef ALTV_CSCRIPTRUNTIME_H
#define ALTV_CSCRIPTRUNTIME_H

#include <altv-sdk/IScriptRuntime.h>

namespace altmod {
    class [[maybe_unused]] CScriptRuntime : public alt::IScriptRuntime {
    public:
        alt::IResource::Impl *CreateImpl(alt::IResource *resource) override;
    };
}


#endif //ALTV_CSCRIPTRUNTIME_H
