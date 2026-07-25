/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5DA0
 * Mangled: _ZThn16_N5boost16exception_detail19error_info_injectorINS_9gregorian9bad_monthEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 9
 *   insn=0x00000000004B5DB0 string=0x00000000004B5DB4 "`"
 *   insn=0x00000000004B5DB4 string=0x00000000004B5DB8 ""
 *   insn=0x00000000004B5DB8 string=0x00000000004B5DBC "A"
 *   insn=0x00000000004B5DBC string=0x00000000004B5DC0 "h"
 *   insn=0x00000000004B5DC4 string=0x00000000004B5DC8 ""
 *   insn=0x00000000004B5DC4 string=0x00000000004B5DD4 "sB"
 *   insn=0x00000000004B5DC8 string=0x00000000004B5DCC ""
 *   insn=0x00000000004B5DE8 string=0x00000000004B5DEC "1"
 *   insn=0x00000000004B5DEC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(
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

