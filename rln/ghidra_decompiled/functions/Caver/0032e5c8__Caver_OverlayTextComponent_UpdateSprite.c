/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032e5c8
 * Function: Caver::OverlayTextComponent::UpdateSprite
 * Signature: undefined __thiscall UpdateSprite(OverlayTextComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::UpdateSprite() */

void __thiscall Caver::OverlayTextComponent::UpdateSprite(OverlayTextComponent *this)

{
  int iVar1;
  long lVar2;
  string *psVar3;
  Sprite *this_00;
  long *plVar4;
  long *plVar5;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this[0xa8] = (OverlayTextComponent)0x0;
  if (*(long *)(*(long *)(this + 0x90) + -0x18) == 0) {
    plVar5 = *(long **)(this + 0xa0);
    *(undefined8 *)(this + 0xa0) = 0;
    if (plVar5 != (long *)0x0) {
      if ((void *)plVar5[7] != (void *)0x0) {
        operator_delete__((void *)plVar5[7]);
      }
      if ((void *)plVar5[4] != (void *)0x0) {
        operator_delete__((void *)plVar5[4]);
      }
      plVar4 = (long *)*plVar5;
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar4 + 8))();
      }
      operator_delete(plVar5);
    }
  }
  else {
    psVar3 = (string *)TextureLibrary::sharedLibrary();
    TextureLibrary::TextureForName(psVar3,SUB81(this + 0x90,0));
    if (local_50 == (long *)0x0) {
      plVar5 = *(long **)(this + 0xa0);
      *(undefined8 *)(this + 0xa0) = 0;
      if (plVar5 != (long *)0x0) {
        if ((void *)plVar5[7] != (void *)0x0) {
          operator_delete__((void *)plVar5[7]);
        }
        if ((void *)plVar5[4] != (void *)0x0) {
          operator_delete__((void *)plVar5[4]);
        }
        plVar4 = (long *)*plVar5;
        if ((plVar4 != (long *)0x0) &&
           (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*plVar4 + 8))();
        }
        operator_delete(plVar5);
      }
    }
    else {
      this_00 = operator_new(0x58);
      *(undefined4 *)(this_00 + 0x30) = 0;
      this_00[0x50] = (Sprite)0x0;
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 0x28) = 0;
      *(undefined8 *)(this_00 + 0x20) = 0;
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)(this_00 + 0x48) = 0;
      *(undefined8 *)(this_00 + 0x40) = 0;
      *(undefined8 *)(this_00 + 0x38) = 0;
      plVar5 = *(long **)(this + 0xa0);
      *(Sprite **)(this + 0xa0) = this_00;
      if (plVar5 != (long *)0x0) {
        if ((void *)plVar5[7] != (void *)0x0) {
          operator_delete__((void *)plVar5[7]);
        }
        if ((void *)plVar5[4] != (void *)0x0) {
          operator_delete__((void *)plVar5[4]);
        }
        plVar4 = (long *)*plVar5;
        if ((plVar4 != (long *)0x0) &&
           (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*plVar4 + 8))();
        }
        operator_delete(plVar5);
        this_00 = *(Sprite **)(this + 0xa0);
      }
      Vector2::Rounded();
      local_58 = *(undefined8 *)((long)local_50 + 0x54);
      local_60 = CONCAT44(-(float)((ulong)local_70 >> 0x20),-(float)local_70);
      Sprite::InitWithTexture(this_00,(intrusive_ptr *)&local_50,(Rectangle *)&local_60);
    }
    if ((local_50 != (long *)0x0) &&
       (iVar1 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*local_50 + 8))();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


