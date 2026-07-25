/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B86C8
 * Mangled: _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEE5cloneEv
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200E10  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> const&)
 *   0x00000000004B8710  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000004B86DC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004B86EC string=0x00000000004B86F0 "`"
 *   insn=0x00000000004B8704 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004B8708 string=0x00000000004B870C "n$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone()
{
  __int64 v0; // x19

  v0 = operator new(0x40u);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl();
  return v0 + 56;
}

