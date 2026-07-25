/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6AEC
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian16bad_day_of_monthEEEEC2ERKS5_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> const&)
 *
 * Callers: 1
 *   0x0000000000202C00  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> const&)
 *
 * Callees: 5
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x00000000004B6AFC string=0x00000000004B6B00 "h"
 *   insn=0x00000000004B6B00 string=0x00000000004B6B04 ""
 *   insn=0x00000000004B6B10 string=0x00000000004B6B14 "A"
 *   insn=0x00000000004B6B14 string=0x00000000004B6B18 ""
 *   insn=0x00000000004B6B1C string=0x00000000004B6B20 "h"
 *   insn=0x00000000004B6B20 string=0x00000000004B6B24 "v"
 *   insn=0x00000000004B6B24 string=0x00000000004B6B28 "mC"
 *   insn=0x00000000004B6B2C string=0x00000000004B6B30 "A"
 *   insn=0x00000000004B6B34 string=0x00000000004B6B38 "h"
 *   insn=0x00000000004B6B38 string=0x00000000004B6B3C "i\n"
 *   insn=0x00000000004B6B40 string=0x00000000004B6B44 "`"
 *   insn=0x00000000004B6B48 string=0x00000000004B6B4C ""
 *   insn=0x00000000004B6B48 string=0x00000000004B6B64 "wb"
 *   insn=0x00000000004B6B4C string=0x00000000004B6B50 "@"
 *   insn=0x00000000004B6B6C string=0x00000000004B6B70 ")"
 *   insn=0x00000000004B6B70 string=0x00000000004B6B74 "h2"
 *   insn=0x00000000004B6B78 string=0x00000000004B6B7C "*A"
 *   insn=0x00000000004B6B7C string=0x00000000004B6B80 "+!"
 *   insn=0x00000000004B6B80 string=0x00000000004B6B84 "("
 *   insn=0x00000000004B6B84 string=0x00000000004B6B88 "j"
 *   insn=0x00000000004B6B88 string=0x00000000004B6B8C "k\n"
 *   insn=0x00000000004B6B8C string=0x00000000004B6B90 "`\n"
 *   insn=0x00000000004B6B90 string=0x00000000004B6B94 "h"
 *   insn=0x00000000004B6B9C string=0x00000000004B6BA0 ""
 *   insn=0x00000000004B6BA0 string=0x00000000004B6BA4 ""
 *   insn=0x00000000004B6BB4 string=0x00000000004B6BB8 "@"
 *   insn=0x00000000004B6BC4 string=0x00000000004B6BC8 "\t"
 *   insn=0x00000000004B6BC8 string=0x00000000004B6BCC "j"
 *   insn=0x00000000004B6BCC string=0x00000000004B6BD0 "I"
 *   insn=0x00000000004B6BD4 string=0x00000000004B6BD8 "@"
 *   insn=0x00000000004B6C04 string=0x00000000004B6C08 "/+"
 *   insn=0x00000000004B6C0C string=0x00000000004B6C10 "`"
 *   insn=0x00000000004B6C14 string=0x00000000004B6C18 "h\n"
 *   insn=0x00000000004B6C1C string=0x00000000004B6C20 ""
 *   insn=0x00000000004B6C20 string=0x00000000004B6C24 ""
 *   insn=0x00000000004B6C34 string=0x00000000004B6C38 "#+"
 *   insn=0x00000000004B6C3C string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // x0
  _QWORD *v5; // x23
  __int128 v6; // q0
  __int64 v7; // x21
  long double result; // q0

  *(_QWORD *)a1 = off_6B7560;
  sub_56A528(a1 + 8, a2 + 8);
  *(_QWORD *)a1 = &off_6D72A8;
  *(_QWORD *)(a1 + 16) = off_6BC9E0;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    v5 = (_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v5 = (_QWORD *)(a1 + 24);
  }
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  v6 = *(_OWORD *)(a2 + 32);
  *(_QWORD *)a1 = &off_6D71D8;
  *(_QWORD *)(a1 + 16) = off_6D7210;
  *(_OWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 56) = &off_6D7230;
  v7 = *(_QWORD *)(a2 + 24);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  *v5 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  result = *(long double *)(a2 + 32);
  *(long double *)(a1 + 32) = result;
  return result;
}

