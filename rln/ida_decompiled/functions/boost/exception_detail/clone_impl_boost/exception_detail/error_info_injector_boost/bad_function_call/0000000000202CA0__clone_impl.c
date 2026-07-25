/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202CA0
 * Mangled: ._ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEEC2ERKS4_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_function_call> const&)
 *
 * Callers: 1
 *   0x0000000000245834  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *
 * Callees: 1
 *   0x0000000000245B00  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_function_call> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202CA8 string=0x0000000000202CAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl()
{
  return _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEEC2ERKS4_();
}

