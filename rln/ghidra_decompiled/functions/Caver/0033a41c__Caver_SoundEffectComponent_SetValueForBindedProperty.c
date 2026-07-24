/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033a41c
 * Function: Caver::SoundEffectComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(SoundEffectComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::SoundEffectComponent::SetValueForBindedProperty
          (SoundEffectComponent *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  long local_50;
  long *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == 2) {
    *(undefined4 *)(this + 0x84) = **(undefined4 **)(param_2 + 8);
  }
  else if (param_1 == 1) {
    *(undefined4 *)(this + 0x80) = **(undefined4 **)(param_2 + 8);
  }
  else if (param_1 == 0) {
    psVar5 = (string *)SoundLibrary::sharedLibrary();
    FUN_0066a528(&local_50,*(undefined8 *)(param_2 + 8));
    SoundLibrary::EffectForName(psVar5);
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
    if (local_48 != (long *)0x0) {
      FUN_0066a528(&local_50,*(undefined8 *)(param_2 + 8));
      FUN_0066a6a8(this + 0x78,&local_50);
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
      if (local_48 != (long *)0x0) {
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      }
      plVar6 = *(long **)(this + 0x88);
      *(long **)(this + 0x88) = local_48;
      if ((plVar6 != (long *)0x0) &&
         (iVar8 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar8, iVar8 == 0)) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      if ((local_48 != (long *)0x0) &&
         (iVar8 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar8, iVar8 == 0)) {
        (**(code **)(*local_48 + 8))();
      }
    }
  }
  else {
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


