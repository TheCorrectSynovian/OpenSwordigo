/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B5B0
 * Mangled: _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEE7rethrowEv
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow(void)
 *
 * Callers: 1
 *   0x000000000046B4FC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone(void)
 *
 * Callees: 7
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F7590  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> const&)
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000046B2E0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *   0x000000000046B600  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000046B5C4 string=0x00000000001F9460 "0'"
 *   insn=0x000000000046B5D0 string=0x00000000001F7590 "0'"
 *   insn=0x000000000046B5D8 string=0x000000000046B5DC "!"
 *   insn=0x000000000046B5DC string=0x000000000046B5E0 "BlE"
 *   insn=0x000000000046B5E8 string=0x00000000001FB4A0 "0'"
 *   insn=0x000000000046B5F4 string=0x00000000001F41F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow()
{
  void *exception; // x19

  exception = __cxa_allocate_exception(0x48u);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>,
    (void (*)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl);
}

