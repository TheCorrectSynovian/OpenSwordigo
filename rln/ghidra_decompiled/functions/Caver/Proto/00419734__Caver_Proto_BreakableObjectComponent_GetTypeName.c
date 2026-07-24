/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00419734
 * Function: Caver::Proto::BreakableObjectComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(BreakableObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BreakableObjectComponent::GetTypeName() const */

void __thiscall Caver::Proto::BreakableObjectComponent::GetTypeName(BreakableObjectComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00418154 with catch @ 0041975c */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


