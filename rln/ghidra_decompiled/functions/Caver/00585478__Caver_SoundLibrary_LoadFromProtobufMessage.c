/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00585478
 * Function: Caver::SoundLibrary::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SoundLibrary * this, SoundLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundLibrary::LoadFromProtobufMessage(Caver::Proto::SoundLibrary const&) */

void __thiscall
Caver::SoundLibrary::LoadFromProtobufMessage(SoundLibrary *this,SoundLibrary *param_1)

{
  int iVar1;
  long lVar2;
  SoundEffect *this_00;
  long lVar3;
  SoundEffect *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      this_00 = operator_new(0x40);
      SoundEffect::SoundEffect(this_00);
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      local_50 = this_00;
      SoundEffect::LoadFromProtobufMessage
                (this_00,*(SoundEffect **)(*(long *)(param_1 + 0x10) + lVar3 * 8));
      AddEffect(this,(intrusive_ptr *)&local_50);
      iVar1 = *(int *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x18));
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005852f8 with catch @ 00585548
                        */
  __stack_chk_fail();
}


