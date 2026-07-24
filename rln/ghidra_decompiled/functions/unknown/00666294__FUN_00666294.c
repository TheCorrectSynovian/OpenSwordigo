/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666294
 * Function: FUN_00666294
 * Signature: undefined FUN_00666294(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666294(void *param_1,long param_2)

{
  long lVar1;
  void *__src;
  size_t __n;
  undefined1 auStack_70 [59];
  undefined1 auStack_35 [53];
  
                    /* catch() { ... } // from try @ 00665ec0 with catch @ 0066629c */
  __n = param_2 - (long)param_1;
                    /* try { // try from 006662c0 to 007663a7 has its CatchHandler @ 006663b0 */
  __src = memcpy(auStack_70,
                 "not enough space for format expansion (Please submit full bug report at http://gcc.gnu.org/bugs.html):\n    "
                 ,0x6c);
                    /* catch() { ... } // from try @ 00665e60 with catch @ 006662cc */
  lVar1 = -(__n + 0x8a & 0xfffffffffffffff0);
  memcpy(&stack0xffffffffffffff60 + lVar1,__src,0x6b);
                    /* catch() { ... } // from try @ 00665d44 with catch @ 006662fc */
  memcpy(auStack_35 + lVar1,param_1,__n);
  auStack_35[__n + lVar1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00665330(&stack0xffffffffffffff60 + lVar1);
}


