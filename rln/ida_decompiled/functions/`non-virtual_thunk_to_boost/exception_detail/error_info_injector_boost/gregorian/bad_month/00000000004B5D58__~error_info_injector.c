/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5D58
 * Mangled: _ZThn16_N5boost16exception_detail19error_info_injectorINS_9gregorian9bad_monthEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 7
 *   insn=0x00000000004B5D68 string=0x00000000004B5D6C "`"
 *   insn=0x00000000004B5D6C string=0x00000000004B5D70 ""
 *   insn=0x00000000004B5D70 string=0x00000000004B5D74 "A"
 *   insn=0x00000000004B5D74 string=0x00000000004B5D78 "h"
 *   insn=0x00000000004B5D7C string=0x00000000004B5D80 ""
 *   insn=0x00000000004B5D80 string=0x00000000004B5D84 ""
 *   insn=0x00000000004B5D8C string=0x00000000004B5D90 "`B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A3F8((std::exception *)(a1 - 2));
}

