/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f4adc
 * Function: FUN_005f4adc
 * Signature: undefined FUN_005f4adc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_005f4adc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005f43e0 with catch @ 005f4b08 */
                    /* try { // try from 005f4b14 to 006f4b47 has its CatchHandler @ 005f4b14
                       catch() { ... } // from try @ 005f4b14 with catch @ 005f4b14
                       catch() { ... } // from try @ 005f4b4c with catch @ 005f4b14
                       catch() { ... } // from try @ 005f4be0 with catch @ 005f4b14
                       catch() { ... } // from try @ 005f4cfc with catch @ 005f4b14 */
  puVar2 = (undefined8 *)
           (*(long *)(param_2 + 0x20) +
           (long)(int)((1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U &
                      *(uint *)(param_3 + 0xc)) * 0x28);
  while ((*(int *)(puVar2 + 3) != 4 || (puVar2[2] != param_3))) {
    puVar2 = (undefined8 *)puVar2[4];
    if (puVar2 == (undefined8 *)0x0) {
LAB_005f4b3c:
                    /* try { // try from 005f4b48 to 006f4b4b has its CatchHandler @ 005f4d08 */
      local_30 = 4;
      local_38 = param_3;
                    /* try { // try from 005f4b4c to 006f4b63 has its CatchHandler @ 005f4b14 */
      puVar2 = (undefined8 *)FUN_005f43c0(param_1,param_2,&local_38);
LAB_005f4b68:
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return puVar2;
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005f4b8c to 006f4b97 has its CatchHandler @ 005f4c60 */
      __stack_chk_fail();
    }
  }
                    /* try { // try from 005f4b64 to 006f4b6b has its CatchHandler @ 005f4cb0 */
  if (puVar2 != &DAT_00699bc8) goto LAB_005f4b68;
  goto LAB_005f4b3c;
}


