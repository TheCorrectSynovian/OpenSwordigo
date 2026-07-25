/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245F00
 * Mangled: _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl()
 *
 * Callers: 1
 *   0x0000000000245EB0  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow(void)
 *
 * Callees: 1
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 9
 *   insn=0x0000000000245F0C string=0x0000000000245F10 "%"
 *   insn=0x0000000000245F10 string=0x0000000000245F14 "`"
 *   insn=0x0000000000245F14 string=0x0000000000245F18 ""
 *   insn=0x0000000000245F18 string=0x0000000000245F1C "A"
 *   insn=0x0000000000245F1C string=0x0000000000245F20 "h"
 *   insn=0x0000000000245F24 string=0x0000000000245F28 ""
 *   insn=0x0000000000245F28 string=0x0000000000245F2C ""
 *   insn=0x0000000000245F34 string=0x0000000000245F38 "`"
 *   insn=0x0000000000245F3C string=0x0000000000245F40 "9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl(
        __int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A024((std::exception *)(a1 - 56));
}

