/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033aa08
 * Function: Caver::SoundEffectComponent::className
 * Signature: undefined __thiscall className(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::className() const */

void __thiscall Caver::SoundEffectComponent::className(SoundEffectComponent *this)

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
  __stack_chk_fail();
}


