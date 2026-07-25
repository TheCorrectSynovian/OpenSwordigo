/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245D84
 * Mangled: _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 10
 *   insn=0x0000000000245D90 string=0x0000000000245D94 "%"
 *   insn=0x0000000000245D94 string=0x0000000000245D98 "`"
 *   insn=0x0000000000245D98 string=0x0000000000245D9C ""
 *   insn=0x0000000000245D9C string=0x0000000000245DA0 "A"
 *   insn=0x0000000000245DA0 string=0x0000000000245DA4 "h"
 *   insn=0x0000000000245DA8 string=0x0000000000245DAC ""
 *   insn=0x0000000000245DA8 string=0x0000000000245DB8 "sB"
 *   insn=0x0000000000245DAC string=0x0000000000245DB0 ""
 *   insn=0x0000000000245DCC string=0x0000000000245DD0 "8"
 *   insn=0x0000000000245DD0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl(
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

