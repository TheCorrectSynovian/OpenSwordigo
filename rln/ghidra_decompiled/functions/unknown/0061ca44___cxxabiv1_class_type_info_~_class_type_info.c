/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061ca44
 * Function: __cxxabiv1::__class_type_info::~__class_type_info
 * Signature: undefined __thiscall ~__class_type_info(__class_type_info * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__class_type_info::~__class_type_info() */

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
                    /* try { // try from 0061ca50 to 0071caa7 has its CatchHandler @ 0061ca50
                       catch() { ... } // from try @ 0061ca50 with catch @ 0061ca50
                       catch() { ... } // from try @ 0061cbb0 with catch @ 0061ca50
                       catch() { ... } // from try @ 0061ccf0 with catch @ 0061ca50 */
  ~__class_type_info(this);
  operator_delete(this);
  return;
}


