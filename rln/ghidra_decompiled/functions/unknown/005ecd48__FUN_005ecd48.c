/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ecd48
 * Function: FUN_005ecd48
 * Signature: undefined FUN_005ecd48(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ecd48(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  undefined8 local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_54 [12];
  long local_48;
  
                    /* catch() { ... } // from try @ 005ec5a4 with catch @ 005ecd54 */
                    /* catch() { ... } // from try @ 005ec4ac with catch @ 005ecd58 */
                    /* catch() { ... } // from try @ 005ec328 with catch @ 005ecd5c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_78 = param_1;
  pcStack_70 = param_3;
  local_68 = param_4;
  local_60 = param_5;
  FUN_005f5ed4(auStack_54);
  local_5c = (*param_3)(param_1,auStack_54,0xc,param_4);
                    /* catch() { ... } // from try @ 005ec234 with catch @ 005ecdac */
                    /* catch() { ... } // from try @ 005ec908 with catch @ 005ecdb0 */
  FUN_005ecde8(param_2,0,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_5c);
}


