/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437718
 * Function: Caver::Proto::DimensionObjectComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(DimensionObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionObjectComponent::GetTypeName() const */

void __thiscall Caver::Proto::DimensionObjectComponent::GetTypeName(DimensionObjectComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00437740 to 00537753 has its CatchHandler @ 00437f88 */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 00437764 to 0053776f has its CatchHandler @ 00437f4c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


