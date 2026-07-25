/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4420
 * Mangled: ._ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEEC2ERKS5_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_month> const&)
 *
 * Callers: 1
 *   0x00000000004B5548  Caver::SHA1HashForBytes(uchar const*,ulong)
 *
 * Callees: 1
 *   0x00000000004B586C  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_month> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4428 string=0x00000000001F442C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl()
{
  return _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEEC2ERKS5_();
}

