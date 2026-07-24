/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437424
 * Function: Caver::Proto::SpellComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(SpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpellComponent::GetTypeName() const */

void __thiscall Caver::Proto::SpellComponent::GetTypeName(SpellComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00437438 to 00537473 has its CatchHandler @ 004381ec */
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


