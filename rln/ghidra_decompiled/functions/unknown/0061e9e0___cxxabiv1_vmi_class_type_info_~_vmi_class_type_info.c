/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e9e0
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
  *(undefined **)this = PTR_vtable_007e6bd0 + 0x10;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return;
}


