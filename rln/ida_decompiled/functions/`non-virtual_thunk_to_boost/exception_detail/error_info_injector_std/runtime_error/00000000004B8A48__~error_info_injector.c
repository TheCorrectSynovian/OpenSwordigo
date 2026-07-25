/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8A48
 * Mangled: _ZThn16_N5boost16exception_detail19error_info_injectorISt13runtime_errorED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 11
 *   insn=0x00000000004B8A54 string=0x00000000004B8A58 "h"
 *   insn=0x00000000004B8A58 string=0x00000000004B8A5C "`"
 *   insn=0x00000000004B8A5C string=0x00000000004B8A60 ""
 *   insn=0x00000000004B8A60 string=0x00000000004B8A64 "A"
 *   insn=0x00000000004B8A64 string=0x00000000004B8A68 "h"
 *   insn=0x00000000004B8A6C string=0x00000000004B8A70 ""
 *   insn=0x00000000004B8A6C string=0x00000000004B8A7C "sB"
 *   insn=0x00000000004B8A70 string=0x00000000004B8A74 ""
 *   insn=0x00000000004B8A80 string=0x00000000004B8A84 "hE"
 *   insn=0x00000000004B8A90 string=0x00000000004B8A94 ""
 *   insn=0x00000000004B8A94 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(
        _QWORD *a1)
{
  __int64 v2; // x0
  std::exception *v3; // x19

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::exception *)(a1 - 2);
  sub_54A024(v3);
  operator delete(v3);
}

