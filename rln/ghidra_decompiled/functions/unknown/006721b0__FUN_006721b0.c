/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006721b0
 * Function: FUN_006721b0
 * Signature: undefined FUN_006721b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_006721b0(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'S') {
    return 0;
  }
                    /* catch() { ... } // from try @ 00672158 with catch @ 006721cc */
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  if (pcVar7[1] != '\0') {
    *(char **)(param_1 + 0x18) = pcVar7 + 2;
    bVar3 = pcVar7[1];
    uVar6 = (uint)bVar3;
    uVar14 = bVar3 - 0x30;
                    /* try { // try from 006721f0 to 00772217 has its CatchHandler @ 0067221c */
    if (((uVar14 & 0xff) < 10) || (bVar3 == 0x5f)) {
      if (bVar3 == 0x5f) {
        uVar4 = 0;
        goto LAB_006722ec;
      }
    }
    else if (0x19 < (byte)(bVar3 + 0xbf)) goto LAB_0067227c;
    uVar9 = 0;
    do {
                    /* catch() { ... } // from try @ 006721f0 with catch @ 0067221c */
                    /* catch() { ... } // from try @ 00671fc0 with catch @ 00672220
                       catch() { ... } // from try @ 006721a0 with catch @ 00672220 */
                    /* catch() { ... } // from try @ 00671d0c with catch @ 0067222c */
      uVar4 = (uVar9 * 0x24 + uVar6) - 0x37;
                    /* catch() { ... } // from try @ 00671d14 with catch @ 00672234
                       catch() { ... } // from try @ 00671dfc with catch @ 00672234 */
      if ((uVar14 & 0xff) < 10) {
        uVar4 = (uVar9 * 0x24 + uVar6) - 0x30;
      }
      else if (0x19 < (uVar6 - 0x41 & 0xff)) {
        return 0;
      }
      uVar6 = 0;
      if (uVar4 < uVar9) {
        return 0;
      }
      pbVar12 = *(byte **)(param_1 + 0x18);
      if (*pbVar12 != 0) {
        *(byte **)(param_1 + 0x18) = pbVar12 + 1;
        uVar6 = (uint)*pbVar12;
        if (uVar6 == 0x5f) goto LAB_006722e8;
      }
      uVar14 = uVar6 - 0x30;
      uVar9 = uVar4;
                    /* try { // try from 00672274 to 00772277 has its CatchHandler @ 006722d8 */
    } while( true );
  }
                    /* try { // try from 00672278 to 007722fb has its CatchHandler @ 00671ae8 */
  uVar6 = 0;
LAB_0067227c:
  uVar14 = *(uint *)(param_1 + 0x10) >> 3 & 1;
  if (uVar14 < (param_2 != 0)) {
    uVar14 = (uint)((byte)(**(char **)(param_1 + 0x18) + 0xbdU) < 2);
  }
  if (uVar6 == 0x74) {
    puVar8 = &UNK_007b8760;
  }
  else if (uVar6 == 0x61) {
    puVar8 = &UNK_007b8798;
  }
  else if (uVar6 == 0x62) {
    puVar8 = &UNK_007b87d0;
  }
  else if (uVar6 == 0x73) {
    puVar8 = &UNK_007b8808;
  }
  else if (uVar6 == 0x69) {
    puVar8 = &UNK_007b8840;
  }
  else if (uVar6 == 0x6f) {
    puVar8 = &UNK_007b8878;
  }
  else {
    if (uVar6 != 100) {
      return 0;
    }
    puVar8 = &UNK_007b88b0;
                    /* catch() { ... } // from try @ 00672274 with catch @ 006722d8 */
  }
  lVar5 = *(long *)(puVar8 + 0x28);
  if (lVar5 == 0) {
    iVar15 = *(int *)(param_1 + 0x2c);
    iVar10 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x28);
    iVar15 = *(int *)(param_1 + 0x2c);
                    /* try { // try from 00672358 to 0077246f has its CatchHandler @ 00672358
                       catch() { ... } // from try @ 00672358 with catch @ 00672358
                       catch() { ... } // from try @ 0067254c with catch @ 00672358
                       catch() { ... } // from try @ 006725e4 with catch @ 00672358
                       catch() { ... } // from try @ 0067283c with catch @ 00672358 */
    uVar2 = *(undefined4 *)(puVar8 + 0x30);
    lVar17 = 0;
    if (iVar10 < iVar15) {
      lVar13 = (long)iVar10;
      iVar10 = iVar10 + 1;
      *(int *)(param_1 + 0x28) = iVar10;
      lVar1 = *(long *)(param_1 + 0x20) + lVar13 * 0x18;
      if (lVar1 != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar13 * 0x18) = 0x18;
        *(long *)(lVar1 + 8) = lVar5;
        *(undefined4 *)(lVar1 + 0x10) = uVar2;
        lVar17 = lVar1;
      }
    }
    *(long *)(param_1 + 0x48) = lVar17;
  }
  if (uVar14 == 0) {
    uVar16 = *(undefined8 *)(puVar8 + 8);
    iVar11 = *(int *)(puVar8 + 0x10);
  }
  else {
    uVar16 = *(undefined8 *)(puVar8 + 0x18);
    iVar11 = *(int *)(puVar8 + 0x20);
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar11;
  if (iVar15 <= iVar10) {
    return 0;
  }
  *(int *)(param_1 + 0x28) = iVar10 + 1;
  lVar5 = *(long *)(param_1 + 0x20) + (long)iVar10 * 0x18;
  if (lVar5 != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x18;
    *(undefined8 *)(lVar5 + 8) = uVar16;
    *(int *)(lVar5 + 0x10) = iVar11;
    return lVar5;
  }
  return 0;
LAB_006722e8:
  uVar4 = uVar4 + 1;
LAB_006722ec:
  if (*(uint *)(param_1 + 0x38) <= uVar4) {
    return 0;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + (ulong)uVar4 * 8);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return lVar5;
}


