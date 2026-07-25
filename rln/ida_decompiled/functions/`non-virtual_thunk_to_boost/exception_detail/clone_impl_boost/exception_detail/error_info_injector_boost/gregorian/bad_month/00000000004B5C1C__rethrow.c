/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5C1C
 * Mangled: _ZThn56_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEE7rethrowEv
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow(void)
 *
 * Callers: 1
 *   0x00000000004B5B44  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone(void)
 *
 * Callees: 7
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F74A0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> const&)
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x00000000004B5698  boost::gregorian::bad_month::bad_month(void)
 *   0x00000000004B5C6C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000004B5C30 string=0x00000000001F9460 "0'"
 *   insn=0x00000000004B5C3C string=0x00000000004B5C40 "a"
 *   insn=0x00000000004B5C3C string=0x00000000001F74A0 "0'"
 *   insn=0x00000000004B5C44 string=0x00000000004B5C48 "!<E"
 *   insn=0x00000000004B5C48 string=0x00000000004B5C4C "B"
 *   insn=0x00000000004B5C54 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000004B5C5C string=0x00000000004B5C60 "d"
 *   insn=0x00000000004B5C60 string=0x00000000001F41F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow()
{
  void *exception; // x19

  exception = __cxa_allocate_exception(0x40u);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>,
    (void (*)(void *))&boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl);
}

