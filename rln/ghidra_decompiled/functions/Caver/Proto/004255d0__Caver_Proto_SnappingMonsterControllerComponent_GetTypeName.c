/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004255d0
 * Function: Caver::Proto::SnappingMonsterControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(SnappingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SnappingMonsterControllerComponent::GetTypeName() const */

void __thiscall
Caver::Proto::SnappingMonsterControllerComponent::GetTypeName
          (SnappingMonsterControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch() { ... } // from try @ 00424ce8 with catch @ 00425618 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


