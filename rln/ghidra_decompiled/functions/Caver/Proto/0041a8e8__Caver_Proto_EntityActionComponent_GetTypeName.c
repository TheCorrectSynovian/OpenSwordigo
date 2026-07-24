/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a8e8
 * Function: Caver::Proto::EntityActionComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(EntityActionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::GetTypeName() const */

void __thiscall Caver::Proto::EntityActionComponent::GetTypeName(EntityActionComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0041a8f4 to 0051a9e7 has its CatchHandler @ 0041a8a8 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


