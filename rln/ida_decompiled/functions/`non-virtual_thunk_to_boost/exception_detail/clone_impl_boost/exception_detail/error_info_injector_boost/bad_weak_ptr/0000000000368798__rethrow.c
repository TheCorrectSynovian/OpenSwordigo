/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368798
 * Mangled: _ZThn48_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEE7rethrowEv
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow(void)
 *
 * Callers: 1
 *   0x00000000003686E0  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone(void)
 *
 * Callees: 7
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x00000000001FC270  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> const&)
 *   0x0000000000368320  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *   0x00000000003687E8  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000003687A8 string=0x00000000003687AC "-C"
 *   insn=0x00000000003687AC string=0x00000000001F9460 "0'"
 *   insn=0x00000000003687B8 string=0x00000000001FC270 "0'"
 *   insn=0x00000000003687C0 string=0x00000000003687C4 "!`D"
 *   insn=0x00000000003687C4 string=0x00000000003687C8 "B,C"
 *   insn=0x00000000003687CC string=0x00000000003687D0 "4K"
 *   insn=0x00000000003687D0 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000003687DC string=0x00000000001F41F0 "P'"
 *   insn=0x00000000003687E0 string=0x00000000003687E4 "8d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow()
{
  void *exception; // x19

  exception = __cxa_allocate_exception(0x38u);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>,
    (void (*)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl);
}

