/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e4e8
 * Function: __gnu_cxx::recursive_init_error::~recursive_init_error
 * Signature: undefined __thiscall ~recursive_init_error(recursive_init_error * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __gnu_cxx::recursive_init_error::~recursive_init_error() */

void __thiscall __gnu_cxx::recursive_init_error::~recursive_init_error(recursive_init_error *this)

{
  *(undefined **)this = PTR_vtable_007e6230 + 0x10;
  std::exception::~exception((exception *)this);
  return;
}


