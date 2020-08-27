//
// Created by Данил Шевченко on 27.08.2020.
//

#ifndef ALTV_CSCRIPTRUNTIME_H
#define ALTV_CSCRIPTRUNTIME_H

#include <altv-sdk/IScriptRuntime.h>

namespace altmod {
    class CScriptRuntime : public alt::IScriptRuntime {
    public:
        alt::IResource::Impl *CreateImpl(alt::IResource *resource) override;

        void DestroyImpl(alt::IResource::Impl *impl) override;

        static CScriptRuntime &Instance() {
            static CScriptRuntime Instance;
            return Instance;
        }

    private:
        CScriptRuntime() = default;
    };
}


#endif //ALTV_CSCRIPTRUNTIME_H
