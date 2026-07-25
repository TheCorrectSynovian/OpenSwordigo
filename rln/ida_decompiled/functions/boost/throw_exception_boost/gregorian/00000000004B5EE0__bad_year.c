/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5EE0
 * Mangled: _ZN5boost15throw_exceptionINS_9gregorian8bad_yearEEEvRKT_
 * Demangled: boost::throw_exception<boost::gregorian::bad_year>(boost::gregorian::bad_year const&)
 *
 * Callers: 2
 *   0x00000000001F90F0  boost::throw_exception<boost::gregorian::bad_year>(boost::gregorian::bad_year const&)
 *   0x00000000004B5E18  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> const&)
 *
 * Callees: 10
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x00000000001FC3F0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_year> const&)
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000004B5FD8  boost::gregorian::bad_year::bad_year(void)
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x00000000004B5EF4 string=0x00000000004B5EF8 "Z"
 *   insn=0x00000000004B5EF8 string=0x00000000001F9460 "0'"
 *   insn=0x00000000004B5EFC string=0x00000000004B5F00 ""
 *   insn=0x00000000004B5F08 string=0x00000000004B5F0C " !"
 *   insn=0x00000000004B5F0C string=0x00000000004B5F10 "A"
 *   insn=0x00000000004B5F28 string=0x00000000004B5F2C ")"
 *   insn=0x00000000004B5F2C string=0x00000000004B5F30 ""
 *   insn=0x00000000004B5F38 string=0x00000000004B5F3C "(A"
 *   insn=0x00000000004B5F3C string=0x00000000004B5F40 ")"
 *   insn=0x00000000004B5F50 string=0x00000000004B5F54 "'"
 *   insn=0x00000000004B5F54 string=0x00000000001FC3F0 "0'"
 *   insn=0x00000000004B5F5C string=0x00000000004B5F60 "!"
 *   insn=0x00000000004B5F60 string=0x00000000004B5F64 "B"
 *   insn=0x00000000004B5F6C string=0x00000000004B5F70 "L"
 *   insn=0x00000000004B5F70 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000004B5F78 string=0x00000000004B5F7C "=("
 *   insn=0x00000000004B5F88 string=0x00000000004B5F8C ""
 *   insn=0x00000000004B5F90 string=0x00000000004B5F94 "A"
 *   insn=0x00000000004B5FA0 string=0x00000000004B5FA4 "\t"
 *   insn=0x00000000004B5FA4 string=0x00000000004B5FA8 ")"
 *   insn=0x00000000004B5FAC string=0x00000000004B5FB0 " "
 *   insn=0x00000000004B5FBC string=0x00000000004B5FC0 "h"
 *   insn=0x00000000004B5FC8 string=0x00000000001F41F0 "P'"
 *   insn=0x00000000004B5FCC string=0x00000000004B5FD0 "=."
 *   insn=0x00000000004B5FD4 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn boost::throw_exception<boost::gregorian::bad_year>(__int64 a1)
{
  void *exception; // x19
  _QWORD v3[5]; // [xsp+10h] [xbp-40h] BYREF
  int v4; // [xsp+38h] [xbp-18h]

  exception = __cxa_allocate_exception(0x40u);
  sub_56A528(v3, a1 + 8);
  memset(&v3[2], 0, 24);
  v4 = -1;
  v3[1] = off_6D70F8;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>,
    (void (*)(void *))&boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl);
}

