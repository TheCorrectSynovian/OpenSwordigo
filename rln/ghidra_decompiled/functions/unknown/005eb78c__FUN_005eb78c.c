/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eb78c
 * Function: FUN_005eb78c
 * Signature: undefined FUN_005eb78c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005eb78c(long param_1,int param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
                    /* try { // try from 005eb794 to 006eb79f has its CatchHandler @ 005eb854 */
                    /* try { // try from 005eb7a0 to 006eb8c3 has its CatchHandler @ 005eb75c */
  if (param_2 - 2U < 2) {
    lVar4 = *(long *)(param_1 + 0x10);
    *param_3 = *(undefined8 *)(lVar4 + -0x10);
    uVar3 = *(undefined4 *)(lVar4 + -8);
  }
  else {
    if (param_2 == 5) {
      pcVar1 = "error in error handling";
      uVar2 = 0x17;
    }
    else {
      if (param_2 != 4) goto LAB_005eb800;
      pcVar1 = "not enough memory";
      uVar2 = 0x11;
    }
    uVar2 = FUN_005f356c(param_1,pcVar1,uVar2);
    *param_3 = uVar2;
    uVar3 = 4;
  }
  *(undefined4 *)(param_3 + 1) = uVar3;
LAB_005eb800:
  *(undefined8 **)(param_1 + 0x10) = param_3 + 2;
  return;
}


