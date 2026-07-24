/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00547498
 * Function: Caver::MeshBuilder::InitWithMeshBuilderFaceSubset
 * Signature: undefined __thiscall InitWithMeshBuilderFaceSubset(MeshBuilder * this, MeshBuilder * param_1, int * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&, int*, int) */

void __thiscall
Caver::MeshBuilder::InitWithMeshBuilderFaceSubset
          (MeshBuilder *this,MeshBuilder *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  void *__s;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  ulong __n;
  ulong uVar11;
  long lVar12;
  Vertex aVStack_140 [72];
  Vertex aVStack_f8 [72];
  Vertex aVStack_b0 [72];
  long local_68;
  
                    /* catch() { ... } // from try @ 0054751c with catch @ 005474ac
                       catch() { ... } // from try @ 005475c0 with catch @ 005474ac */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar10 = (ulong)(uint)param_3;
  InitWithMesh(this,*(Mesh **)param_1,false);
  if (*(int *)(*(long *)this + 0xc) < 1) {
    if (0 < param_3) {
      do {
        memset(aVStack_b0,0,0x44);
        memset(aVStack_f8,0,0x44);
        memset(aVStack_140,0,0x44);
                    /* try { // try from 0054765c to 0064765f has its CatchHandler @ 005476bc */
                    /* try { // try from 00547660 to 006476db has its CatchHandler @ 005475f0 */
        GetFaceAtIndex(param_1,*param_2,aVStack_b0,aVStack_f8,aVStack_140);
        AddVertex(this,aVStack_b0);
        AddVertex(this,aVStack_f8);
        AddVertex(this,aVStack_140);
        uVar10 = uVar10 - 1;
        param_2 = param_2 + 1;
      } while (uVar10 != 0);
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar11 = (ulong)uVar3;
    __n = (ulong)(int)uVar3;
    uVar7 = __n;
    if ((long)__n < 0) {
      uVar7 = 0xffffffffffffffff;
    }
    __s = operator_new__(uVar7);
    memset(__s,0,__n);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = __n;
                    /* try { // try from 00547518 to 0064751b has its CatchHandler @ 00547578 */
                    /* try { // try from 0054751c to 00647597 has its CatchHandler @ 005474ac */
    uVar7 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2;
    if (SUB168(auVar4 * ZEXT816(4),8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar6 = operator_new__(uVar7);
    if (0 < param_3) {
      lVar8 = *(long *)(param_1 + 0x38);
      piVar9 = param_2;
      do {
        uVar10 = uVar10 - 1;
        lVar12 = lVar8 + (long)(*piVar9 * 3) * 4;
        iVar1 = *(int *)(lVar12 + 4);
        iVar2 = *(int *)(lVar12 + 8);
        *(undefined1 *)((long)__s + (long)*(int *)(lVar8 + (long)*piVar9 * 0xc)) = 1;
        *(undefined1 *)((long)__s + (long)iVar1) = 1;
        *(undefined1 *)((long)__s + (long)iVar2) = 1;
        piVar9 = piVar9 + 1;
      } while (uVar10 != 0);
    }
    if (0 < (int)uVar3) {
                    /* catch() { ... } // from try @ 00547518 with catch @ 00547578 */
      lVar12 = 0;
      lVar8 = 0;
      do {
        if (*(char *)((long)__s + lVar8) != '\0') {
          *(undefined4 *)((long)pvVar6 + lVar8 * 4) = *(undefined4 *)(this + 0x10);
                    /* try { // try from 00547598 to 006475bf has its CatchHandler @ 005475c8 */
          AddVertex(this,(Vertex *)(*(long *)(param_1 + 0x18) + lVar12));
          uVar11 = (ulong)*(uint *)(param_1 + 0x10);
        }
        lVar8 = lVar8 + 1;
        lVar12 = lVar12 + 0x44;
      } while (lVar8 < (int)uVar11);
    }
    if (0 < param_3) {
      lVar8 = 0;
                    /* try { // try from 005475c0 to 006475cb has its CatchHandler @ 005474ac */
      do {
                    /* catch() { ... } // from try @ 00547598 with catch @ 005475c8 */
        lVar12 = *(long *)(param_1 + 0x38) + (long)(param_2[lVar8] * 3) * 4;
        AddFace(this,*(int *)((long)pvVar6 +
                             (long)*(int *)(*(long *)(param_1 + 0x38) + (long)param_2[lVar8] * 0xc)
                             * 4),*(int *)((long)pvVar6 + (long)*(int *)(lVar12 + 4) * 4),
                *(int *)((long)pvVar6 + (long)*(int *)(lVar12 + 8) * 4));
                    /* catch() { ... } // from try @ 00547660 with catch @ 005475f0
                       catch() { ... } // from try @ 00547704 with catch @ 005475f0 */
        lVar8 = lVar8 + 1;
      } while (lVar8 < param_3);
    }
    operator_delete__(pvVar6);
    operator_delete__(__s);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0054765c with catch @ 005476bc */
  return;
}


