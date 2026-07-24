/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033c678
 * Function: Caver::SpriteComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(SpriteComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpriteComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::SpriteComponent::SetValueForBindedProperty
          (SpriteComponent *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  string *psVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  long *local_48;
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (param_1 == 0) {
    FUN_0066a528(&local_40,*(undefined8 *)(param_2 + 8));
    plVar4 = (long *)(local_40 + -0x18);
    if (*plVar4 != 0) {
      psVar5 = (string *)TextureLibrary::sharedLibrary();
      TextureLibrary::TextureForName(psVar5,SUB81(&local_40,0));
      if (local_48 != (long *)0x0) {
        FUN_0066a6a8(this + 0x70,local_48 + 6);
        local_38 = 0;
        uStack_30 = 0;
        Sprite::InitWithTexture
                  (*(Sprite **)(this + 0x78),(intrusive_ptr *)&local_48,(Rectangle *)&local_38);
        uVar8 = *(undefined8 *)(*(long *)(this + 0x78) + 8);
        *(undefined8 *)(this + 0x90) = *(undefined8 *)(*(long *)(this + 0x78) + 0x10);
        *(undefined8 *)(this + 0x88) = uVar8;
        Component::UpdateObjectBounds((Component *)this);
        if ((local_48 != (long *)0x0) &&
           (iVar7 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar7, iVar7 == 0)) {
          (**(code **)(*local_48 + 8))();
        }
      }
      plVar4 = (long *)(local_40 + -0x18);
    }
    if (plVar4 != (long *)PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_40 + -8);
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


