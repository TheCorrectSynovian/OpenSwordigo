/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6CD8
 * Mangled: _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian16bad_day_of_monthEEEE7rethrowEv
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow(void)
 *
 * Callers: 1
 *   0x00000000004B6C90  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone(void)
 *
 * Callees: 7
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F74F0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> const&)
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x00000000004B6918  boost::gregorian::bad_day_of_month::bad_day_of_month(void)
 *   0x00000000004B6D28  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000004B6CEC string=0x00000000001F9460 "0'"
 *   insn=0x00000000004B6CF8 string=0x00000000004B6CFC "a"
 *   insn=0x00000000004B6CF8 string=0x00000000001F74F0 "0'"
 *   insn=0x00000000004B6D00 string=0x00000000004B6D04 "!"
 *   insn=0x00000000004B6D04 string=0x00000000004B6D08 "B"
 *   insn=0x00000000004B6D10 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000004B6D18 string=0x00000000004B6D1C "5"
 *   insn=0x00000000004B6D1C string=0x00000000001F41F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow()
{
  void *exception; // x19

  exception = __cxa_allocate_exception(0x40u);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>,
    (void (*)(void *))&boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl);
}

