/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f61e8
 * Function: FUN_005f61e8
 * Signature: undefined FUN_005f61e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f61e8(long param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long local_78;
  int local_70;
  long local_68;
  
                    /* try { // try from 005f61f4 to 006f61fb has its CatchHandler @ 005f7240 */
  lVar1 = tpidr_el0;
                    /* try { // try from 005f621c to 006f6243 has its CatchHandler @ 005f6fb8 */
  local_68 = *(long *)(lVar1 + 0x28);
  iVar5 = (int)param_2[1];
  uVar8 = 0xffffffff;
  do {
    if (iVar5 == 5) {
      lVar7 = *param_2;
                    /* try { // try from 005f6244 to 006f624b has its CatchHandler @ 005f723c */
                    /* try { // try from 005f624c to 006f625f has its CatchHandler @ 005f7238 */
      plVar2 = (long *)FUN_005f4320(param_1,lVar7,param_3);
                    /* try { // try from 005f6260 to 006f6273 has its CatchHandler @ 005f7384 */
                    /* try { // try from 005f6278 to 006f6287 has its CatchHandler @ 005f754c */
      if (((((int)plVar2[1] != 0) || (lVar3 = *(long *)(lVar7 + 0x10), lVar3 == 0)) ||
          ((*(byte *)(lVar3 + 10) >> 1 & 1) != 0)) ||
         (plVar4 = (long *)FUN_005f4e8c(lVar3,1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x130)),
         plVar4 == (long *)0x0)) {
        *plVar2 = *param_4;
        *(int *)(plVar2 + 1) = (int)param_4[1];
                    /* try { // try from 005f6308 to 006f632f has its CatchHandler @ 005f754c */
        *(undefined1 *)(lVar7 + 10) = 0;
        if (((3 < (int)param_4[1]) && ((*(byte *)(*param_4 + 9) & 3) != 0)) &&
           ((*(byte *)(lVar7 + 9) >> 2 & 1) != 0)) {
          FUN_005ee46c(param_1,lVar7);
        }
        goto LAB_005f63c8;
      }
      plVar2 = plVar4 + 1;
LAB_005f62bc:
      iVar5 = (int)*plVar2;
    }
    else {
      plVar4 = (long *)FUN_005f4ed4(param_1,param_2,1);
      plVar2 = plVar4 + 1;
      iVar5 = (int)*plVar2;
      if (iVar5 == 0) {
        FUN_005eb03c(param_1,param_2,"index");
        goto LAB_005f62bc;
      }
    }
                    /* try { // try from 005f62c0 to 006f62e7 has its CatchHandler @ 005f6f64 */
    if (iVar5 == 6) {
      plVar6 = *(long **)(param_1 + 0x10);
      *plVar6 = *plVar4;
                    /* try { // try from 005f6350 to 006f6353 has its CatchHandler @ 005f6e44 */
      *(int *)(plVar6 + 1) = (int)*plVar2;
      lVar7 = *(long *)(param_1 + 0x10);
      *(long *)(lVar7 + 0x10) = *param_2;
      *(int *)(lVar7 + 0x18) = (int)param_2[1];
      lVar7 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar7 + 0x20) = *param_3;
                    /* try { // try from 005f6374 to 006f6377 has its CatchHandler @ 005f7384 */
      *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(param_3 + 1);
      lVar7 = *(long *)(param_1 + 0x10);
      *(long *)(lVar7 + 0x30) = *param_4;
      *(int *)(lVar7 + 0x38) = (int)param_4[1];
      lVar7 = *(long *)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x38) - lVar7 < 0x41) {
        FUN_005ebbb8(param_1,4);
        lVar7 = *(long *)(param_1 + 0x10);
      }
      *(long *)(param_1 + 0x10) = lVar7 + 0x40;
      FUN_005ec63c(param_1,lVar7,0);
      goto LAB_005f63c8;
    }
    uVar8 = uVar8 + 1;
    param_2 = &local_78;
    local_78 = *plVar4;
    local_70 = iVar5;
    if (0x62 < uVar8) {
      FUN_005eb320(param_1,"loop in settable");
LAB_005f63c8:
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 005f63d8 to 006f63eb has its CatchHandler @ 005f71f4 */
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


