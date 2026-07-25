/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245B00
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEEC2ERKS4_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_function_call> const&)
 *
 * Callers: 1
 *   0x0000000000202CA0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_function_call> const&)
 *
 * Callees: 5
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054A024  sub_54A024
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 35
 *   insn=0x0000000000245B14 string=0x0000000000245B18 "UE"
 *   insn=0x0000000000245B24 string=0x0000000000245B28 "A"
 *   insn=0x0000000000245B28 string=0x0000000000245B2C ""
 *   insn=0x0000000000245B2C string=0x0000000000245B30 "~"
 *   insn=0x0000000000245B30 string=0x0000000000245B34 "%"
 *   insn=0x0000000000245B38 string=0x0000000000245B3C ""
 *   insn=0x0000000000245B40 string=0x0000000000245B44 "A"
 *   insn=0x0000000000245B48 string=0x0000000000245B4C "h"
 *   insn=0x0000000000245B4C string=0x0000000000245B50 "i\n"
 *   insn=0x0000000000245B54 string=0x0000000000245B58 "`"
 *   insn=0x0000000000245B5C string=0x0000000000245B60 ""
 *   insn=0x0000000000245B5C string=0x0000000000245B78 "wb"
 *   insn=0x0000000000245B60 string=0x0000000000245B64 "@"
 *   insn=0x0000000000245B80 string=0x0000000000245B84 ")"
 *   insn=0x0000000000245B84 string=0x0000000000245B88 "h2"
 *   insn=0x0000000000245B8C string=0x0000000000245B90 "*A"
 *   insn=0x0000000000245B90 string=0x0000000000245B94 "+!"
 *   insn=0x0000000000245B94 string=0x0000000000245B98 "("
 *   insn=0x0000000000245B98 string=0x0000000000245B9C "j"
 *   insn=0x0000000000245B9C string=0x0000000000245BA0 "k\n"
 *   insn=0x0000000000245BA0 string=0x0000000000245BA4 "`\n"
 *   insn=0x0000000000245BA4 string=0x0000000000245BA8 "h"
 *   insn=0x0000000000245BB0 string=0x0000000000245BB4 ""
 *   insn=0x0000000000245BB4 string=0x0000000000245BB8 ""
 *   insn=0x0000000000245BC8 string=0x0000000000245BCC "@"
 *   insn=0x0000000000245BD8 string=0x0000000000245BDC "\t"
 *   insn=0x0000000000245BDC string=0x0000000000245BE0 "j"
 *   insn=0x0000000000245BE0 string=0x0000000000245BE4 "I"
 *   insn=0x0000000000245BE8 string=0x0000000000245BEC "@"
 *   insn=0x0000000000245C18 string=0x0000000000245C1C "*"
 *   insn=0x0000000000245C20 string=0x0000000000245C24 "`"
 *   insn=0x0000000000245C28 string=0x0000000000245C2C "h\n"
 *   insn=0x0000000000245C30 string=0x0000000000245C34 ""
 *   insn=0x0000000000245C34 string=0x0000000000245C38 ""
 *   insn=0x0000000000245C50 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // x0
  _QWORD *v5; // x23
  __int128 v6; // q0
  __int64 v7; // x21
  long double result; // q0

  *(_QWORD *)a1 = off_6B7650;
  sub_56A528(a1 + 8, a2 + 8);
  *(_QWORD *)a1 = &off_6BC9B8;
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
  *(_QWORD *)a1 = &off_6BC8E8;
  *(_QWORD *)(a1 + 16) = off_6BC920;
  *(_OWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 56) = &off_6BC940;
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

