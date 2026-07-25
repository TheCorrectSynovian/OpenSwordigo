/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8A00
 * Mangled: _ZThn16_N5boost16exception_detail19error_info_injectorISt13runtime_errorED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 9
 *   insn=0x00000000004B8A0C string=0x00000000004B8A10 "h"
 *   insn=0x00000000004B8A10 string=0x00000000004B8A14 "`"
 *   insn=0x00000000004B8A14 string=0x00000000004B8A18 ""
 *   insn=0x00000000004B8A18 string=0x00000000004B8A1C "A"
 *   insn=0x00000000004B8A1C string=0x00000000004B8A20 "h"
 *   insn=0x00000000004B8A24 string=0x00000000004B8A28 ""
 *   insn=0x00000000004B8A28 string=0x00000000004B8A2C ""
 *   insn=0x00000000004B8A34 string=0x00000000004B8A38 "`B"
 *   insn=0x00000000004B8A3C string=0x00000000004B8A40 "yE"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A024((std::exception *)(a1 - 2));
}

