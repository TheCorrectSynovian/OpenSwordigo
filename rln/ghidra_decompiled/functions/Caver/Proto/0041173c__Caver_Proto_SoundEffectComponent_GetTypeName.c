/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041173c
 * Function: Caver::Proto::SoundEffectComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffectComponent::GetTypeName() const */

void __thiscall Caver::Proto::SoundEffectComponent::GetTypeName(SoundEffectComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004116d8 with catch @ 0041178c
                        */
  __stack_chk_fail();
}


