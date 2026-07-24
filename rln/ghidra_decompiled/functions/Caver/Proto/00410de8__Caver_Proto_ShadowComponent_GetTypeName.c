/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410de8
 * Function: Caver::Proto::ShadowComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(ShadowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::GetTypeName() const */

void __thiscall Caver::Proto::ShadowComponent::GetTypeName(ShadowComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00410dfc to 00510dff has its CatchHandler @ 00410e84 */
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00410e00 to 00510ea7 has its CatchHandler @ 00410db8 */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


