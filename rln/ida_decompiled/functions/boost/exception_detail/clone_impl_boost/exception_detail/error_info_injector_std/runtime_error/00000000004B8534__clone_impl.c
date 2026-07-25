/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8534
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEEC2ERKS4_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::error_info_injector<std::runtime_error> const&)
 *
 * Callers: 1
 *   0x00000000001F75E0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::error_info_injector<std::runtime_error> const&)
 *
 * Callees: 5
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054A024  sub_54A024
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 33
 *   insn=0x00000000004B8544 string=0x00000000004B8548 "h"
 *   insn=0x00000000004B8548 string=0x00000000004B854C "UE"
 *   insn=0x00000000004B8558 string=0x00000000004B855C "A"
 *   insn=0x00000000004B855C string=0x00000000004B8560 ""
 *   insn=0x00000000004B8564 string=0x00000000004B8568 "v"
 *   insn=0x00000000004B8570 string=0x00000000004B8574 "h\n"
 *   insn=0x00000000004B8578 string=0x00000000004B857C "`"
 *   insn=0x00000000004B8580 string=0x00000000004B8584 ""
 *   insn=0x00000000004B8580 string=0x00000000004B859C "wb"
 *   insn=0x00000000004B8584 string=0x00000000004B8588 "@"
 *   insn=0x00000000004B85A0 string=0x00000000004B85A4 "i"
 *   insn=0x00000000004B85A4 string=0x00000000004B85A8 ")=B"
 *   insn=0x00000000004B85A8 string=0x00000000004B85AC "h2"
 *   insn=0x00000000004B85B0 string=0x00000000004B85B4 "*A"
 *   insn=0x00000000004B85B4 string=0x00000000004B85B8 "+!"
 *   insn=0x00000000004B85B8 string=0x00000000004B85BC "("
 *   insn=0x00000000004B85BC string=0x00000000004B85C0 "j"
 *   insn=0x00000000004B85C0 string=0x00000000004B85C4 "k\n"
 *   insn=0x00000000004B85C4 string=0x00000000004B85C8 "`\n"
 *   insn=0x00000000004B85C8 string=0x00000000004B85CC "h"
 *   insn=0x00000000004B85D4 string=0x00000000004B85D8 ""
 *   insn=0x00000000004B85D8 string=0x00000000004B85DC ""
 *   insn=0x00000000004B85EC string=0x00000000004B85F0 "@"
 *   insn=0x00000000004B85FC string=0x00000000004B8600 "\t"
 *   insn=0x00000000004B8600 string=0x00000000004B8604 "j"
 *   insn=0x00000000004B8604 string=0x00000000004B8608 "I"
 *   insn=0x00000000004B860C string=0x00000000004B8610 "@"
 *   insn=0x00000000004B8644 string=0x00000000004B8648 "`"
 *   insn=0x00000000004B864C string=0x00000000004B8650 "h\n"
 *   insn=0x00000000004B8654 string=0x00000000004B8658 ""
 *   insn=0x00000000004B8658 string=0x00000000004B865C ""
 *   insn=0x00000000004B8664 string=0x00000000004B8668 "oF"
 *   insn=0x00000000004B8674 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
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
  *(_QWORD *)a1 = off_6D73A8;
  *(_QWORD *)(a1 + 16) = off_6D73E0;
  *(_OWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 56) = &off_6D7400;
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

