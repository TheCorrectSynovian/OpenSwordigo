/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f63fc
 * Function: FUN_005f63fc
 * Signature: undefined FUN_005f63fc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_005f63fc(long param_1,double *param_2,double *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  char *__s1;
  char *__s2;
  double dVar10;
  size_t sVar11;
  double dVar12;
  size_t sVar13;
  
                    /* try { // try from 005f640c to 006f6417 has its CatchHandler @ 005f6e18 */
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 != *(int *)(param_3 + 1)) {
LAB_005f6580:
    uVar3 = FUN_005eb684(param_1,param_2,param_3);
    return uVar3;
  }
  if (iVar2 == 4) {
    dVar12 = *param_2;
    dVar10 = *param_3;
    __s1 = (char *)((long)dVar12 + 0x18);
    __s2 = (char *)((long)dVar10 + 0x18);
                    /* try { // try from 005f6464 to 006f646b has its CatchHandler @ 005f719c */
    uVar1 = strcoll(__s1,__s2);
    if (uVar1 == 0) {
      sVar11 = *(size_t *)((long)dVar10 + 0x10);
      sVar13 = *(size_t *)((long)dVar12 + 0x10);
      do {
        sVar6 = strlen(__s1);
        if (sVar6 == sVar11) {
          uVar1 = 0;
          break;
        }
        if (sVar6 == sVar13) {
          uVar1 = 0xffffffff;
          break;
        }
        lVar8 = sVar6 + 1;
                    /* try { // try from 005f65c0 to 006f65c3 has its CatchHandler @ 005f6e30 */
        __s1 = __s1 + lVar8;
        __s2 = __s2 + lVar8;
        sVar13 = sVar13 - lVar8;
        sVar11 = sVar11 - lVar8;
        uVar1 = strcoll(__s1,__s2);
      } while (uVar1 == 0);
    }
    uVar3 = (ulong)(uVar1 >> 0x1f);
  }
  else {
                    /* try { // try from 005f6430 to 006f6437 has its CatchHandler @ 005f71f0 */
    if (iVar2 != 3) {
                    /* try { // try from 005f648c to 006f64b3 has its CatchHandler @ 005f6f60 */
      puVar4 = (undefined8 *)FUN_005f4ed4(param_1,param_2,0xd);
      if (*(int *)(puVar4 + 1) != 0) {
        uVar5 = FUN_005f4ed4(param_1,param_3,0xd);
                    /* try { // try from 005f64b4 to 006f64bb has its CatchHandler @ 005f7198 */
        iVar2 = FUN_005eee84(puVar4,uVar5);
        if (iVar2 != 0) {
                    /* try { // try from 005f64bc to 006f64cf has its CatchHandler @ 005f7194 */
          puVar7 = *(undefined8 **)(param_1 + 0x10);
          lVar9 = *(long *)(param_1 + 0x40);
          *puVar7 = *puVar4;
                    /* try { // try from 005f64d0 to 006f64e3 has its CatchHandler @ 005f7378 */
          *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
          lVar8 = *(long *)(param_1 + 0x10);
          *(double *)(lVar8 + 0x10) = *param_2;
          *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(param_2 + 1);
                    /* try { // try from 005f64e8 to 006f64f7 has its CatchHandler @ 005f74c8 */
          lVar8 = *(long *)(param_1 + 0x10);
          *(double *)(lVar8 + 0x20) = *param_3;
          *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(param_3 + 1);
          lVar8 = *(long *)(param_1 + 0x10);
          if (*(long *)(param_1 + 0x38) - lVar8 < 0x31) {
            FUN_005ebbb8(param_1,3);
            lVar8 = *(long *)(param_1 + 0x10);
          }
                    /* try { // try from 005f6530 to 006f6557 has its CatchHandler @ 005f6f0c */
          *(long *)(param_1 + 0x10) = lVar8 + 0x30;
          FUN_005ec63c(param_1,lVar8,1);
          lVar8 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar8 + -0x10;
          puVar7 = (undefined8 *)((long)puVar7 + (*(long *)(param_1 + 0x40) - lVar9));
          *puVar7 = *(undefined8 *)(lVar8 + -0x10);
          *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(lVar8 + -8);
          iVar2 = (*(int **)(param_1 + 0x10))[2];
          if (iVar2 != 0) {
            if (iVar2 == 1) {
                    /* try { // try from 005f6578 to 006f659f has its CatchHandler @ 005f74c8 */
              return (ulong)(**(int **)(param_1 + 0x10) != 0);
            }
            return 1;
          }
          return 0;
        }
      }
      goto LAB_005f6580;
    }
    uVar3 = (ulong)(*param_2 < *param_3);
  }
  return uVar3;
}


