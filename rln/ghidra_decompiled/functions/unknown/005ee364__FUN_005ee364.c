/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ee364
 * Function: FUN_005ee364
 * Signature: undefined FUN_005ee364(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ee364(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  
  bVar1 = *(byte *)(param_2 + 9);
LAB_005ee388:
  *(byte *)(param_2 + 9) = bVar1 & 0xfc;
  switch(*(undefined1 *)(param_2 + 8)) {
  case 5:
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    break;
  case 6:
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x38);
    break;
  case 7:
    goto switchD_005ee3a8_caseD_7;
  case 8:
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_1 + 0x38);
                    /* try { // try from 005ee404 to 006ee42b has its CatchHandler @ 005eea5c */
    break;
  case 9:
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x38);
    break;
  case 10:
    plVar2 = *(long **)(param_2 + 0x10);
    if ((3 < (int)plVar2[1]) && ((*(byte *)(*plVar2 + 9) & 3) != 0)) {
                    /* try { // try from 005ee444 to 006ee44b has its CatchHandler @ 005ee6d4 */
      FUN_005ee364(param_1);
                    /* try { // try from 005ee44c to 006ee5f7 has its CatchHandler @ 005edc0c */
      plVar2 = *(long **)(param_2 + 0x10);
    }
    if (plVar2 != (long *)(param_2 + 0x18)) {
      return;
    }
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 4;
    return;
  default:
    goto switchD_005ee3a8_default;
  }
  *(long *)(param_1 + 0x38) = param_2;
  return;
switchD_005ee3a8_caseD_7:
                    /* try { // try from 005ee3b4 to 006ee3e3 has its CatchHandler @ 005ee684 */
  *(byte *)(param_2 + 9) = bVar1 & 0xfc | 4;
  if ((*(long *)(param_2 + 0x10) != 0) && ((*(byte *)(*(long *)(param_2 + 0x10) + 9) & 3) != 0)) {
    FUN_005ee364(param_1);
  }
  param_2 = *(long *)(param_2 + 0x18);
  bVar1 = *(byte *)(param_2 + 9);
  if ((bVar1 & 3) == 0) {
switchD_005ee3a8_default:
    return;
  }
  goto LAB_005ee388;
}


