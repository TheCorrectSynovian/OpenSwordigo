/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043907c
 * Function: Caver::Proto::MeshMaterial::GetTypeName
 * Signature: undefined __thiscall GetTypeName(MeshMaterial * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::GetTypeName() const */

void __thiscall Caver::Proto::MeshMaterial::GetTypeName(MeshMaterial *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
                    /* try { // try from 004390ac to 005390b3 has its CatchHandler @ 00439478 */
                    /* try { // try from 004390b4 to 00539143 has its CatchHandler @ 00438f7c */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


