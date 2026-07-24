/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620970
 * Function: FUN_00620970
 * Signature: undefined FUN_00620970(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_00620970(long param_1,uint param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  
                    /* try { // try from 0062097c to 007209df has its CatchHandler @ 0062283c */
  if ((param_2 < 0x80) && (*(char *)(param_1 + 0x18) != '\0')) {
    return (uint)*(byte *)(param_1 + (ulong)param_2 + 0x19);
  }
  uVar1 = wctob(param_2);
  uVar2 = uVar1 & 0xff;
  if (uVar1 == 0xffffffff) {
    uVar2 = (uint)param_3;
  }
  return uVar2;
}


