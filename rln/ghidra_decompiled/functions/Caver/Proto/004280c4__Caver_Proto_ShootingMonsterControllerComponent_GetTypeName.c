/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004280c4
 * Function: Caver::Proto::ShootingMonsterControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(ShootingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShootingMonsterControllerComponent::GetTypeName() const */

void __thiscall
Caver::Proto::ShootingMonsterControllerComponent::GetTypeName
          (ShootingMonsterControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch() { ... } // from try @ 0042807c with catch @ 0042810c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


