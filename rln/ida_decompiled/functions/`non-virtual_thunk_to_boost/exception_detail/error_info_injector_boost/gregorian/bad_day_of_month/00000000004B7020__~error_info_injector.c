/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B7020
 * Mangled: _ZThn16_N5boost16exception_detail19error_info_injectorINS_9gregorian16bad_day_of_monthEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 9
 *   insn=0x00000000004B702C string=0x00000000004B7030 "h"
 *   insn=0x00000000004B7030 string=0x00000000004B7034 "`"
 *   insn=0x00000000004B7034 string=0x00000000004B7038 ""
 *   insn=0x00000000004B7038 string=0x00000000004B703C "A"
 *   insn=0x00000000004B703C string=0x00000000004B7040 "h"
 *   insn=0x00000000004B7044 string=0x00000000004B7048 ""
 *   insn=0x00000000004B7044 string=0x00000000004B7054 "sB"
 *   insn=0x00000000004B7048 string=0x00000000004B704C ""
 *   insn=0x00000000004B706C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(
        _QWORD *a1)
{
  __int64 v2; // x0
  std::exception *v3; // x19

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::exception *)(a1 - 2);
  sub_54A3F8(v3);
  operator delete(v3);
}

