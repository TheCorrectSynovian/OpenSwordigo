/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00468368
 * Function: boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector
 * Signature: undefined __thiscall ~error_info_injector(error_info_injector<boost::bad_weak_ptr> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector() */

void __thiscall
boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector
          (error_info_injector<boost::bad_weak_ptr> *this)

{
                    /* try { // try from 00468378 to 00568387 has its CatchHandler @ 004687f0 */
  *(undefined **)(this + 8) = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x20))();
  }
  std::exception::~exception((exception *)this);
  return;
}


