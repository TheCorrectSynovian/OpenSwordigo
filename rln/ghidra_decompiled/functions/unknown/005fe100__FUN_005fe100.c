/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fe100
 * Function: FUN_005fe100
 * Signature: undefined FUN_005fe100(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fe100(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
                    /* try { // try from 005fe100 to 006fe10f has its CatchHandler @ 005fee54 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 4;
  local_38 = param_2;
  FUN_005fe158(param_1,&local_38,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 005fe150 to 006fe177 has its CatchHandler @ 005fecec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


