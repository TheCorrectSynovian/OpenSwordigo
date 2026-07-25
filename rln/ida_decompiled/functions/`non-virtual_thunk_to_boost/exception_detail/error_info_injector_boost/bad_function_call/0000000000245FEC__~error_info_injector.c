/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245FEC
 * Mangled: _ZThn16_N5boost16exception_detail19error_info_injectorINS_17bad_function_callEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x0000000000247034  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector()
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 10
 *   insn=0x0000000000245FF8 string=0x0000000000245FFC "%"
 *   insn=0x0000000000245FFC string=0x0000000000246000 "`"
 *   insn=0x0000000000246000 string=0x0000000000246004 ""
 *   insn=0x0000000000246004 string=0x0000000000246038 ""
 *   insn=0x0000000000246008 string=0x000000000024600C "h"
 *   insn=0x0000000000246010 string=0x0000000000246014 ""
 *   insn=0x0000000000246014 string=0x0000000000246018 ""
 *   insn=0x0000000000246020 string=0x0000000000246024 "`B"
 *   insn=0x0000000000246030 string=0x00000000001F8280 "0'"
 *   insn=0x000000000024603C string=0x0000000000246008 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A024((std::exception *)(a1 - 2));
}

