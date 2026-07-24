/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005468b8
 * Function: Caver::MeshBuilder::CopyDataFromMesh
 * Signature: undefined __thiscall CopyDataFromMesh(MeshBuilder * this, float * param_1, int param_2, MeshData * param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::CopyDataFromMesh(float*, int, Caver::MeshData const*, int) */

void __thiscall
Caver::MeshBuilder::CopyDataFromMesh
          (MeshBuilder *this,float *param_1,int param_2,MeshData *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
                    /* try { // try from 005468b8 to 006468cb has its CatchHandler @ 00546a54 */
  if (0 < param_4) {
    pfVar6 = *(float **)(param_3 + 0x10);
    iVar3 = *(int *)param_3;
    lVar5 = 0;
                    /* try { // try from 005468cc to 00646ae3 has its CatchHandler @ 00546870 */
    pfVar7 = param_1;
    do {
      if (iVar3 == 0x1406) {
        uVar4 = *(uint *)(param_3 + 4);
        uVar8 = (ulong)(int)uVar4;
        if (0 < (int)uVar4) {
          if (uVar4 < 8) {
            uVar10 = 0;
          }
          else {
            pfVar9 = (float *)((long)param_1 + lVar5 * param_2);
            if ((pfVar9 < pfVar6 + uVar8) && (pfVar6 < pfVar9 + uVar8)) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar8 & 0xfffffffffffffff8;
              lVar11 = 0;
              uVar12 = uVar10;
              do {
                puVar1 = (undefined8 *)((long)pfVar6 + lVar11);
                uVar13 = *puVar1;
                uVar15 = puVar1[3];
                uVar14 = puVar1[2];
                puVar2 = (undefined8 *)((long)pfVar7 + lVar11);
                uVar12 = uVar12 - 8;
                lVar11 = lVar11 + 0x20;
                puVar2[1] = puVar1[1];
                *puVar2 = uVar13;
                puVar2[3] = uVar15;
                puVar2[2] = uVar14;
              } while (uVar12 != 0);
              if (uVar10 == uVar8) goto LAB_0054696c;
            }
          }
          do {
            uVar12 = uVar10 + 1;
            pfVar7[uVar10] = pfVar6[uVar10];
            uVar10 = uVar12;
          } while ((long)uVar12 < (long)uVar8);
        }
      }
LAB_0054696c:
      lVar5 = lVar5 + 1;
      pfVar7 = (float *)((long)pfVar7 + (long)param_2);
      pfVar6 = (float *)((long)pfVar6 + (ulong)*(uint *)(param_3 + 8));
    } while ((int)lVar5 != param_4);
  }
  return;
}


