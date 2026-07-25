/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6EEC
 * Mangled: _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian16bad_day_of_monthEEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl()
 *
 * Callers: 1
 *   0x00000000004B6E9C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow(void)
 *
 * Callees: 1
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 9
 *   insn=0x00000000004B6EF8 string=0x00000000004B6EFC "h"
 *   insn=0x00000000004B6EFC string=0x00000000004B6F00 "`"
 *   insn=0x00000000004B6F00 string=0x00000000004B6F04 ""
 *   insn=0x00000000004B6F04 string=0x00000000004B6F08 "A"
 *   insn=0x00000000004B6F08 string=0x00000000004B6F0C "h"
 *   insn=0x00000000004B6F10 string=0x00000000004B6F14 ""
 *   insn=0x00000000004B6F14 string=0x00000000004B6F18 ""
 *   insn=0x00000000004B6F20 string=0x00000000004B6F24 "`"
 *   insn=0x00000000004B6F28 string=0x00000000004B6F2C "3M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(
        __int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A3F8((std::exception *)(a1 - 56));
}

