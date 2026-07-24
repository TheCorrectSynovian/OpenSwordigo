/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003819c0
 * Function: Caver::DimensionObjectComponent::Prepare
 * Signature: undefined __thiscall Prepare(DimensionObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DimensionObjectComponent::Prepare() */

void __thiscall Caver::DimensionObjectComponent::Prepare(DimensionObjectComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  SceneObjectGroup *pSVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  string *psVar9;
  undefined1 auStack_58 [8];
  long local_50;
  SceneObjectGroup *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  psVar9 = *(string **)(*(long *)(this + 0x28) + 0x20);
  FUN_00666bb8(&local_50,"dimension",auStack_58);
  Scene::GroupWithIdentifier(psVar9,SUB81(&local_50,0));
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  if (local_48[0] == (SceneObjectGroup *)0x0) {
    pSVar5 = operator_new(0x50);
    SceneObjectGroup::SceneObjectGroup(pSVar5);
    *(int *)(pSVar5 + 8) = *(int *)(pSVar5 + 8) + 1;
    if ((local_48[0] != (SceneObjectGroup *)0x0) &&
       (iVar8 = *(int *)(local_48[0] + 8), *(int *)(local_48[0] + 8) = iVar8 + -1, iVar8 + -1 == 0))
    {
      lVar6 = *(long *)local_48[0];
      local_48[0] = pSVar5;
      (**(code **)(lVar6 + 8))();
      pSVar5 = local_48[0];
    }
    local_48[0] = pSVar5;
    pSVar5 = local_48[0];
    FUN_00666bb8(&local_50,"dimension",auStack_58);
    SceneObjectGroup::SetIdentifier(pSVar5,(string *)&local_50);
    if ((undefined *)(local_50 + -0x18) != puVar4) {
      piVar7 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    local_48[0][0x4a] = (SceneObjectGroup)0x0;
    local_48[0][0x48] = (SceneObjectGroup)0x1;
    Scene::AddGroup(*(Scene **)(*(long *)(this + 0x28) + 0x20),(intrusive_ptr *)local_48);
  }
  SceneObjectGroup::AddObject(local_48[0],*(SceneObject **)(this + 0x28));
  if ((local_48[0] != (SceneObjectGroup *)0x0) &&
     (iVar8 = *(int *)(local_48[0] + 8), *(int *)(local_48[0] + 8) = iVar8 + -1, iVar8 + -1 == 0)) {
    (**(code **)(*(long *)local_48[0] + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


