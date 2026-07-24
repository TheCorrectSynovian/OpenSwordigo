/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424cc4
 * Function: Caver::Proto::ChargingMonsterControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(ChargingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ChargingMonsterControllerComponent::GetTypeName() const */

void __thiscall
Caver::Proto::ChargingMonsterControllerComponent::GetTypeName
          (ChargingMonsterControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00424cc4 to 00524cd7 has its CatchHandler @ 00425650 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00424ce8 to 00524cf3 has its CatchHandler @ 00425618 */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00424d14 to 00524d4f has its CatchHandler @ 004255bc */
  __stack_chk_fail();
}


