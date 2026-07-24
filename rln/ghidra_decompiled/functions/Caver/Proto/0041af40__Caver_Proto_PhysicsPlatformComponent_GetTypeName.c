/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041af40
 * Function: Caver::Proto::PhysicsPlatformComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(PhysicsPlatformComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsPlatformComponent::GetTypeName() const */

void __thiscall Caver::Proto::PhysicsPlatformComponent::GetTypeName(PhysicsPlatformComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0041af60 to 0051afd7 has its CatchHandler @ 0041afe0 */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch() { ... } // from try @ 0041ae50 with catch @ 0041af8c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


