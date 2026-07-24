/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00468884
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
                    /* catch() { ... } // from try @ 00468908 with catch @ 004688a4
                       catch() { ... } // from try @ 004689e4 with catch @ 004688a4 */
  *(undefined **)(this + 8) = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x20))();
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


