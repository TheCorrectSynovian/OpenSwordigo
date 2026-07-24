/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427210
 * Function: Caver::Proto::SkellyMonsterControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(SkellyMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkellyMonsterControllerComponent::GetTypeName() const */

void __thiscall
Caver::Proto::SkellyMonsterControllerComponent::GetTypeName(SkellyMonsterControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0042721c to 0052722f has its CatchHandler @ 00427ba0 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
                    /* try { // try from 00427240 to 0052724b has its CatchHandler @ 00427b68 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


