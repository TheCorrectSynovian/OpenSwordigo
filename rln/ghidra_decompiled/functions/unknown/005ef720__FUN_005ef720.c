/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ef720
 * Function: FUN_005ef720
 * Signature: undefined FUN_005ef720(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ef720(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  lVar1 = FUN_005ed6c8(lVar4);
  *param_2 = lVar1;
  lVar2 = *(long *)(param_1 + 0x30);
  param_2[3] = param_1;
  param_2[4] = lVar4;
  param_2[2] = lVar2;
                    /* try { // try from 005ef760 to 006ef773 has its CatchHandler @ 005ef85c */
  *(long **)(param_1 + 0x30) = param_2;
  param_2[6] = -0x100000000;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  param_2[5] = 0;
  *(undefined8 *)((long)param_2 + 0x43) = 0;
                    /* try { // try from 005ef774 to 006ef7d7 has its CatchHandler @ 005ef714 */
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
  *(undefined1 *)(lVar1 + 0x73) = 2;
  lVar2 = FUN_005f3db4(lVar4,0,0);
  param_2[1] = lVar2;
  plVar3 = *(long **)(lVar4 + 0x10);
  *plVar3 = lVar2;
  *(undefined4 *)(plVar3 + 1) = 5;
  lVar2 = *(long *)(lVar4 + 0x10);
  if (*(long *)(lVar4 + 0x38) - lVar2 < 0x11) {
    FUN_005ebbb8(lVar4,1);
    lVar2 = *(long *)(lVar4 + 0x10);
  }
                    /* try { // try from 005ef7d8 to 006ef7eb has its CatchHandler @ 005ef8ac */
  *(long *)(lVar4 + 0x10) = lVar2 + 0x10;
  *(long *)(lVar2 + 0x10) = lVar1;
  *(undefined4 *)(lVar2 + 0x18) = 9;
  lVar1 = *(long *)(lVar4 + 0x10);
                    /* try { // try from 005ef7ec to 006ef87f has its CatchHandler @ 005ef714 */
  if (*(long *)(lVar4 + 0x38) - lVar1 < 0x11) {
    FUN_005ebbb8(lVar4,1);
    lVar1 = *(long *)(lVar4 + 0x10);
  }
  *(long *)(lVar4 + 0x10) = lVar1 + 0x10;
  return;
}


