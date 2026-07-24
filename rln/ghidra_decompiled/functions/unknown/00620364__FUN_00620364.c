/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620364
 * Function: FUN_00620364
 * Signature: undefined FUN_00620364(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1 * FUN_00620364(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
                    /* try { // try from 00620364 to 00720377 has its CatchHandler @ 00620504 */
  if (param_2 < param_3) {
    do {
                    /* try { // try from 00620390 to 0072044f has its CatchHandler @ 00620590 */
      uVar1 = (**(code **)(*param_1 + 0x10))(param_1,*param_2);
      puVar2 = param_2 + 1;
      *param_2 = uVar1;
      param_2 = puVar2;
    } while (puVar2 != param_3);
  }
  return param_3;
}


