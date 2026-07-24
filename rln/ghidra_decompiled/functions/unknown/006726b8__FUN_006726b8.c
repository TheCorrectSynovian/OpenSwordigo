/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006726b8
 * Function: FUN_006726b8
 * Signature: undefined FUN_006726b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int * FUN_006726b8(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  
  while (param_2 != (undefined4 *)0x0) {
                    /* catch() { ... } // from try @ 006725d8 with catch @ 00672714 */
    switch(*param_2) {
    case 0:
    case 6:
    case 0x18:
    case 0x27:
    case 0x31:
    case 0x40:
    case 0x45:
    case 0x47:
    case 0x4a:
    case 0x4b:
      goto LAB_00672704;
    default:
      piVar1 = (int *)FUN_006726b8(param_1,*(undefined8 *)(param_2 + 2));
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    case 7:
    case 8:
    case 0x32:
      param_2 = *(undefined4 **)(param_2 + 4);
      break;
    case 5:
      piVar1 = (int *)FUN_0067263c(param_1,param_2 + 2);
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*piVar1 != 0x2f) {
        return (int *)0x0;
      }
      return piVar1;
    }
  }
LAB_00672704:
                    /* catch() { ... } // from try @ 0067249c with catch @ 00672710 */
  return (int *)0x0;
}


