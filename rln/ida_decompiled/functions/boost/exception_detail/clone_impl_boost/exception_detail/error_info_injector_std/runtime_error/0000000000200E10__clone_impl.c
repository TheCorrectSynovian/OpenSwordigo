/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200E10
 * Mangled: ._ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEEC2ERKS5_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> const&)
 *
 * Callers: 3
 *   0x00000000004B86C8  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone(void)
 *   0x00000000004B8710  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(void)
 *   0x00000000004B88C4  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(void)
 *
 * Callees: 1
 *   0x00000000004B8A9C  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200E18 string=0x0000000000200E1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl()
{
  return _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEEC2ERKS5_();
}

