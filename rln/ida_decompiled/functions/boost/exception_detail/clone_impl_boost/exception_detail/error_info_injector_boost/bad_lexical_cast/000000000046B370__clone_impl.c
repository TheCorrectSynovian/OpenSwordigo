/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B370
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEC2ERKS4_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_lexical_cast> const&)
 *
 * Callers: 1
 *   0x0000000000202070  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_lexical_cast> const&)
 *
 * Callees: 3
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x000000000046B384 string=0x000000000046B388 ""
 *   insn=0x000000000046B394 string=0x000000000046B398 "A"
 *   insn=0x000000000046B398 string=0x000000000046B39C "h"
 *   insn=0x000000000046B3A4 string=0x000000000046B3A8 "`"
 *   insn=0x000000000046B3AC string=0x000000000046B3B0 "h"
 *   insn=0x000000000046B3B4 string=0x000000000046B3B8 "`"
 *   insn=0x000000000046B3BC string=0x000000000046B3C0 ""
 *   insn=0x000000000046B3BC string=0x000000000046B3D8 "w"
 *   insn=0x000000000046B3C0 string=0x000000000046B3C4 "@"
 *   insn=0x000000000046B3E0 string=0x000000000046B3E4 ")"
 *   insn=0x000000000046B3E4 string=0x000000000046B3E8 "h:"
 *   insn=0x000000000046B3EC string=0x000000000046B3F0 "*A"
 *   insn=0x000000000046B3F0 string=0x000000000046B3F4 "+!"
 *   insn=0x000000000046B3F4 string=0x000000000046B3F8 "("
 *   insn=0x000000000046B3F8 string=0x000000000046B3FC "j"
 *   insn=0x000000000046B3FC string=0x000000000046B400 "k"
 *   insn=0x000000000046B400 string=0x000000000046B404 "`"
 *   insn=0x000000000046B404 string=0x000000000046B408 "h""
 *   insn=0x000000000046B410 string=0x000000000046B414 ""
 *   insn=0x000000000046B414 string=0x000000000046B418 ""
 *   insn=0x000000000046B428 string=0x000000000046B42C "@"
 *   insn=0x000000000046B438 string=0x000000000046B43C "\t"
 *   insn=0x000000000046B43C string=0x000000000046B440 "j"
 *   insn=0x000000000046B440 string=0x000000000046B444 "I"
 *   insn=0x000000000046B448 string=0x000000000046B44C "@"
 *   insn=0x000000000046B464 string=0x000000000046B468 "\t"
 *   insn=0x000000000046B46C string=0x000000000046B470 "`"
 *   insn=0x000000000046B474 string=0x000000000046B478 "h"
 *   insn=0x000000000046B47C string=0x000000000046B480 ""
 *   insn=0x000000000046B480 string=0x000000000046B484 ""
 *   insn=0x000000000046B490 string=0x00000000001F4CF0 "P'"
 *   insn=0x000000000046B494 string=0x000000000046B498 "Y"
 *   insn=0x000000000046B498 string=0x000000000046B49C "y3"
 *   insn=0x000000000046B49C string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // x0
  _QWORD *v5; // x23
  __int128 v6; // q0
  __int64 v7; // x21
  long double result; // q0

  *(_QWORD *)a1 = off_6D4C58;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = off_6BC9E0;
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 32) = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    v5 = (_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v5 = (_QWORD *)(a1 + 32);
  }
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  v6 = *(_OWORD *)(a2 + 40);
  *(_QWORD *)a1 = off_6D4B88;
  *(_QWORD *)(a1 + 24) = off_6D4BC0;
  *(_OWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 64) = &off_6D4BE0;
  v7 = *(_QWORD *)(a2 + 32);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  *v5 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  result = *(long double *)(a2 + 40);
  *(long double *)(a1 + 40) = result;
  return result;
}

