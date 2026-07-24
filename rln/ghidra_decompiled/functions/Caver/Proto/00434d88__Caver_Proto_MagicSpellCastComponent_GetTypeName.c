/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434d88
 * Function: Caver::Proto::MagicSpellCastComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(MagicSpellCastComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicSpellCastComponent::GetTypeName() const */

void __thiscall Caver::Proto::MagicSpellCastComponent::GetTypeName(MagicSpellCastComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00434d94 to 00534dcf has its CatchHandler @ 00435250 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


