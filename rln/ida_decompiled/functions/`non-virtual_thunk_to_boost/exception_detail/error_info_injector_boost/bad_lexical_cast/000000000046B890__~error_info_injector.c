/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B890
 * Mangled: _ZThn24_N5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *
 * Referenced strings: 9
 *   insn=0x000000000046B8A0 string=0x000000000046B8A4 "`"
 *   insn=0x000000000046B8A4 string=0x000000000046B8A8 ""
 *   insn=0x000000000046B8A8 string=0x000000000046B8AC "A"
 *   insn=0x000000000046B8AC string=0x000000000046B8B0 "h"
 *   insn=0x000000000046B8B4 string=0x000000000046B8B8 ""
 *   insn=0x000000000046B8B8 string=0x000000000046B8BC ""
 *   insn=0x000000000046B8C4 string=0x000000000046B8C8 "`b"
 *   insn=0x000000000046B8CC string=0x000000000046B8D0 "%"
 *   insn=0x000000000046B8D0 string=0x00000000001F4CF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::bad_cast::~bad_cast((std::bad_cast *)(a1 - 3));
}

