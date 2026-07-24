/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043006c
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::GetTypeName
 * Signature: undefined __thiscall GetTypeName(ItemDropComponent_ItemDropEntry * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent_ItemDropEntry::GetTypeName() const */

void __thiscall
Caver::Proto::ItemDropComponent_ItemDropEntry::GetTypeName(ItemDropComponent_ItemDropEntry *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
                    /* catch() { ... } // from try @ 0042fac4 with catch @ 004300a4 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


