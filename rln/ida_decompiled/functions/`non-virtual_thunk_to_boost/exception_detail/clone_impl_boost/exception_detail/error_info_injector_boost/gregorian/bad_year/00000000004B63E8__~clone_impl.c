/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B63E8
 * Mangled: _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl()
 *
 * Callers: 1
 *   0x00000000004B6398  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow(void)
 *
 * Callees: 1
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 8
 *   insn=0x00000000004B63F4 string=0x00000000004B63F8 "h"
 *   insn=0x00000000004B63F8 string=0x00000000004B63FC "`"
 *   insn=0x00000000004B63FC string=0x00000000004B6400 ""
 *   insn=0x00000000004B6400 string=0x00000000004B6404 "A"
 *   insn=0x00000000004B6404 string=0x00000000004B6408 "h"
 *   insn=0x00000000004B640C string=0x00000000004B6410 ""
 *   insn=0x00000000004B6410 string=0x00000000004B6414 ""
 *   insn=0x00000000004B641C string=0x00000000004B6420 "`B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A3F8((std::exception *)(a1 - 2));
}

