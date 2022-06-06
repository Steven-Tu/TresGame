#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex082_SpawnModeChangePawn.generated.h"

class ATresCharPawnBase;

UCLASS(HideDropdown)
class UTresAction2_e_ex082_SpawnModeChangePawn : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCharPawnBase> m_ModeChangePawnClass;
    
public:
    UTresAction2_e_ex082_SpawnModeChangePawn();
};

