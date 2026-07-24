/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670e14
 * Function: FUN_00670e14
 * Signature: undefined FUN_00670e14(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_00670e14(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  
                    /* try { // try from 00670e1c to 00770e1f has its CatchHandler @ 00670e94 */
  iVar1 = strcoll(param_2,param_3);
  return (uint)(iVar1 != 0) | iVar1 >> 0x1e;
}


