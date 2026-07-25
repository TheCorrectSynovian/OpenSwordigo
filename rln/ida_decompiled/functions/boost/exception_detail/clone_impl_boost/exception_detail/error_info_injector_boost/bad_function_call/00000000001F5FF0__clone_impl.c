/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5FF0
 * Mangled: ._ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEEC2ERKS5_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> const&)
 *
 * Callers: 3
 *   0x0000000000245CA4  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone(void)
 *   0x0000000000245CEC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow(void)
 *   0x0000000000245EB0  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow(void)
 *
 * Callees: 1
 *   0x00000000002470AC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5FF8 string=0x00000000001F5FFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl()
{
  return _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEEC2ERKS5_();
}

