/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7590
 * Mangled: ._ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEC2ERKS5_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> const&)
 *
 * Callers: 2
 *   0x000000000046B5B0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow(void)
 *   0x000000000046B754  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow(void)
 *
 * Callees: 1
 *   0x000000000046B950  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7598 string=0x00000000001F759C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl()
{
  return _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEC2ERKS5_();
}

