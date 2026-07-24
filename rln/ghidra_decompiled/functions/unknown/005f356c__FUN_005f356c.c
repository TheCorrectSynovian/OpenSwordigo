/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f356c
 * Function: FUN_005f356c
 * Signature: undefined FUN_005f356c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_005f356c(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar5 = param_3 >> 5;
  if (uVar5 < param_3) {
    uVar11 = param_3 & 0xffffffff;
    uVar7 = param_3;
    do {
      lVar6 = uVar7 - 1;
                    /* try { // try from 005f35a8 to 006f35af has its CatchHandler @ 005f3958 */
      uVar10 = (uint)uVar11;
      uVar7 = uVar7 + ~uVar5;
      uVar10 = uVar10 * 0x20 + (uVar10 >> 2) + (uint)*(byte *)((long)param_2 + lVar6) ^ uVar10;
      uVar11 = (ulong)uVar10;
    } while (uVar5 < uVar7);
  }
  else {
    uVar10 = (uint)param_3;
  }
  plVar9 = *(long **)(param_1 + 0x20);
  plVar8 = *(long **)(*plVar9 + (long)(int)(*(int *)((long)plVar9 + 0xc) - 1U & uVar10) * 8);
  while( true ) {
    if (plVar8 == (long *)0x0) {
      if (0xffffffffffffffe5 < param_3 + 1) {
        FUN_005eede0(param_1);
      }
                    /* try { // try from 005f3634 to 006f365b has its CatchHandler @ 005f3954 */
      puVar4 = (undefined8 *)FUN_005eed74(param_1,0,0,param_3 + 0x19);
      puVar4[2] = param_3;
      *(uint *)((long)puVar4 + 0xc) = uVar10;
      bVar2 = *(byte *)(*(long *)(param_1 + 0x20) + 0x20);
                    /* try { // try from 005f365c to 006f36df has its CatchHandler @ 005f3374 */
      *(undefined1 *)(puVar4 + 1) = 4;
      *(undefined1 *)((long)puVar4 + 10) = 0;
      *(byte *)((long)puVar4 + 9) = bVar2 & 3;
      memcpy(puVar4 + 3,param_2,param_3);
      *(undefined1 *)((long)(puVar4 + 3) + param_3) = 0;
      plVar8 = *(long **)(param_1 + 0x20);
      lVar6 = (ulong)(*(int *)((long)plVar8 + 0xc) - 1U & uVar10) * 8;
      *puVar4 = *(undefined8 *)(*plVar8 + lVar6);
      *(undefined8 **)(*plVar8 + lVar6) = puVar4;
      uVar1 = *(uint *)((long)plVar8 + 0xc);
      uVar10 = (int)plVar8[1] + 1;
      *(uint *)(plVar8 + 1) = uVar10;
      if ((uVar1 < uVar10) && ((int)uVar1 < 0x3fffffff)) {
        FUN_005f3464(param_1,uVar1 << 1);
      }
                    /* try { // try from 005f36f4 to 006f36ff has its CatchHandler @ 005f38e0 */
                    /* try { // try from 005f3700 to 006f3987 has its CatchHandler @ 005f3374 */
      return puVar4;
    }
                    /* try { // try from 005f35ec to 006f3613 has its CatchHandler @ 005f3958 */
    if ((plVar8[2] == param_3) && (iVar3 = memcmp(param_2,plVar8 + 3,param_3), iVar3 == 0)) break;
    plVar8 = (long *)*plVar8;
  }
                    /* try { // try from 005f36e0 to 006f36f3 has its CatchHandler @ 005f3950 */
  if ((*(byte *)((long)plVar8 + 9) & (*(byte *)(plVar9 + 4) ^ 0xff) & 3) == 0) {
    return plVar8;
  }
  *(byte *)((long)plVar8 + 9) = *(byte *)((long)plVar8 + 9) ^ 3;
  return plVar8;
}


