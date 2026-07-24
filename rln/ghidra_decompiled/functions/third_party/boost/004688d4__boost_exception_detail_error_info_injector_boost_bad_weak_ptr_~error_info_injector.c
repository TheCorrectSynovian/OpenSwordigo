/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004688d4
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
                    /* try { // try from 004688e4 to 005688f7 has its CatchHandler @ 00468b5c */
  *(undefined **)this = PTR_vtable_007e57f0 + 0x10;
                    /* try { // try from 004688f8 to 00568907 has its CatchHandler @ 00468ae4 */
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
                    /* try { // try from 00468908 to 0056895f has its CatchHandler @ 004688a4 */
  std::exception::~exception((exception *)(this + -8));
  return;
}


