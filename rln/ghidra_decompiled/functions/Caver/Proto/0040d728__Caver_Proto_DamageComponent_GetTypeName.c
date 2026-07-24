/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040d728
 * Function: Caver::Proto::DamageComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(DamageComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DamageComponent::GetTypeName() const */

void __thiscall Caver::Proto::DamageComponent::GetTypeName(DamageComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 0040d76c to 0050d787 has its CatchHandler @ 0040da2c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


