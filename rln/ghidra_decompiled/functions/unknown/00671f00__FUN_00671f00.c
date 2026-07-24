/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00671f00
 * Function: FUN_00671f00
 * Signature: undefined FUN_00671f00(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00671f00(long param_1,undefined4 param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  
                    /* try { // try from 00671f24 to 00771f4b has its CatchHandler @ 00671f50 */
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 0xb:
  case 0x21:
  case 0x2b:
  case 0x2d:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3c:
  case 0x3d:
  case 0x3f:
  case 0x4b:
  case 0x4c:
    if (param_3 == 0) {
      return 0;
    }
  case 0x2a:
  case 0x30:
    if (param_4 == 0) {
LAB_00671f10:
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) <= iVar2) {
      return 0;
    }
    break;
  default:
    goto LAB_00671f10;
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x3b:
  case 0x3e:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x48:
  case 0x49:
  case 0x4a:
    if (param_3 == 0) {
      return 0;
    }
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x29:
  case 0x2e:
  case 0x2f:
    iVar2 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) <= iVar2) {
      return 0;
    }
  }
                    /* catch() { ... } // from try @ 00671f24 with catch @ 00671f50 */
                    /* catch() { ... } // from try @ 00671bb4 with catch @ 00671f54 */
  *(int *)(param_1 + 0x28) = iVar2 + 1;
  lVar1 = *(long *)(param_1 + 0x20) + (long)iVar2 * 0x18;
  if (lVar1 != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = param_2;
    *(long *)(lVar1 + 8) = param_3;
    *(long *)(lVar1 + 0x10) = param_4;
                    /* try { // try from 00671f78 to 00771f9f has its CatchHandler @ 00671fec */
    return lVar1;
  }
  return 0;
}


