/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eefd8
 * Function: FUN_005eefd8
 * Signature: undefined FUN_005eefd8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005eefd8(long param_1,char *param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  char local_90;
  char local_8f;
  undefined1 local_8e;
  long local_68;
  
                    /* catch() { ... } // from try @ 005eecd8 with catch @ 005eefd8 */
                    /* try { // try from 005eeff8 to 006ef01f has its CatchHandler @ 005ef028 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar10 = *(undefined8 **)(param_1 + 0x10);
                    /* try { // try from 005ef020 to 006ef02b has its CatchHandler @ 005eec7c */
  uVar3 = FUN_005f356c(param_1,&DAT_0068fbeb,0);
                    /* catch() { ... } // from try @ 005eef50 with catch @ 005ef028
                       catch() { ... } // from try @ 005eeff8 with catch @ 005ef028 */
  *puVar10 = uVar3;
                    /* catch() { ... } // from try @ 005ef0dc with catch @ 005ef02c */
  *(undefined4 *)(puVar10 + 1) = 4;
  lVar7 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x38) - lVar7 < 0x11) {
                    /* try { // try from 005ef044 to 006ef04b has its CatchHandler @ 005ef0e8 */
    FUN_005ebbb8(param_1,1);
    lVar7 = *(long *)(param_1 + 0x10);
  }
  puVar10 = (undefined8 *)(lVar7 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar10;
  pcVar4 = strchr(param_2,0x25);
  iVar11 = 1;
  do {
    if (pcVar4 == (char *)0x0) {
      sVar6 = strlen(param_2);
      uVar3 = FUN_005f356c(param_1,param_2,sVar6);
      *puVar10 = uVar3;
      *(undefined4 *)(puVar10 + 1) = 4;
      lVar7 = *(long *)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x38) - lVar7 < 0x11) {
        FUN_005ebbb8(param_1,1);
        lVar7 = *(long *)(param_1 + 0x10);
      }
      *(long *)(param_1 + 0x10) = lVar7 + 0x10;
      FUN_005f67ec(param_1,iVar11 + 1,
                   (int)((ulong)((lVar7 + 0x10) - *(long *)(param_1 + 0x18)) >> 4) + -1);
      lVar7 = *(long *)(param_1 + 0x10) + (long)iVar11 * -0x10;
      *(long *)(param_1 + 0x10) = lVar7;
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return *(long *)(lVar7 + -0x10) + 0x18;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar3 = FUN_005f356c(param_1,param_2,(long)pcVar4 - (long)param_2);
    *puVar10 = uVar3;
    *(undefined4 *)(puVar10 + 1) = 4;
                    /* try { // try from 005ef0dc to 006ef0f7 has its CatchHandler @ 005ef02c */
    lVar7 = *(long *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 005ef0b4 with catch @ 005ef0e4 */
                    /* catch() { ... } // from try @ 005ef044 with catch @ 005ef0e8 */
    if (*(long *)(param_1 + 0x38) - lVar7 < 0x11) {
                    /* try { // try from 005ef0f8 to 006ef103 has its CatchHandler @ 005ef104 */
      FUN_005ebbb8(param_1,1);
      lVar7 = *(long *)(param_1 + 0x10);
    }
                    /* catch() { ... } // from try @ 005ef0f8 with catch @ 005ef104 */
    *(long *)(param_1 + 0x10) = lVar7 + 0x10;
                    /* try { // try from 005ef108 to 006ef10b has its CatchHandler @ 005ef110 */
    cVar1 = pcVar4[1];
                    /* catch() { ... } // from try @ 005ef108 with catch @ 005ef110 */
    switch((int)cVar1) {
    case 99:
      iVar13 = (int)param_3[3];
      if ((iVar13 < 0) && (*(int *)(param_3 + 3) = iVar13 + 8, iVar13 + 8 < 1)) {
        puVar8 = (undefined4 *)(param_3[1] + (long)iVar13);
                    /* catch() { ... } // from try @ 005ef078 with catch @ 005ef090 */
      }
      else {
        puVar8 = (undefined4 *)*param_3;
        *param_3 = (long)(puVar8 + 2);
      }
      local_8f = '\0';
      local_90 = (char)*puVar8;
      goto LAB_005ef2b4;
    case 100:
      iVar13 = (int)param_3[3];
      if ((iVar13 < 0) && (*(int *)(param_3 + 3) = iVar13 + 8, iVar13 + 8 < 1)) {
        piVar9 = (int *)(param_3[1] + (long)iVar13);
                    /* try { // try from 005ef0b4 to 006ef0db has its CatchHandler @ 005ef0e4 */
      }
      else {
        piVar9 = (int *)*param_3;
        *param_3 = (long)(piVar9 + 2);
      }
      iVar13 = *piVar9;
      *(undefined4 *)(lVar7 + 0x18) = 3;
      *(double *)(lVar7 + 0x10) = (double)(long)iVar13;
      break;
    case 0x65:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x71:
    case 0x72:
switchD_005ef120_caseD_65:
      local_90 = '%';
      local_8e = 0;
      local_8f = cVar1;
      sVar6 = strlen(&local_90);
      pcVar5 = &local_90;
      goto LAB_005ef19c;
    case 0x66:
      iVar13 = *(int *)((long)param_3 + 0x1c);
      if ((iVar13 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar13 + 0x10, iVar13 + 0x10 < 1)) {
        puVar10 = (undefined8 *)(param_3[2] + (long)iVar13);
      }
      else {
        puVar10 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar10 + 1);
      }
      uVar3 = *puVar10;
      *(undefined4 *)(lVar7 + 0x18) = 3;
      *(undefined8 *)(lVar7 + 0x10) = uVar3;
      break;
    case 0x70:
      iVar13 = (int)param_3[3];
      if ((iVar13 < 0) && (*(int *)(param_3 + 3) = iVar13 + 8, iVar13 + 8 < 1)) {
        puVar10 = (undefined8 *)(param_3[1] + (long)iVar13);
      }
      else {
        puVar10 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar10 + 1);
      }
      sprintf(&local_90,"%p",*puVar10);
LAB_005ef2b4:
      puVar10 = *(undefined8 **)(param_1 + 0x10);
      sVar6 = strlen(&local_90);
      uVar3 = FUN_005f356c(param_1,&local_90,sVar6);
      *puVar10 = uVar3;
      *(undefined4 *)(puVar10 + 1) = 4;
      break;
    case 0x73:
      iVar13 = (int)param_3[3];
      if ((iVar13 < 0) && (*(int *)(param_3 + 3) = iVar13 + 8, iVar13 + 8 < 1)) {
        puVar10 = (undefined8 *)(param_3[1] + (long)iVar13);
      }
      else {
        puVar10 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar10 + 1);
      }
      puVar12 = *(undefined8 **)(param_1 + 0x10);
      pcVar5 = "(null)";
      if ((char *)*puVar10 != (char *)0x0) {
        pcVar5 = (char *)*puVar10;
      }
      sVar6 = strlen(pcVar5);
      uVar3 = FUN_005f356c(param_1,pcVar5,sVar6);
      *puVar12 = uVar3;
      *(undefined4 *)(puVar12 + 1) = 4;
      break;
    default:
      if (cVar1 != 0x25) goto switchD_005ef120_caseD_65;
      sVar6 = 1;
      pcVar5 = &DAT_00690c08;
LAB_005ef19c:
      uVar3 = FUN_005f356c(param_1,pcVar5,sVar6);
      *(undefined8 *)(lVar7 + 0x10) = uVar3;
      *(undefined4 *)(lVar7 + 0x18) = 4;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x38) - lVar7 < 0x11) {
      FUN_005ebbb8(param_1,1);
      lVar7 = *(long *)(param_1 + 0x10);
    }
    param_2 = pcVar4 + 2;
    puVar10 = (undefined8 *)(lVar7 + 0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar10;
    iVar11 = iVar11 + 2;
    pcVar4 = strchr(param_2,0x25);
  } while( true );
}


