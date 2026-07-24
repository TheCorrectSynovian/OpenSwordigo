/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e3c40
 * Function: Caver::Proto::GuideTarget_LevelObject::GetTypeName
 * Signature: undefined __thiscall GetTypeName(GuideTarget_LevelObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget_LevelObject::GetTypeName() const */

void __thiscall Caver::Proto::GuideTarget_LevelObject::GetTypeName(GuideTarget_LevelObject *this)

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


