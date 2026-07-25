/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6D28
 * Mangled: _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian16bad_day_of_monthEEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl()
 *
 * Callers: 1
 *   0x00000000004B6CD8  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow(void)
 *
 * Callees: 1
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 8
 *   insn=0x00000000004B6D34 string=0x00000000004B6D38 "h"
 *   insn=0x00000000004B6D38 string=0x00000000004B6D3C "`"
 *   insn=0x00000000004B6D3C string=0x00000000004B6D40 ""
 *   insn=0x00000000004B6D40 string=0x00000000004B6D44 "A"
 *   insn=0x00000000004B6D44 string=0x00000000004B6D48 "h"
 *   insn=0x00000000004B6D4C string=0x00000000004B6D50 ""
 *   insn=0x00000000004B6D50 string=0x00000000004B6D54 ""
 *   insn=0x00000000004B6D5C string=0x00000000004B6D60 "`B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A3F8((std::exception *)(a1 - 2));
}

