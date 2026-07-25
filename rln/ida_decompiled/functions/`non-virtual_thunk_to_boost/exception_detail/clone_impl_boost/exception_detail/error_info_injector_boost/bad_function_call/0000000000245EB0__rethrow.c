/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245EB0
 * Mangled: _ZThn56_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEE7rethrowEv
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow(void)
 *
 * Callers: 1
 *   0x0000000000245DD8  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone(void)
 *
 * Callees: 7
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F5FF0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> const&)
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000024592C  boost::bad_function_call::bad_function_call(void)
 *   0x0000000000245F00  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000245EC0 string=0x0000000000245EC4 "g"
 *   insn=0x0000000000245EC4 string=0x00000000001F9460 "0'"
 *   insn=0x0000000000245ECC string=0x0000000000245ED0 "H"
 *   insn=0x0000000000245ED0 string=0x00000000001F5FF0 "P'"
 *   insn=0x0000000000245ED8 string=0x0000000000245EDC "!"
 *   insn=0x0000000000245EDC string=0x0000000000245EE0 "B"
 *   insn=0x0000000000245EE4 string=0x0000000000245EE8 "n"
 *   insn=0x0000000000245EE8 string=0x00000000001FB4A0 "0'"
 *   insn=0x0000000000245EF4 string=0x00000000001F41F0 "P'"
 *   insn=0x0000000000245EF8 string=0x0000000000245EFC "r"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow()
{
  void *exception; // x19

  exception = __cxa_allocate_exception(0x40u);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>,
    (void (*)(void *))&boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl);
}

