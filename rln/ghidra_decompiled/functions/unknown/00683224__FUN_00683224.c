/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00683224
 * Function: FUN_00683224
 * Signature: undefined FUN_00683224(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00683224(int *param_1)

{
  void *__ptr;
  
                    /* catch() { ... } // from try @ 006831ec with catch @ 00683224 */
                    /* try { // try from 00683230 to 00783233 has its CatchHandler @ 00683234 */
  if (*param_1 != 0) {
                    /* catch() { ... } // from try @ 00683230 with catch @ 00683234 */
    __ptr = (void *)thunk_FUN_00683120();
                    /* try { // try from 00683238 to 0078323b has its CatchHandler @ 00683244 */
                    /* try { // try from 0068323c to 00783247 has its CatchHandler @ 006831cc */
    free(__ptr);
    return;
  }
                    /* catch() { ... } // from try @ 00683238 with catch @ 00683244 */
  return;
}


