/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B754
 * Mangled: _ZThn64_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEE7rethrowEv
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow(void)
 *
 * Callers: 1
 *   0x000000000046B69C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone(void)
 *
 * Callees: 7
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F7590  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> const&)
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000046B2E0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *   0x000000000046B7A4  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x000000000046B764 string=0x000000000046B768 ">7"
 *   insn=0x000000000046B768 string=0x00000000001F9460 "0'"
 *   insn=0x000000000046B774 string=0x00000000001F7590 "0'"
 *   insn=0x000000000046B77C string=0x000000000046B780 "!"
 *   insn=0x000000000046B780 string=0x000000000046B784 "BlE"
 *   insn=0x000000000046B788 string=0x000000000046B78C "E?"
 *   insn=0x000000000046B78C string=0x00000000001FB4A0 "0'"
 *   insn=0x000000000046B798 string=0x00000000001F41F0 "P'"
 *   insn=0x000000000046B79C string=0x000000000046B7A0 "IX"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow()
{
  void *exception; // x19

  exception = __cxa_allocate_exception(0x48u);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>,
    (void (*)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl);
}

