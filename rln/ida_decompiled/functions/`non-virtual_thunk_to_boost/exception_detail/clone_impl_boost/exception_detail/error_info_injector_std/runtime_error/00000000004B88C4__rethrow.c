/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B88C4
 * Mangled: _ZThn56_NK5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEE7rethrowEv
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(void)
 *
 * Callers: 1
 *   0x00000000004B87FC  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone(void)
 *
 * Callees: 7
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000200E10  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> const&)
 *   0x00000000004B84EC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *   0x00000000004B8914  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000004B88D8 string=0x00000000001F9460 "0'"
 *   insn=0x00000000004B88E0 string=0x00000000004B88E4 "K!"
 *   insn=0x00000000004B88E4 string=0x00000000004B88E8 "a"
 *   insn=0x00000000004B88E8 string=0x00000000004B88EC "b"
 *   insn=0x00000000004B88EC string=0x00000000004B88F0 "!$D"
 *   insn=0x00000000004B88F0 string=0x00000000004B88F4 "B"
 *   insn=0x00000000004B88FC string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000004B8904 string=0x00000000004B8908 ":"
 *   insn=0x00000000004B8908 string=0x00000000001F41F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow()
{
  void *exception; // x19

  exception = __cxa_allocate_exception(0x40u);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>,
    (void (*)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl);
}

