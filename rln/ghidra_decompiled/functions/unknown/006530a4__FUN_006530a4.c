/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006530a4
 * Function: FUN_006530a4
 * Signature: undefined FUN_006530a4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006530a4(long param_1,wchar_t param_2,wchar_t *param_3,wchar_t *param_4,long param_5,
                 size_t param_6)

{
  uint uVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  long *plVar4;
  wchar_t *__s;
  size_t __n;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 006530b4 to 007530bb has its CatchHandler @ 006532a4 */
                    /* try { // try from 006530bc to 007530d7 has its CatchHandler @ 006532d0 */
  uVar1 = *(uint *)(param_1 + 0x18) & 0xb0;
  __n = param_5 - param_6;
  if (uVar1 == 0x20) {
    wmemcpy(param_3,param_4,param_6);
    wmemset(param_3 + param_6,param_2,__n);
    return;
  }
                    /* try { // try from 006530d8 to 007530e7 has its CatchHandler @ 00652fc0 */
  if (uVar1 != 0x10) goto LAB_006530e0;
  plVar4 = (long *)FUN_0064f6ac(param_1 + 0xd0);
  wVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,0x2d);
                    /* try { // try from 00653154 to 00753167 has its CatchHandler @ 006532d4 */
  wVar3 = *param_4;
  if (wVar3 != wVar2) {
    wVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,0x2b);
    wVar3 = *param_4;
    if (wVar3 != wVar2) {
                    /* try { // try from 0065318c to 007531bb has its CatchHandler @ 006532c4 */
      wVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,0x30);
      if ((*param_4 == wVar3) && (1 < (long)param_6)) {
        wVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,0x78);
                    /* try { // try from 006531dc to 007531f3 has its CatchHandler @ 006532e0 */
        if (param_4[1] != wVar3) {
          wVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,0x58);
          if (param_4[1] != wVar3) goto LAB_006530e0;
        }
                    /* try { // try from 00653218 to 00753223 has its CatchHandler @ 006532ec */
        __s = param_3 + 2;
        lVar6 = 8;
                    /* try { // try from 00653224 to 0075330b has its CatchHandler @ 00652fc0 */
        lVar5 = 2;
        *param_3 = *param_4;
        param_3[1] = param_4[1];
      }
      else {
LAB_006530e0:
        lVar6 = 0;
        lVar5 = 0;
        __s = param_3;
      }
      goto LAB_006530e8;
    }
  }
  __s = param_3 + 1;
  *param_3 = wVar3;
  lVar6 = 4;
  lVar5 = 1;
LAB_006530e8:
                    /* try { // try from 006530e8 to 007530ef has its CatchHandler @ 006532a0 */
  wmemset(__s,param_2,__n);
                    /* try { // try from 00653100 to 0075310b has its CatchHandler @ 006532d0 */
  wmemcpy(__s + __n,(wchar_t *)((long)param_4 + lVar6),param_6 - lVar5);
  return;
}


