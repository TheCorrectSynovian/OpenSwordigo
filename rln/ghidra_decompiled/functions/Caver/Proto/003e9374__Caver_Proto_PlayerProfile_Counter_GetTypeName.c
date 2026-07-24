/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e9374
 * Function: Caver::Proto::PlayerProfile_Counter::GetTypeName
 * Signature: undefined __thiscall GetTypeName(PlayerProfile_Counter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile_Counter::GetTypeName() const */

void __thiscall Caver::Proto::PlayerProfile_Counter::GetTypeName(PlayerProfile_Counter *this)

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


