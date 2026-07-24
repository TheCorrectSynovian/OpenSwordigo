/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006186a8
 * Function: PVRTTextureTile
 * Signature: undefined __cdecl PVRTTextureTile(PVR_Texture_Header * * param_1, PVR_Texture_Header * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTextureTile(PVR_Texture_Header**, PVR_Texture_Header const*, int) */

void PVRTTextureTile(PVR_Texture_Header **param_1,PVR_Texture_Header *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  PVR_Texture_Header *pPVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  PVR_Texture_Header *pPVar12;
  PVR_Texture_Header *pPVar13;
  uint uVar14;
  undefined8 uVar15;
  
                    /* try { // try from 006186c8 to 007186cf has its CatchHandler @ 00618d44 */
  uVar9 = (byte)param_2[0x10] - 0x11;
  if (uVar9 < 9) {
    uVar4 = -((ulong)(uVar9 >> 7) & 1) & 0xfffffffffffffc00 | ((ulong)uVar9 & 0xff) << 2;
                    /* try { // try from 006186f0 to 00718717 has its CatchHandler @ 00618b30 */
    uVar9 = *(uint *)(&DAT_0069c010 + uVar4);
    uVar8 = *(uint *)(&DAT_0069c040 + uVar4);
    uVar5 = *(uint *)(&DAT_0069c070 + uVar4);
  }
  else {
    uVar9 = 0;
    uVar8 = 0;
    uVar5 = 0xffffffff;
  }
                    /* try { // try from 0061871c to 0071872f has its CatchHandler @ 00618d40 */
  uVar2 = *(int *)(param_2 + 8) * param_3;
  pPVar3 = (PVR_Texture_Header *)PVRTTextureCreate(uVar2,uVar2,uVar9,uVar8,uVar5,true);
                    /* try { // try from 0061873c to 0071874b has its CatchHandler @ 00618ce4 */
  uVar15 = *(undefined8 *)param_2;
  uVar7 = 0;
  *(undefined8 *)(pPVar3 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)pPVar3 = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(pPVar3 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(pPVar3 + 0x10) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(pPVar3 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(pPVar3 + 0x20) = uVar15;
  *(undefined4 *)(pPVar3 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  if (1 < uVar2) {
    pPVar12 = param_2 + 0x34;
                    /* try { // try from 00618778 to 007187ab has its CatchHandler @ 00619000 */
    pPVar13 = pPVar3 + 0x34;
    uVar5 = uVar8 * uVar9 * uVar5 >> 3;
    do {
      uVar1 = uVar2 >> (ulong)(uVar7 & 0x1f);
      if (uVar1 < uVar9) {
        uVar14 = 1;
        if (uVar1 < uVar8) goto LAB_006187b0;
LAB_0061879c:
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar1 / uVar8;
        }
      }
      else {
        uVar14 = 0;
        if (uVar9 != 0) {
          uVar14 = uVar1 / uVar9;
        }
        if (uVar8 <= uVar1) goto LAB_0061879c;
LAB_006187b0:
        uVar6 = 1;
      }
                    /* try { // try from 006187b4 to 007187c3 has its CatchHandler @ 00618c88 */
      uVar1 = *(uint *)(param_2 + 8) >> (ulong)(uVar7 & 0x1f);
      if (uVar1 < uVar9) {
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar1 / uVar9;
        }
      }
                    /* try { // try from 006187d4 to 007187db has its CatchHandler @ 00618e7c */
      uVar1 = *(uint *)(param_2 + 4) >> (ulong)(uVar7 & 0x1f);
                    /* try { // try from 006187dc to 007187ef has its CatchHandler @ 00618c84 */
      if (uVar1 < uVar8) {
        uVar10 = 1;
      }
      else {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar1 / uVar8;
        }
      }
                    /* try { // try from 006187f0 to 00718803 has its CatchHandler @ 00618c4c */
      PVRTTextureLoadTiled
                ((uchar *)pPVar13,uVar14,uVar6,(uchar *)pPVar12,uVar11,uVar10,uVar5,
                 (bool)((byte)(*(uint *)(param_2 + 0x10) >> 9) & 1));
                    /* try { // try from 00618814 to 0071881f has its CatchHandler @ 0061906c */
                    /* try { // try from 00618820 to 00718827 has its CatchHandler @ 00618c34 */
      uVar7 = uVar7 + 1;
                    /* try { // try from 00618828 to 00718833 has its CatchHandler @ 0061906c */
      pPVar13 = pPVar13 + (int)(uVar14 * uVar5 * uVar6);
                    /* try { // try from 00618838 to 00718843 has its CatchHandler @ 00618be4 */
      pPVar12 = pPVar12 + (int)(uVar11 * uVar5 * uVar10);
    } while ((uint)(1 << (ulong)(uVar7 & 0x1f)) < uVar2);
  }
  *(uint *)(pPVar3 + 4) = uVar2;
  *(uint *)(pPVar3 + 8) = uVar2;
  *(uint *)(pPVar3 + 0xc) = uVar7;
  *param_1 = pPVar3;
  return;
}


