/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004162d8
 * Function: Caver::Proto::PressureTriggerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(PressureTriggerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::GetTypeName() const */

void __thiscall Caver::Proto::PressureTriggerComponent::GetTypeName(PressureTriggerComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004162f4 to 0051655b has its CatchHandler @ 00416054 */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


