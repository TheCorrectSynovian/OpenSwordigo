/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8710
 * Mangled: _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEE7rethrowEv
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(void)
 *
 * Callers: 1
 *   0x00000000004B86C8  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone(void)
 *
 * Callees: 7
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000200E10  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> const&)
 *   0x00000000004B84EC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *   0x00000000004B8760  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000004B8720 string=0x00000000004B8724 "O"
 *   insn=0x00000000004B8724 string=0x00000000001F9460 "0'"
 *   insn=0x00000000004B8730 string=0x00000000004B8734 "a"
 *   insn=0x00000000004B8734 string=0x00000000004B8738 "b"
 *   insn=0x00000000004B8738 string=0x00000000004B873C "!$D"
 *   insn=0x00000000004B873C string=0x00000000004B8740 "B"
 *   insn=0x00000000004B8744 string=0x00000000004B8748 "V"
 *   insn=0x00000000004B8748 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000004B8754 string=0x00000000001F41F0 "P'"
 *   insn=0x00000000004B8758 string=0x00000000004B875C "Z$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow()
{
  void *exception; // x19

  exception = __cxa_allocate_exception(0x40u);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>,
    (void (*)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl);
}

