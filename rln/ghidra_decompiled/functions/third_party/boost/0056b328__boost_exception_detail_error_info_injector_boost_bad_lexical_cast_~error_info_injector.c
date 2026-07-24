/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056b328
 * Function: boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector
 * Signature: undefined __thiscall ~error_info_injector(error_info_injector<boost::bad_lexical_cast> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector() */

void __thiscall
boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector
          (error_info_injector<boost::bad_lexical_cast> *this)

{
                    /* catch() { ... } // from try @ 0056b238 with catch @ 0056b330 */
                    /* catch() { ... } // from try @ 0056b138 with catch @ 0056b340 */
  *(undefined **)(this + 0x18) = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 0x20))();
  }
  std::bad_cast::~bad_cast((bad_cast *)this);
  return;
}


