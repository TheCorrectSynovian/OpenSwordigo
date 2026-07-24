/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428678
 * Function: Caver::Proto::BatMonsterControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(BatMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BatMonsterControllerComponent::GetTypeName() const */

void __thiscall
Caver::Proto::BatMonsterControllerComponent::GetTypeName(BatMonsterControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 004286b8 to 005286bb has its CatchHandler @ 004286fc */
                    /* try { // try from 004286bc to 0052870f has its CatchHandler @ 00428658 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


