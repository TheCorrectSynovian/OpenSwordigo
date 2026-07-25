/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B65AC
 * Mangled: _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl()
 *
 * Callers: 1
 *   0x00000000004B655C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow(void)
 *
 * Callees: 1
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 8
 *   insn=0x00000000004B65B8 string=0x00000000004B65BC "h"
 *   insn=0x00000000004B65BC string=0x00000000004B65C0 "`"
 *   insn=0x00000000004B65C0 string=0x00000000004B65C4 ""
 *   insn=0x00000000004B65C4 string=0x00000000004B65C8 "A"
 *   insn=0x00000000004B65C8 string=0x00000000004B65CC "h"
 *   insn=0x00000000004B65D0 string=0x00000000004B65D4 ""
 *   insn=0x00000000004B65D4 string=0x00000000004B65D8 ""
 *   insn=0x00000000004B65E0 string=0x00000000004B65E4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
        __int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A3F8((std::exception *)(a1 - 56));
}

