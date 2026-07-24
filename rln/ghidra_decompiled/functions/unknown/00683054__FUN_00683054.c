/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00683054
 * Function: FUN_00683054
 * Signature: undefined FUN_00683054(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_00683054(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  param_2[4] = 0;
  param_2[3] = param_1;
  *(undefined1 *)(param_2 + 4) = 2;
  param_2[1] = param_3;
  *param_2 = 0xffffffffffffffff;
  param_2[2] = param_4;
  *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) | 0x7f8;
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_007fe568);
  }
  param_2[5] = DAT_007fe590;
  DAT_007fe590 = param_2;
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007fe568);
    return iVar1;
  }
  return 0x7fe3c8;
}


