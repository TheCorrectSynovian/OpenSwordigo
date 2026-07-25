/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6FD8
 * Mangled: _ZThn16_N5boost16exception_detail19error_info_injectorINS_9gregorian16bad_day_of_monthEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 8
 *   insn=0x00000000004B6FE4 string=0x00000000004B6FE8 "h"
 *   insn=0x00000000004B6FE8 string=0x00000000004B6FEC "`"
 *   insn=0x00000000004B6FEC string=0x00000000004B6FF0 ""
 *   insn=0x00000000004B6FF0 string=0x00000000004B6FF4 "A"
 *   insn=0x00000000004B6FF4 string=0x00000000004B6FF8 "h"
 *   insn=0x00000000004B6FFC string=0x00000000004B7000 ""
 *   insn=0x00000000004B7000 string=0x00000000004B7004 ""
 *   insn=0x00000000004B700C string=0x00000000004B7010 "`B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A3F8((std::exception *)(a1 - 2));
}

