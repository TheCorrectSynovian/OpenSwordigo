/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f4b8
 * Function: Caver::Proto::TouchableComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(TouchableComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::GetTypeName() const */

void __thiscall Caver::Proto::TouchableComponent::GetTypeName(TouchableComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042f42c with catch @ 0042f4dc
                        */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 0042f500 to 0052f577 has its CatchHandler @ 0042f580 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


