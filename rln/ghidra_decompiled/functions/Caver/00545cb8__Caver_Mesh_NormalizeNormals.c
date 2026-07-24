/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00545cb8
 * Function: Caver::Mesh::NormalizeNormals
 * Signature: undefined __thiscall NormalizeNormals(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Mesh::NormalizeNormals() */

void __thiscall Caver::Mesh::NormalizeNormals(Mesh *this)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
                    /* try { // try from 00545cc0 to 00645cc7 has its CatchHandler @ 00545d90 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00545ce8 to 00645d0f has its CatchHandler @ 00545d80 */
  if ((0 < *(int *)(this + 0x3c)) && (*(int *)this != 0)) {
    puVar2 = *(undefined8 **)(this + 0x48);
    uVar3 = 0;
    do {
      local_48 = *puVar2;
      local_40 = *(undefined4 *)(puVar2 + 1);
      Vector3::Normalize((Vector3 *)&local_48);
                    /* try { // try from 00545d10 to 00645db3 has its CatchHandler @ 00545c38 */
      uVar3 = uVar3 + 1;
      *puVar2 = local_48;
      *(undefined4 *)(puVar2 + 1) = local_40;
      puVar2 = (undefined8 *)((long)puVar2 + (ulong)*(uint *)(this + 0x40));
    } while (uVar3 < *(uint *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


