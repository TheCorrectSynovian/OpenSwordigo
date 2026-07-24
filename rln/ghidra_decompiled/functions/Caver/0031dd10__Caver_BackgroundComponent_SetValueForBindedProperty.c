/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031dd10
 * Function: Caver::BackgroundComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(BackgroundComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BackgroundComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::BackgroundComponent::SetValueForBindedProperty
          (BackgroundComponent *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  string *psVar5;
  int *piVar6;
  int iVar7;
  Sprite *this_00;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  long local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (param_1 == 0) {
    FUN_0066a528(&local_30,*(undefined8 *)(param_2 + 8));
    plVar4 = (long *)(local_30 + -0x18);
    if (*plVar4 != 0) {
      this_00 = *(Sprite **)(this + 0x80);
      psVar5 = (string *)TextureLibrary::sharedLibrary();
      TextureLibrary::TextureForName(psVar5,SUB81(&local_30,0));
      local_48 = 0;
      uStack_40 = 0;
      Sprite::InitWithTexture(this_00,(intrusive_ptr *)&local_38,(Rectangle *)&local_48);
      if ((local_38 != (long *)0x0) &&
         (iVar7 = (int)local_38[1] + -1, *(int *)(local_38 + 1) = iVar7, iVar7 == 0)) {
        (**(code **)(*local_38 + 8))();
      }
      plVar4 = (long *)(local_30 + -0x18);
    }
    if (plVar4 != (long *)PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_30 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(plVar4);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


