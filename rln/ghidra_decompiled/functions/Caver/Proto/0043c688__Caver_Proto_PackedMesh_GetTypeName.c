/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043c688
 * Function: Caver::Proto::PackedMesh::GetTypeName
 * Signature: undefined __thiscall GetTypeName(PackedMesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::GetTypeName() const */

void __thiscall Caver::Proto::PackedMesh::GetTypeName(PackedMesh *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
                    /* try { // try from 0043c6b8 to 0053c6cb has its CatchHandler @ 0043c7e0 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


