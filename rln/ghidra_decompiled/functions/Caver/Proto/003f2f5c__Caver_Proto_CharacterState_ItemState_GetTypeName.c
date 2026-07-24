/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f2f5c
 * Function: Caver::Proto::CharacterState_ItemState::GetTypeName
 * Signature: undefined __thiscall GetTypeName(CharacterState_ItemState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState_ItemState::GetTypeName() const */

void __thiscall Caver::Proto::CharacterState_ItemState::GetTypeName(CharacterState_ItemState *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


