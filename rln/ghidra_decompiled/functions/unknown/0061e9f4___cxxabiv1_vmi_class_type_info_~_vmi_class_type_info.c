/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e9f4
 * Function: __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info
 * Signature: undefined __thiscall ~__vmi_class_type_info(__vmi_class_type_info * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info() */

void __thiscall
__cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__vmi_class_type_info *this)

{
                    /* catch() { ... } // from try @ 0061e5c8 with catch @ 0061e9fc */
  ~__vmi_class_type_info(this);
  operator_delete(this);
  return;
}


