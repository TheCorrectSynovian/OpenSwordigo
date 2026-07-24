/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046891c
 * Function: boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector
 * Signature: undefined __thiscall ~error_info_injector(error_info_injector<boost::bad_weak_ptr> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector() */

void __thiscall
boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector
          (error_info_injector<boost::bad_weak_ptr> *this)

{
  *(undefined **)this = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  std::exception::~exception((exception *)(this + -8));
                    /* try { // try from 00468960 to 00568973 has its CatchHandler @ 00468b58 */
  operator_delete((exception *)(this + -8));
  return;
}


