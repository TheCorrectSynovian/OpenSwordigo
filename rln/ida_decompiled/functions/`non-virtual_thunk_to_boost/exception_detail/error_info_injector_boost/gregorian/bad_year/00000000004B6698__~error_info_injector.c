/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6698
 * Mangled: _ZThn16_N5boost16exception_detail19error_info_injectorINS_9gregorian8bad_yearEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 9
 *   insn=0x00000000004B66A4 string=0x00000000004B66A8 "h"
 *   insn=0x00000000004B66A8 string=0x00000000004B66AC "`"
 *   insn=0x00000000004B66AC string=0x00000000004B66B0 ""
 *   insn=0x00000000004B66B0 string=0x00000000004B66B4 "A"
 *   insn=0x00000000004B66B4 string=0x00000000004B66B8 "h"
 *   insn=0x00000000004B66BC string=0x00000000004B66C0 ""
 *   insn=0x00000000004B66C0 string=0x00000000004B66C4 ""
 *   insn=0x00000000004B66CC string=0x00000000004B66D0 "`B"
 *   insn=0x00000000004B66D4 string=0x00000000004B66D8 "HO"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A3F8((std::exception *)(a1 - 2));
}

