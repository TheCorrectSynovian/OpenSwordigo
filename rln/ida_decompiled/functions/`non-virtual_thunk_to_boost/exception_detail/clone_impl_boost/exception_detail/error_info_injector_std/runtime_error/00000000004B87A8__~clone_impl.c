/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B87A8
 * Mangled: _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 9
 *   insn=0x00000000004B87B4 string=0x00000000004B87B8 "h"
 *   insn=0x00000000004B87B8 string=0x00000000004B87BC "`"
 *   insn=0x00000000004B87BC string=0x00000000004B87C0 ""
 *   insn=0x00000000004B87C0 string=0x00000000004B87C4 "A"
 *   insn=0x00000000004B87C4 string=0x00000000004B87C8 "h"
 *   insn=0x00000000004B87CC string=0x00000000004B87D0 ""
 *   insn=0x00000000004B87CC string=0x00000000004B87DC "sB"
 *   insn=0x00000000004B87D0 string=0x00000000004B87D4 ""
 *   insn=0x00000000004B87F4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
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

