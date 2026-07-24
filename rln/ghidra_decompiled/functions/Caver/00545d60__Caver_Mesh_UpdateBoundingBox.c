/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00545d60
 * Function: Caver::Mesh::UpdateBoundingBox
 * Signature: undefined __thiscall UpdateBoundingBox(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Mesh::UpdateBoundingBox() */

void __thiscall Caver::Mesh::UpdateBoundingBox(Mesh *this)

{
  Box *this_00;
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  uVar4 = _DAT_00694f30;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00545ce8 with catch @ 00545d80 */
                    /* catch() { ... } // from try @ 00545cc0 with catch @ 00545d90 */
  if ((*(long *)(this + 0x110) == 0) || (iVar2 = *(int *)(this + 0x24), iVar2 < 1)) {
    *(undefined8 *)(this + 0x14c) = 0;
    *(undefined8 *)(this + 0x144) = 0;
    *(undefined8 *)(this + 0x154) = 0;
  }
  else {
    this_00 = (Box *)(this + 0x144);
    *(undefined8 *)(this + 0x14c) = _UNK_00694f38;
    *(undefined8 *)this_00 = uVar4;
                    /* try { // try from 00545db4 to 00645e23 has its CatchHandler @ 00545e2c */
    *(undefined8 *)(this + 0x154) = 0xff7fffffff7fffff;
    if (iVar2 < 3) {
                    /* catch() { ... } // from try @ 00545ef4 with catch @ 00545e44 */
      if ((iVar2 == 2) && (*(int *)this != 0)) {
        uVar5 = 0;
        do {
                    /* try { // try from 00545e5c to 00645e63 has its CatchHandler @ 00545f00 */
          local_48 = *(undefined8 *)
                      (*(long *)(this + 0x30) + (ulong)(*(int *)(this + 0x28) * uVar5));
          local_40 = 0;
          Box::ExpandToIncludePoint(this_00,(Vector3 *)&local_48);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)this);
      }
    }
    else if (*(int *)this != 0) {
      uVar5 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(this + 0x30) + (ulong)(*(int *)(this + 0x28) * uVar5));
        local_48 = *puVar1;
        local_40 = *(undefined4 *)(puVar1 + 1);
        Box::ExpandToIncludePoint(this_00,(Vector3 *)&local_48);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)this);
    }
  }
                    /* try { // try from 00545e24 to 00645e43 has its CatchHandler @ 00545c38 */
                    /* catch() { ... } // from try @ 00545db4 with catch @ 00545e2c */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00545e90 to 00645e9b has its CatchHandler @ 00545ea8 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00545c74 with catch @ 00545e30 */
  return;
}


