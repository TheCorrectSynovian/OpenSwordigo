/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042bae8
 * Function: Caver::Proto::SwingComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(SwingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingComponent::GetTypeName() const */

void __thiscall Caver::Proto::SwingComponent::GetTypeName(SwingComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 0042bafc to 0052bb37 has its CatchHandler @ 0042bafc
                       catch() { ... } // from try @ 0042bafc with catch @ 0042bafc
                       catch() { ... } // from try @ 0042bc54 with catch @ 0042bafc
                       catch() { ... } // from try @ 0042bda4 with catch @ 0042bafc */
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0042bb38 to 0052bb4b has its CatchHandler @ 0042bd78 */
  __stack_chk_fail();
}


