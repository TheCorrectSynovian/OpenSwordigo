/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061cdd0
 * Function: FUN_0061cdd0
 * Signature: undefined FUN_0061cdd0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061cdd0(exception *param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0061cd94 with catch @ 0061cdd0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0061cd4c with catch @ 0061cdd8
                        */
  *(undefined ***)param_1 = &PTR_FUN_007b6a90;
  std::exception::~exception(param_1);
  return;
}


