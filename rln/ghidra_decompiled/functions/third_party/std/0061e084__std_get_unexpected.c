/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e084
 * Function: std::get_unexpected
 * Signature: undefined get_unexpected(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_unexpected() */

undefined8 std::get_unexpected(void)

{
                    /* try { // try from 0061e084 to 0071e08b has its CatchHandler @ 0061e1c0 */
  return *(undefined8 *)PTR___unexpected_handler_007e4df8;
}


