/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B328
 * Mangled: _ZN5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEED2Ev
 * Demangled: boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *
 * Referenced strings: 8
 *   insn=0x000000000046B338 string=0x000000000046B33C "`"
 *   insn=0x000000000046B33C string=0x000000000046B340 ""
 *   insn=0x000000000046B340 string=0x000000000046B344 "A"
 *   insn=0x000000000046B344 string=0x000000000046B348 "h"
 *   insn=0x000000000046B34C string=0x000000000046B350 ""
 *   insn=0x000000000046B350 string=0x000000000046B354 ""
 *   insn=0x000000000046B364 string=0x000000000046B368 "b&"
 *   insn=0x000000000046B368 string=0x00000000001F4CF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector(
        std::bad_cast *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::bad_cast::~bad_cast(this);
}

