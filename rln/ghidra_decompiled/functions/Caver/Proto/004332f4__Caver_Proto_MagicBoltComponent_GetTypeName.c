/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004332f4
 * Function: Caver::Proto::MagicBoltComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(MagicBoltComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBoltComponent::GetTypeName() const */

void __thiscall Caver::Proto::MagicBoltComponent::GetTypeName(MagicBoltComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00433304 to 00533307 has its CatchHandler @ 00433324 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00433308 to 00533337 has its CatchHandler @ 00433298 */
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
                    /* catch() { ... } // from try @ 00433304 with catch @ 00433324 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 00433338 to 00533363 has its CatchHandler @ 00433338
                       catch() { ... } // from try @ 00433338 with catch @ 00433338
                       catch() { ... } // from try @ 004333f4 with catch @ 00433338 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


