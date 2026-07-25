/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B586C
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEEC2ERKS5_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_month> const&)
 *
 * Callers: 1
 *   0x00000000001F4420  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_month> const&)
 *
 * Callees: 5
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x00000000004B5880 string=0x00000000004B5884 ""
 *   insn=0x00000000004B5890 string=0x00000000004B5894 "A"
 *   insn=0x00000000004B5894 string=0x00000000004B5898 ""
 *   insn=0x00000000004B5898 string=0x00000000004B589C "#"
 *   insn=0x00000000004B58A4 string=0x00000000004B58A8 "eB"
 *   insn=0x00000000004B58AC string=0x00000000004B58B0 "A"
 *   insn=0x00000000004B58B4 string=0x00000000004B58B8 "h"
 *   insn=0x00000000004B58B8 string=0x00000000004B58BC "i\n"
 *   insn=0x00000000004B58C0 string=0x00000000004B58C4 "`"
 *   insn=0x00000000004B58C8 string=0x00000000004B58CC ""
 *   insn=0x00000000004B58C8 string=0x00000000004B58E4 "wb"
 *   insn=0x00000000004B58CC string=0x00000000004B58D0 "@"
 *   insn=0x00000000004B58EC string=0x00000000004B58F0 ")"
 *   insn=0x00000000004B58F0 string=0x00000000004B58F4 "h2"
 *   insn=0x00000000004B58F8 string=0x00000000004B58FC "*A"
 *   insn=0x00000000004B58FC string=0x00000000004B5900 "+!"
 *   insn=0x00000000004B5900 string=0x00000000004B5904 "("
 *   insn=0x00000000004B5904 string=0x00000000004B5908 "j"
 *   insn=0x00000000004B5908 string=0x00000000004B590C "k\n"
 *   insn=0x00000000004B590C string=0x00000000004B5910 "`\n"
 *   insn=0x00000000004B5910 string=0x00000000004B5914 "h"
 *   insn=0x00000000004B591C string=0x00000000004B5920 ""
 *   insn=0x00000000004B5920 string=0x00000000004B5924 ""
 *   insn=0x00000000004B5934 string=0x00000000004B5938 "@"
 *   insn=0x00000000004B5944 string=0x00000000004B5948 "\t"
 *   insn=0x00000000004B5948 string=0x00000000004B594C "j"
 *   insn=0x00000000004B594C string=0x00000000004B5950 "I"
 *   insn=0x00000000004B5954 string=0x00000000004B5958 "@"
 *   insn=0x00000000004B598C string=0x00000000004B5990 "`"
 *   insn=0x00000000004B5994 string=0x00000000004B5998 "h\n"
 *   insn=0x00000000004B599C string=0x00000000004B59A0 ""
 *   insn=0x00000000004B59A0 string=0x00000000004B59A4 ""
 *   insn=0x00000000004B59B8 string=0x00000000004B59BC "1\n"
 *   insn=0x00000000004B59BC string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
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
  *(_QWORD *)a1 = &off_6D6F88;
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
  *(_QWORD *)a1 = &off_6D6EB8;
  *(_QWORD *)(a1 + 16) = off_6D6EF0;
  *(_OWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 56) = &off_6D6F10;
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

