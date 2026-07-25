/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245F48
 * Mangled: _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 10
 *   insn=0x0000000000245F54 string=0x0000000000245F58 "%"
 *   insn=0x0000000000245F58 string=0x0000000000245F5C "`"
 *   insn=0x0000000000245F5C string=0x0000000000245F60 ""
 *   insn=0x0000000000245F60 string=0x0000000000245F64 "A"
 *   insn=0x0000000000245F64 string=0x0000000000245F68 "h"
 *   insn=0x0000000000245F6C string=0x0000000000245F70 ""
 *   insn=0x0000000000245F6C string=0x0000000000245F7C "s"
 *   insn=0x0000000000245F70 string=0x0000000000245F74 ""
 *   insn=0x0000000000245F80 string=0x0000000000245F84 "("
 *   insn=0x0000000000245F94 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl(
        __int64 a1)
{
  __int64 v2; // x0
  std::exception *v3; // x19

  v2 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::exception *)(a1 - 56);
  sub_54A024(v3);
  operator delete(v3);
}

