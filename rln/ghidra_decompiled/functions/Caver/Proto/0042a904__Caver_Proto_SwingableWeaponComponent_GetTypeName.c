/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042a904
 * Function: Caver::Proto::SwingableWeaponComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(SwingableWeaponComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponComponent::GetTypeName() const */

void __thiscall Caver::Proto::SwingableWeaponComponent::GetTypeName(SwingableWeaponComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 0042a840 with catch @ 0042a914 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0042a67c with catch @ 0042a928 */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 0042a94c to 0052a953 has its CatchHandler @ 0042a95c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0042a954 to 0052a95f has its CatchHandler @ 0042a5fc */
  __stack_chk_fail();
}


