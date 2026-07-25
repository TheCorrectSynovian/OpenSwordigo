/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6820
 * Mangled: _ZN5boost15throw_exceptionINS_9gregorian16bad_day_of_monthEEEvRKT_
 * Demangled: boost::throw_exception<boost::gregorian::bad_day_of_month>(boost::gregorian::bad_day_of_month const&)
 *
 * Callers: 2
 *   0x0000000000203C20  boost::throw_exception<boost::gregorian::bad_day_of_month>(boost::gregorian::bad_day_of_month const&)
 *   0x00000000004B6758  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> const&)
 *
 * Callees: 10
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000202C00  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> const&)
 *   0x00000000004B6918  boost::gregorian::bad_day_of_month::bad_day_of_month(void)
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x00000000004B6834 string=0x00000000004B6838 "\n"
 *   insn=0x00000000004B6838 string=0x00000000004B683C "h"
 *   insn=0x00000000004B6838 string=0x00000000001F9460 "0'"
 *   insn=0x00000000004B683C string=0x00000000004B6840 ""
 *   insn=0x00000000004B6848 string=0x00000000004B684C " !"
 *   insn=0x00000000004B684C string=0x00000000004B6850 "A"
 *   insn=0x00000000004B6858 string=0x00000000004B685C "3"
 *   insn=0x00000000004B6864 string=0x00000000004B6868 "i"
 *   insn=0x00000000004B6868 string=0x00000000004B686C ")qF"
 *   insn=0x00000000004B686C string=0x00000000004B6870 ""
 *   insn=0x00000000004B6878 string=0x00000000004B687C "(A"
 *   insn=0x00000000004B687C string=0x00000000004B6880 ")"
 *   insn=0x00000000004B6894 string=0x00000000004B6898 "a"
 *   insn=0x00000000004B689C string=0x00000000004B68A0 "!"
 *   insn=0x00000000004B68A0 string=0x00000000004B68A4 "B"
 *   insn=0x00000000004B68B0 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000004B68C4 string=0x00000000004B68C8 "h"
 *   insn=0x00000000004B68C8 string=0x00000000004B68CC ""
 *   insn=0x00000000004B68D0 string=0x00000000004B68D4 "A"
 *   insn=0x00000000004B68E0 string=0x00000000004B68E4 "\t"
 *   insn=0x00000000004B68E4 string=0x00000000004B68E8 ")"
 *   insn=0x00000000004B68EC string=0x00000000004B68F0 " "
 *   insn=0x00000000004B68FC string=0x00000000004B6900 "h"
 *   insn=0x00000000004B6904 string=0x00000000004B6908 ":"
 *   insn=0x00000000004B6908 string=0x00000000001F41F0 "P'"
 *   insn=0x00000000004B6910 string=0x00000000004B6914 "["
 *   insn=0x00000000004B6914 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn boost::throw_exception<boost::gregorian::bad_day_of_month>(__int64 a1)
{
  void *exception; // x19
  _QWORD v3[5]; // [xsp+10h] [xbp-40h] BYREF
  int v4; // [xsp+38h] [xbp-18h]

  exception = __cxa_allocate_exception(0x40u);
  sub_56A528(v3, a1 + 8);
  memset(&v3[2], 0, 24);
  v4 = -1;
  v3[1] = off_6D7288;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>,
    (void (*)(void *))&boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl);
}

