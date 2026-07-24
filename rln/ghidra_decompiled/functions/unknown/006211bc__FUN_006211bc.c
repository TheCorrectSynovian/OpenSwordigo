/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006211bc
 * Function: FUN_006211bc
 * Signature: undefined FUN_006211bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006211bc(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0062f0c0(param_2);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    cVar1 = FUN_0062f270(param_2);
  }
  else {
    uVar2 = FUN_0062d354(param_2);
    *(undefined8 *)(param_1 + 0xf0) = uVar2;
    cVar1 = FUN_0062f270(param_2);
  }
                    /* try { // try from 00621240 to 007212a3 has its CatchHandler @ 00622564 */
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    cVar1 = FUN_0062f2dc(param_2);
  }
  else {
    uVar2 = FUN_0062e184(param_2);
                    /* try { // try from 00621204 to 0072120b has its CatchHandler @ 00621f9c */
    *(undefined8 *)(param_1 + 0xf8) = uVar2;
    cVar1 = FUN_0062f2dc(param_2);
  }
  if (cVar1 != '\0') {
    uVar2 = FUN_0062e1ec(param_2);
    *(undefined8 *)(param_1 + 0x100) = uVar2;
                    /* try { // try from 00621224 to 0072122b has its CatchHandler @ 0062239c */
                    /* try { // try from 0062122c to 0072123f has its CatchHandler @ 00622398 */
    return;
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  return;
}


