/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e6ec
 * Function: __cxxabiv1::__si_class_type_info::~__si_class_type_info
 * Signature: undefined __thiscall ~__si_class_type_info(__si_class_type_info * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__si_class_type_info::~__si_class_type_info() */

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  *(undefined **)this = PTR_vtable_007e7e08 + 0x10;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return;
}


