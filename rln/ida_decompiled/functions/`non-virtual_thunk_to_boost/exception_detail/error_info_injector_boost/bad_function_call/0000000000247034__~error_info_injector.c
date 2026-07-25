/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000247034
 * Mangled: _ZThn16_N5boost16exception_detail19error_info_injectorINS_17bad_function_callEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector()
 *
 * Callers: 1
 *   0x0000000000245FEC  `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector()
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 8
 *   insn=0x0000000000247044 string=0x0000000000247048 "`"
 *   insn=0x0000000000247048 string=0x000000000024704C ""
 *   insn=0x000000000024704C string=0x0000000000247050 "A"
 *   insn=0x0000000000247050 string=0x0000000000247054 "h"
 *   insn=0x0000000000247058 string=0x000000000024705C ""
 *   insn=0x0000000000247058 string=0x0000000000247068 "sB"
 *   insn=0x000000000024705C string=0x0000000000247060 ""
 *   insn=0x0000000000247080 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector(
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

