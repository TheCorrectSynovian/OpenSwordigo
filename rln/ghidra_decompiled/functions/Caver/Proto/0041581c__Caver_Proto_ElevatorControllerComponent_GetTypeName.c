/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041581c
 * Function: Caver::Proto::ElevatorControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(ElevatorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ElevatorControllerComponent::GetTypeName() const */

void __thiscall
Caver::Proto::ElevatorControllerComponent::GetTypeName(ElevatorControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


