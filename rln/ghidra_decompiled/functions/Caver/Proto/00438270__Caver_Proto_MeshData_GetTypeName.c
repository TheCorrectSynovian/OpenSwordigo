/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00438270
 * Function: Caver::Proto::MeshData::GetTypeName
 * Signature: undefined __thiscall GetTypeName(MeshData * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshData::GetTypeName() const */

void __thiscall Caver::Proto::MeshData::GetTypeName(MeshData *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch() { ... } // from try @ 004373e0 with catch @ 004382bc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


