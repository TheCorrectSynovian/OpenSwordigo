/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063d7b8
 * Function: FUN_0063d7b8
 * Signature: undefined FUN_0063d7b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063d7b8(void)

{
  undefined *puVar1;
  
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
    pthread_once((pthread_once_t *)PTR_DAT_007e62c0,FUN_0063d774);
  }
  puVar1 = PTR_DAT_007e5888;
  if (*(long *)PTR_DAT_007e5888 != 0) {
    return;
  }
  FUN_0063cb20(&DAT_007fc840,2);
  *(undefined **)puVar1 = &DAT_007fc840;
  *(undefined **)PTR_DAT_007e68e0 = &DAT_007fc840;
                    /* try { // try from 0063d824 to 0073d837 has its CatchHandler @ 0063dec0 */
  return;
}


