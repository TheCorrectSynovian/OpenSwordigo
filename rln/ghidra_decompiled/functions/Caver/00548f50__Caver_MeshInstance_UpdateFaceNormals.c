/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00548f50
 * Function: Caver::MeshInstance::UpdateFaceNormals
 * Signature: undefined __thiscall UpdateFaceNormals(MeshInstance * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshInstance::UpdateFaceNormals() */

void __thiscall Caver::MeshInstance::UpdateFaceNormals(MeshInstance *this)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  undefined1 auVar5 [16];
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  Mesh *this_00;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_54;
  int iStack_50;
  int local_4c;
  long local_48;
  
                    /* try { // try from 00548f5c to 00648f6f has its CatchHandler @ 00549534 */
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 00548f70 to 00648f7b has its CatchHandler @ 005494dc */
  this_00 = *(Mesh **)this;
  if (*(long *)(this + 0xb8) == 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (long)*(int *)(this_00 + 4);
    uVar8 = (long)*(int *)(this_00 + 4) * 0xc;
                    /* try { // try from 00548f9c to 00648f9f has its CatchHandler @ 00549534 */
    if (SUB168(auVar5 * ZEXT816(0xc),8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    pvVar7 = operator_new__(uVar8);
    *(void **)(this + 0xb8) = pvVar7;
  }
  if (0 < *(int *)(this_00 + 4)) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      Mesh::GetVertexIndicesForFace(this_00,(int)lVar10,&local_54);
      iVar4 = *(int *)(this + 0x20);
                    /* try { // try from 00548fd8 to 00648fff has its CatchHandler @ 005495ec */
      lVar9 = *(long *)(this + 0x28);
      lVar10 = lVar10 + 1;
      pfVar1 = (float *)(lVar9 + (ulong)(uint)(iVar4 * local_54));
      pfVar2 = (float *)(lVar9 + (ulong)(uint)(iStack_50 * iVar4));
      pfVar3 = (float *)(lVar9 + (ulong)(uint)(local_4c * iVar4));
                    /* try { // try from 00549014 to 00649027 has its CatchHandler @ 005494d8 */
      fVar15 = *pfVar2 - *pfVar1;
      fVar16 = pfVar2[1] - pfVar1[1];
      fVar17 = pfVar2[2] - pfVar1[2];
      fVar12 = *pfVar3 - *pfVar1;
      fVar13 = pfVar3[1] - pfVar1[1];
                    /* try { // try from 00549028 to 00649033 has its CatchHandler @ 00549470 */
      fVar14 = pfVar3[2] - pfVar1[2];
                    /* try { // try from 00549034 to 006490f3 has its CatchHandler @ 00548e94 */
      pfVar1 = (float *)(*(long *)(this + 0xb8) + lVar11);
      *pfVar1 = fVar16 * fVar14 - fVar17 * fVar13;
      pfVar1[1] = fVar17 * fVar12 - fVar15 * fVar14;
      pfVar1[2] = fVar15 * fVar13 - fVar16 * fVar12;
      this_00 = *(Mesh **)this;
      lVar11 = lVar11 + 0xc;
    } while (lVar10 < *(int *)(this_00 + 4));
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


