/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6350
 * Mangled: _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEE5cloneEv
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002016D0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> const&)
 *   0x00000000004B6398  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000004B6364 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004B6374 string=0x00000000004B6378 "`"
 *   insn=0x00000000004B638C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004B6390 string=0x00000000004B6394 "L-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone()
{
  __int64 v0; // x19

  v0 = operator new(0x40u);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl();
  return v0 + 56;
}

