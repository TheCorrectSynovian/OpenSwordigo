/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060e188
 * Function: PVRTModelPODCountIndices
 * Signature: undefined __cdecl PVRTModelPODCountIndices(SPODMesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODCountIndices(SPODMesh const&) */

int PVRTModelPODCountIndices(SPODMesh *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar5 = (ulong)uVar2;
  if (uVar2 == 0) {
    return *(int *)(param_1 + 4) * 3;
  }
  if (uVar2 < 8) {
    uVar8 = 0;
    iVar11 = 0;
  }
  else {
    uVar8 = uVar5 & 0xfffffff8;
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
                    /* try { // try from 0060e1bc to 0070e1e3 has its CatchHandler @ 0060e234 */
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    uVar10 = uVar8;
    do {
      puVar1 = puVar9 + -2;
      puVar3 = puVar9 + -1;
      puVar4 = puVar9 + 1;
      uVar19 = *puVar9;
      uVar10 = uVar10 - 8;
      puVar9 = puVar9 + 4;
      iVar11 = iVar11 + (int)*puVar1 + 2;
      iVar12 = iVar12 + (int)((ulong)*puVar1 >> 0x20) + 2;
      iVar13 = iVar13 + (int)*puVar3 + 2;
      iVar14 = iVar14 + (int)((ulong)*puVar3 >> 0x20) + 2;
                    /* try { // try from 0060e1e4 to 0070e253 has its CatchHandler @ 0060e0f4 */
      iVar15 = iVar15 + (int)uVar19 + 2;
      iVar16 = iVar16 + (int)((ulong)uVar19 >> 0x20) + 2;
      iVar17 = iVar17 + (int)*puVar4 + 2;
      iVar18 = iVar18 + (int)((ulong)*puVar4 >> 0x20) + 2;
    } while (uVar10 != 0);
    iVar11 = iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13 + iVar18 + iVar14;
    if (uVar8 == uVar5) {
      return iVar11;
    }
  }
  lVar6 = uVar5 - uVar8;
  piVar7 = (int *)(*(long *)(param_1 + 0x28) + uVar8 * 4);
  do {
    lVar6 = lVar6 + -1;
    iVar11 = iVar11 + *piVar7 + 2;
    piVar7 = piVar7 + 1;
  } while (lVar6 != 0);
  return iVar11;
}


