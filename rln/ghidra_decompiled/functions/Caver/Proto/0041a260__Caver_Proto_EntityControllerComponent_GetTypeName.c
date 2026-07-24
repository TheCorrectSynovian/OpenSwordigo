/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a260
 * Function: Caver::Proto::EntityControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(EntityControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityControllerComponent::GetTypeName() const */

void __thiscall
Caver::Proto::EntityControllerComponent::GetTypeName(EntityControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0041a260 to 0051a267 has its CatchHandler @ 0041a3d4 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


