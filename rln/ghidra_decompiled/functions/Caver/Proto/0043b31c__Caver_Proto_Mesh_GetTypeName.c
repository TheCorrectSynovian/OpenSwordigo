/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043b31c
 * Function: Caver::Proto::Mesh::GetTypeName
 * Signature: undefined __thiscall GetTypeName(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Mesh::GetTypeName() const */

void __thiscall Caver::Proto::Mesh::GetTypeName(Mesh *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0043b31c to 0053b403 has its CatchHandler @ 0043b080 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


