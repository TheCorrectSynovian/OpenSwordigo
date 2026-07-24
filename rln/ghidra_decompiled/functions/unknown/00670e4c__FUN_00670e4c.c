/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670e4c
 * Function: FUN_00670e4c
 * Signature: undefined FUN_00670e4c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_00670e4c(undefined8 param_1,wchar_t *param_2,wchar_t *param_3)

{
  int iVar1;
  
  iVar1 = wcscoll(param_2,param_3);
                    /* try { // try from 00670e68 to 00770e6b has its CatchHandler @ 00670eb0 */
  return (uint)(iVar1 != 0) | iVar1 >> 0x1e;
}


