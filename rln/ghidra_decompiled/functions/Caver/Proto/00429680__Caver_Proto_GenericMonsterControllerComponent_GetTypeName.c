/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429680
 * Function: Caver::Proto::GenericMonsterControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(GenericMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GenericMonsterControllerComponent::GetTypeName() const */

void __thiscall
Caver::Proto::GenericMonsterControllerComponent::GetTypeName
          (GenericMonsterControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
                    /* catch() { ... } // from try @ 004291bc with catch @ 004296bc */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


