/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5C6C
 * Mangled: _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl()
 *
 * Callers: 1
 *   0x00000000004B5C1C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow(void)
 *
 * Callees: 1
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 7
 *   insn=0x00000000004B5C7C string=0x00000000004B5C80 "`"
 *   insn=0x00000000004B5C80 string=0x00000000004B5C84 ""
 *   insn=0x00000000004B5C84 string=0x00000000004B5C88 "A"
 *   insn=0x00000000004B5C88 string=0x00000000004B5C8C "h"
 *   insn=0x00000000004B5C90 string=0x00000000004B5C94 ""
 *   insn=0x00000000004B5C94 string=0x00000000004B5C98 ""
 *   insn=0x00000000004B5CA0 string=0x00000000004B5CA4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
        __int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A3F8((std::exception *)(a1 - 56));
}

