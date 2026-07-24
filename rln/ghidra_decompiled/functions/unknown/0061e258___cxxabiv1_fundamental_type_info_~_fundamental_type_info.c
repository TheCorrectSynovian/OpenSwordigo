/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e258
 * Function: __cxxabiv1::__fundamental_type_info::~__fundamental_type_info
 * Signature: undefined __thiscall ~__fundamental_type_info(__fundamental_type_info * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__fundamental_type_info::~__fundamental_type_info() */

void __thiscall
__cxxabiv1::__fundamental_type_info::~__fundamental_type_info(__fundamental_type_info *this)

{
                    /* try { // try from 0061e25c to 0071e267 has its CatchHandler @ 0061de54 */
                    /* catch() { ... } // from try @ 0061e194 with catch @ 0061e264 */
  ~__fundamental_type_info(this);
  operator_delete(this);
  return;
}


