/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429204
 * Function: Caver::Proto::MonsterDeathControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(MonsterDeathControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::GetTypeName() const */

void __thiscall
Caver::Proto::MonsterDeathControllerComponent::GetTypeName(MonsterDeathControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 00429244 to 00529257 has its CatchHandler @ 0042965c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


