/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8760
 * Mangled: _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *
 * Callers: 1
 *   0x00000000004B8710  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(void)
 *
 * Callees: 1
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 9
 *   insn=0x00000000004B876C string=0x00000000004B8770 "h"
 *   insn=0x00000000004B8770 string=0x00000000004B8774 "`"
 *   insn=0x00000000004B8774 string=0x00000000004B8778 ""
 *   insn=0x00000000004B8778 string=0x00000000004B877C "A"
 *   insn=0x00000000004B877C string=0x00000000004B8780 "h"
 *   insn=0x00000000004B8784 string=0x00000000004B8788 ""
 *   insn=0x00000000004B8788 string=0x00000000004B878C ""
 *   insn=0x00000000004B8794 string=0x00000000004B8798 "`B"
 *   insn=0x00000000004B879C string=0x00000000004B87A0 "!F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A024((std::exception *)(a1 - 2));
}

