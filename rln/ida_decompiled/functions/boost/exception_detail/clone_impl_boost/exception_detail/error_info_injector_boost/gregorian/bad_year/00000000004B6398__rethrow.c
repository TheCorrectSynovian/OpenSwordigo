/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6398
 * Mangled: _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEE7rethrowEv
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow(void)
 *
 * Callers: 1
 *   0x00000000004B6350  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone(void)
 *
 * Callees: 7
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x00000000002016D0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> const&)
 *   0x00000000004B5FD8  boost::gregorian::bad_year::bad_year(void)
 *   0x00000000004B63E8  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000004B63A8 string=0x00000000004B63AC "-"
 *   insn=0x00000000004B63AC string=0x00000000001F9460 "0'"
 *   insn=0x00000000004B63C0 string=0x00000000004B63C4 "!"
 *   insn=0x00000000004B63C4 string=0x00000000004B63C8 "B"
 *   insn=0x00000000004B63CC string=0x00000000004B63D0 "4"
 *   insn=0x00000000004B63D0 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000004B63DC string=0x00000000001F41F0 "P'"
 *   insn=0x00000000004B63E0 string=0x00000000004B63E4 "8-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow()
{
  void *exception; // x19

  exception = __cxa_allocate_exception(0x40u);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>,
    (void (*)(void *))&boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl);
}

