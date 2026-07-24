/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004180c4
 * Function: Caver::Proto::MonsterEntityComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(MonsterEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterEntityComponent::GetTypeName() const */

void __thiscall Caver::Proto::MonsterEntityComponent::GetTypeName(MonsterEntityComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 004180cc to 00518107 has its CatchHandler @ 00419798 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


