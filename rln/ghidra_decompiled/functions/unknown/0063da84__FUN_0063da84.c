/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063da84
 * Function: FUN_0063da84
 * Signature: undefined FUN_0063da84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined * FUN_0063da84(void)

{
  undefined *puVar1;
  
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
    pthread_once((pthread_once_t *)PTR_DAT_007e62c0,FUN_0063d774);
  }
  puVar1 = PTR_DAT_007e5888;
  if (*(long *)PTR_DAT_007e5888 != 0) {
                    /* try { // try from 0063dac4 to 0073daeb has its CatchHandler @ 0063dda8 */
    FUN_0063b814(&DAT_007fc7c0);
    return &DAT_007fc7c0;
  }
  FUN_0063cb20(&DAT_007fc840,2);
  *(undefined **)puVar1 = &DAT_007fc840;
                    /* try { // try from 0063db0c to 0073db33 has its CatchHandler @ 0063deb0 */
  *(undefined **)PTR_DAT_007e68e0 = &DAT_007fc840;
  FUN_0063b814(&DAT_007fc7c0,&DAT_007fc840);
  return &DAT_007fc7c0;
}


