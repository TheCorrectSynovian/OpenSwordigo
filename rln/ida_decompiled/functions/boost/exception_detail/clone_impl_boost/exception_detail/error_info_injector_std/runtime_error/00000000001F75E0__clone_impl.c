/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F75E0
 * Mangled: ._ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEEC2ERKS4_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::error_info_injector<std::runtime_error> const&)
 *
 * Callers: 2
 *   0x00000000004B7D10  boost::uuids::detail::sha1::process_byte(uchar)
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *
 * Callees: 1
 *   0x00000000004B8534  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::error_info_injector<std::runtime_error> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F75E8 string=0x00000000001F75EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl()
{
  return _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEEC2ERKS4_();
}

