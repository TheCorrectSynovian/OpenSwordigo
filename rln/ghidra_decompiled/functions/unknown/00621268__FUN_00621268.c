/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621268
 * Function: FUN_00621268
 * Signature: undefined FUN_00621268(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00621268(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_8 [8];
  
  FUN_0063b7dc(param_1,param_2 + 0xd0);
  FUN_00622cac(auStack_8,param_2,param_3);
  FUN_0063c0c8(auStack_8);
                    /* try { // try from 006212b0 to 007212b7 has its CatchHandler @ 00621f6c */
  FUN_006211bc(param_2,param_3);
  plVar1 = *(long **)(param_2 + 0xe8);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 006212d0 to 007212d7 has its CatchHandler @ 00622394 */
    FUN_0063b7dc(auStack_8,plVar1 + 7);
                    /* try { // try from 006212d8 to 007212eb has its CatchHandler @ 00622390 */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
                    /* try { // try from 006212ec to 0072134f has its CatchHandler @ 0062252c */
    FUN_0063c028(plVar1 + 7,param_3);
    FUN_0063c0c8(auStack_8);
  }
  return param_1;
}


