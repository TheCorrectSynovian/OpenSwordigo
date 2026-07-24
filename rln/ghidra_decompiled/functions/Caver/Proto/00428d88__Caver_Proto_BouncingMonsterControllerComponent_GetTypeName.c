/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428d88
 * Function: Caver::Proto::BouncingMonsterControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(BouncingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BouncingMonsterControllerComponent::GetTypeName() const */

void __thiscall
Caver::Proto::BouncingMonsterControllerComponent::GetTypeName
          (BouncingMonsterControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00428db4 to 00528db7 has its CatchHandler @ 00428ed0 */
  FUN_00666bb8();
                    /* try { // try from 00428db8 to 00528df3 has its CatchHandler @ 00428c7c */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


