/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f3464
 * Function: FUN_005f3464
 * Signature: undefined FUN_005f3464(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f3464(long param_1,uint param_2)

{
  uint uVar1;
  void *__s;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x21) != '\x02') {
    if ((int)param_2 < -1) {
                    /* try { // try from 005f34d4 to 006f34df has its CatchHandler @ 005f3b70 */
      __s = (void *)FUN_005eede0(param_1);
      plVar8 = *(long **)(param_1 + 0x20);
    }
    else {
      __s = (void *)FUN_005eed74(param_1,0,0,
                                 -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 |
                                 (ulong)param_2 << 3);
      plVar8 = *(long **)(param_1 + 0x20);
      if (0 < (int)param_2) {
                    /* try { // try from 005f34c0 to 006f34d3 has its CatchHandler @ 005f3bd0 */
        memset(__s,0,(ulong)param_2 << 3);
      }
    }
                    /* try { // try from 005f34e0 to 006f34f3 has its CatchHandler @ 005f3b0c */
    iVar3 = *(int *)((long)plVar8 + 0xc);
    if (iVar3 < 1) {
      lVar6 = (long)iVar3;
    }
    else {
      lVar2 = 0;
      do {
                    /* try { // try from 005f34f4 to 006f34ff has its CatchHandler @ 005f3acc */
        puVar5 = *(undefined8 **)(*plVar8 + lVar2 * 8);
        if (puVar5 != (undefined8 *)0x0) {
          do {
            puVar7 = (undefined8 *)*puVar5;
            uVar1 = *(uint *)((long)puVar5 + 0xc) & param_2 - 1;
            uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
            *puVar5 = *(undefined8 *)((long)__s + uVar4);
            *(undefined8 **)((long)__s + uVar4) = puVar5;
            puVar5 = puVar7;
          } while (puVar7 != (undefined8 *)0x0);
          iVar3 = *(int *)((long)plVar8 + 0xc);
        }
        lVar2 = lVar2 + 1;
        lVar6 = (long)iVar3;
      } while (lVar2 < lVar6);
    }
                    /* try { // try from 005f3540 to 006f3553 has its CatchHandler @ 005f3ac0 */
    FUN_005eed74(param_1,*plVar8,lVar6 << 3,0);
                    /* try { // try from 005f3554 to 006f3567 has its CatchHandler @ 005f3a5c */
    *(uint *)((long)plVar8 + 0xc) = param_2;
    *plVar8 = (long)__s;
  }
                    /* try { // try from 005f3568 to 006f3583 has its CatchHandler @ 005f3a00 */
  return;
}


