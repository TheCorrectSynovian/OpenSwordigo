/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041bd1c
 * Function: Caver::Proto::HeroEntityComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(HeroEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HeroEntityComponent::GetTypeName() const */

void __thiscall Caver::Proto::HeroEntityComponent::GetTypeName(HeroEntityComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 0041bd30 to 0051bd57 has its CatchHandler @ 0041bddc */
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
                    /* try { // try from 0041bd58 to 0051bdff has its CatchHandler @ 0041bc88 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


