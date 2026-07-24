/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042b2ec
 * Function: Caver::Proto::SwingableWeaponControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponControllerComponent::GetTypeName() const */

void __thiscall
Caver::Proto::SwingableWeaponControllerComponent::GetTypeName
          (SwingableWeaponControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0042b2ec to 0052b2f3 has its CatchHandler @ 0042b37c */
                    /* try { // try from 0042b2f4 to 0052b39f has its CatchHandler @ 0042b224 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


