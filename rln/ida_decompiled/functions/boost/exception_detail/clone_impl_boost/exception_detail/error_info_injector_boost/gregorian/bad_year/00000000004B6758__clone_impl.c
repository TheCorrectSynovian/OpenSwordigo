/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6758
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEEC2ERKS6_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> const&)
 *
 * Callers: 1
 *   0x00000000002016D0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> const&)
 *
 * Callees: 5
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000004B6820  boost::throw_exception<boost::gregorian::bad_day_of_month>(boost::gregorian::bad_day_of_month const&)
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x00000000004B6760 string=0x00000000004B6764 "h"
 *   insn=0x00000000004B6764 string=0x00000000004B6768 ""
 *   insn=0x00000000004B6774 string=0x00000000004B6778 "A"
 *   insn=0x00000000004B6778 string=0x00000000004B677C ""
 *   insn=0x00000000004B677C string=0x00000000004B6780 "j"
 *   insn=0x00000000004B6784 string=0x00000000004B6788 "i"
 *   insn=0x00000000004B6788 string=0x00000000004B678C "5C"
 *   insn=0x00000000004B678C string=0x00000000004B6790 ")"
 *   insn=0x00000000004B6790 string=0x00000000004B6794 "A"
 *   insn=0x00000000004B6794 string=0x00000000004B6798 ")A"
 *   insn=0x00000000004B6798 string=0x00000000004B679C "h"
 *   insn=0x00000000004B679C string=0x00000000004B67A0 "i\n"
 *   insn=0x00000000004B67A4 string=0x00000000004B67A8 "`"
 *   insn=0x00000000004B67AC string=0x00000000004B67B0 ""
 *   insn=0x00000000004B67B0 string=0x00000000004B67B4 "@"
 *   insn=0x00000000004B67C0 string=0x00000000004B67C4 ")=F"
 *   insn=0x00000000004B67C4 string=0x00000000004B67C8 "h2"
 *   insn=0x00000000004B67CC string=0x00000000004B67D0 "*A"
 *   insn=0x00000000004B67D0 string=0x00000000004B67D4 "+!"
 *   insn=0x00000000004B67D4 string=0x00000000004B67D8 "("
 *   insn=0x00000000004B67D8 string=0x00000000004B67DC "j"
 *   insn=0x00000000004B67DC string=0x00000000004B67E0 "k\n"
 *   insn=0x00000000004B67E0 string=0x00000000004B67E4 "`\n"
 *   insn=0x00000000004B67E4 string=0x00000000004B67E8 "h"
 *   insn=0x00000000004B6804 string=0x00000000004B6808 "/,"
 *   insn=0x00000000004B6818 string=0x00000000004B681C "*,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // x0
  long double result; // q0

  *(_QWORD *)a1 = off_6B7560;
  sub_56A528(a1 + 8, a2 + 8);
  *(_QWORD *)a1 = &off_6D7118;
  *(_QWORD *)(a1 + 16) = off_6BC9E0;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  result = *(long double *)(a2 + 32);
  *(_QWORD *)a1 = &off_6D7048;
  *(_QWORD *)(a1 + 16) = off_6D7080;
  *(long double *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 56) = &off_6D70A0;
  return result;
}

