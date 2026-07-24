/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00468644
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl
 * Signature: undefined __thiscall ~clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>
   >::~clone_impl() */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *this)

{
  *(undefined **)this = PTR_vtable_007e57f0 + 0x10;
                    /* try { // try from 00468668 to 0056868f has its CatchHandler @ 004687d4 */
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  std::exception::~exception((exception *)(this + -8));
  return;
}


