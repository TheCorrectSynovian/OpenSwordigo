/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043626c
 * Function: Caver::Proto::MagicBombComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(MagicBombComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBombComponent::GetTypeName() const */

void __thiscall Caver::Proto::MagicBombComponent::GetTypeName(MagicBombComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00436278 to 0053627b has its CatchHandler @ 004362c0 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
                    /* try { // try from 0043629c to 0053629f has its CatchHandler @ 004362b8 */
                    /* try { // try from 004362a0 to 005362a7 has its CatchHandler @ 004362fc */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043629c with catch @ 004362b8
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


