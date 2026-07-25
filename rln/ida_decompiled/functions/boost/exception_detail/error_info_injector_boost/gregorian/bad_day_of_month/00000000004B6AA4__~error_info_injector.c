/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6AA4
 * Mangled: _ZN5boost16exception_detail19error_info_injectorINS_9gregorian16bad_day_of_monthEED2Ev
 * Demangled: boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 8
 *   insn=0x00000000004B6AB0 string=0x00000000004B6AB4 "h"
 *   insn=0x00000000004B6AB4 string=0x00000000004B6AB8 "`"
 *   insn=0x00000000004B6AB8 string=0x00000000004B6ABC ""
 *   insn=0x00000000004B6ABC string=0x00000000004B6AC0 "A"
 *   insn=0x00000000004B6AC0 string=0x00000000004B6AC4 "h\n"
 *   insn=0x00000000004B6AC8 string=0x00000000004B6ACC ""
 *   insn=0x00000000004B6ACC string=0x00000000004B6AD0 ""
 *   insn=0x00000000004B6AE0 string=0x00000000004B6AE4 "EN"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 2) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A3F8(this);
}

