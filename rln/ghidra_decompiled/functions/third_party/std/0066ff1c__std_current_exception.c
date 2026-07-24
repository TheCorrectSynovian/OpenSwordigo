/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066ff1c
 * Function: std::current_exception
 * Signature: undefined current_exception(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::current_exception() */

void std::current_exception(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  exception_ptr *in_x8;
  
  puVar1 = (undefined8 *)__cxa_get_globals();
  puVar1 = (undefined8 *)*puVar1;
  if ((puVar1 != (undefined8 *)0x0) && (puVar1[10] + 0xb8b1aabcbcd4d500 < 2)) {
    puVar2 = puVar1 + 0xe;
    if ((puVar1[10] & 1) != 0) {
                    /* try { // try from 0066ff78 to 0076ff8f has its CatchHandler @ 0066ffa4 */
      puVar2 = (undefined8 *)*puVar1;
    }
                    /* try { // try from 0066ff64 to 0076ff67 has its CatchHandler @ 0066ffac */
    __exception_ptr::exception_ptr::exception_ptr(in_x8,puVar2);
    return;
  }
  __exception_ptr::exception_ptr::exception_ptr(in_x8);
  return;
}


