/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00682f6c
 * Function: FUN_00682f6c
 * Signature: undefined FUN_00682f6c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int * FUN_00682f6c(int *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    *param_2 = 0xffffffffffffffff;
    param_2[4] = 0;
    param_2[3] = param_1;
    param_2[1] = param_3;
    param_2[2] = param_4;
    *(undefined2 *)(param_2 + 4) = 0x7f8;
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_007fe568);
    }
    param_1 = (int *)&DAT_007fe3c8;
    param_2[5] = DAT_007fe590;
    DAT_007fe590 = param_2;
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
      uVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007fe568);
      return (int *)(ulong)uVar1;
    }
  }
  return param_1;
}


