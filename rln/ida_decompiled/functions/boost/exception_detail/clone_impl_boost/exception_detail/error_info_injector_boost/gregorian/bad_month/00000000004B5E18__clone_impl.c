/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5E18
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEEC2ERKS6_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> const&)
 *
 * Callers: 1
 *   0x00000000001F74A0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> const&)
 *
 * Callees: 5
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000004B5EE0  boost::throw_exception<boost::gregorian::bad_year>(boost::gregorian::bad_year const&)
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x00000000004B5E24 string=0x00000000004B5E28 ""
 *   insn=0x00000000004B5E34 string=0x00000000004B5E38 "A"
 *   insn=0x00000000004B5E38 string=0x00000000004B5E3C ""
 *   insn=0x00000000004B5E48 string=0x00000000004B5E4C "eB"
 *   insn=0x00000000004B5E4C string=0x00000000004B5E50 ")"
 *   insn=0x00000000004B5E50 string=0x00000000004B5E54 "A"
 *   insn=0x00000000004B5E54 string=0x00000000004B5E58 ")A"
 *   insn=0x00000000004B5E58 string=0x00000000004B5E5C "h"
 *   insn=0x00000000004B5E5C string=0x00000000004B5E60 "i\n"
 *   insn=0x00000000004B5E64 string=0x00000000004B5E68 "`"
 *   insn=0x00000000004B5E6C string=0x00000000004B5E70 ""
 *   insn=0x00000000004B5E70 string=0x00000000004B5E74 "@"
 *   insn=0x00000000004B5E80 string=0x00000000004B5E84 ")"
 *   insn=0x00000000004B5E84 string=0x00000000004B5E88 "h2"
 *   insn=0x00000000004B5E8C string=0x00000000004B5E90 "*A"
 *   insn=0x00000000004B5E90 string=0x00000000004B5E94 "+!"
 *   insn=0x00000000004B5E94 string=0x00000000004B5E98 "("
 *   insn=0x00000000004B5E98 string=0x00000000004B5E9C "j"
 *   insn=0x00000000004B5E9C string=0x00000000004B5EA0 "k\n"
 *   insn=0x00000000004B5EA0 string=0x00000000004B5EA4 "`\n"
 *   insn=0x00000000004B5EA4 string=0x00000000004B5EA8 "h"
 *   insn=0x00000000004B5EBC string=0x00000000004B5EC0 "NQ"
 *   insn=0x00000000004B5ED0 string=0x00000000004B5ED4 "g("
 *   insn=0x00000000004B5ED8 string=0x00000000004B5EDC "z."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // x0
  long double result; // q0

  *(_QWORD *)a1 = off_6B7560;
  sub_56A528(a1 + 8, a2 + 8);
  *(_QWORD *)a1 = &off_6D6F88;
  *(_QWORD *)(a1 + 16) = off_6BC9E0;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  result = *(long double *)(a2 + 32);
  *(_QWORD *)a1 = &off_6D6EB8;
  *(_QWORD *)(a1 + 16) = off_6D6EF0;
  *(long double *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 56) = &off_6D6F10;
  return result;
}

