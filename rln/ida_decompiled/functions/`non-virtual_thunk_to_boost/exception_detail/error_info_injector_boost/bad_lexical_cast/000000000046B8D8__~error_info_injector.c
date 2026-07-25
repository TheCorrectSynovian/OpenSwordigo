/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B8D8
 * Mangled: _ZThn24_N5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 10
 *   insn=0x000000000046B8E8 string=0x000000000046B8EC "`"
 *   insn=0x000000000046B8EC string=0x000000000046B8F0 ""
 *   insn=0x000000000046B8F0 string=0x000000000046B8F4 "A"
 *   insn=0x000000000046B8F4 string=0x000000000046B8F8 "h"
 *   insn=0x000000000046B8FC string=0x000000000046B900 ""
 *   insn=0x000000000046B8FC string=0x000000000046B90C "sb"
 *   insn=0x000000000046B900 string=0x000000000046B904 ""
 *   insn=0x000000000046B914 string=0x00000000001F4CF0 "P'"
 *   insn=0x000000000046B920 string=0x000000000046B924 "c."
 *   insn=0x000000000046B924 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector(
        _QWORD *a1)
{
  __int64 v2; // x0
  std::bad_cast *v3; // x19

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::bad_cast *)(a1 - 3);
  std::bad_cast::~bad_cast(v3);
  operator delete(v3);
}

