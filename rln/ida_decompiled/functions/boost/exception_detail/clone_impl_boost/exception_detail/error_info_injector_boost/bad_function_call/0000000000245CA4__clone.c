/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245CA4
 * Mangled: _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEE5cloneEv
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5FF0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000245CEC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000245CB4 string=0x0000000000245CB8 "J"
 *   insn=0x0000000000245CB8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000245CC4 string=0x00000000001F5FF0 "P'"
 *   insn=0x0000000000245CC8 string=0x0000000000245CCC "`"
 *   insn=0x0000000000245CDC string=0x0000000000245CE0 "t"
 *   insn=0x0000000000245CE0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone()
{
  __int64 v0; // x19

  v0 = operator new(0x40u);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl();
  return v0 + 56;
}

