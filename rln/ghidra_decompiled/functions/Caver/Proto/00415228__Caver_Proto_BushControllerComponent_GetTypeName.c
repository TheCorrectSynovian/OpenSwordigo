/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415228
 * Function: Caver::Proto::BushControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(BushControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BushControllerComponent::GetTypeName() const */

void __thiscall Caver::Proto::BushControllerComponent::GetTypeName(BushControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 004151c4 with catch @ 00415238 */
  lVar1 = tpidr_el0;
                    /* try { // try from 0041523c to 00515243 has its CatchHandler @ 0041524c */
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00415244 to 0051524f has its CatchHandler @ 00415138 */
                    /* catch() { ... } // from try @ 0041523c with catch @ 0041524c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004152e8 with catch @ 00415250
                       catch(type#1 @ 00000000) { ... } // from try @ 00415364 with catch @ 00415250
                        */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


