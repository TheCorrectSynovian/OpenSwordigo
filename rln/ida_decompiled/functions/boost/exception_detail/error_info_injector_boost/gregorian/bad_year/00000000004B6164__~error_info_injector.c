/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6164
 * Mangled: _ZN5boost16exception_detail19error_info_injectorINS_9gregorian8bad_yearEED2Ev
 * Demangled: boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 7
 *   insn=0x00000000004B6170 string=0x00000000004B6174 "h"
 *   insn=0x00000000004B6174 string=0x00000000004B6178 "`"
 *   insn=0x00000000004B6178 string=0x00000000004B617C ""
 *   insn=0x00000000004B617C string=0x00000000004B6180 "A"
 *   insn=0x00000000004B6180 string=0x00000000004B6184 "h\n"
 *   insn=0x00000000004B6188 string=0x00000000004B618C ""
 *   insn=0x00000000004B618C string=0x00000000004B6190 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 2) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A3F8(this);
}

