/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041caf8
 * Function: Caver::Proto::PropertiesComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(PropertiesComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PropertiesComponent::GetTypeName() const */

void __thiscall Caver::Proto::PropertiesComponent::GetTypeName(PropertiesComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
                    /* catch() { ... } // from try @ 0041caa4 with catch @ 0041cb34 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


