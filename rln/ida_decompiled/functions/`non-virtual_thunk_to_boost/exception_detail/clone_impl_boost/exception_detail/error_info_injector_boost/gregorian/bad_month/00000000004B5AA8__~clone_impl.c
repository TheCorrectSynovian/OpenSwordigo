/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5AA8
 * Mangled: _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl()
 *
 * Callers: 1
 *   0x00000000004B5A58  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow(void)
 *
 * Callees: 1
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 8
 *   insn=0x00000000004B5AB8 string=0x00000000004B5ABC "`"
 *   insn=0x00000000004B5ABC string=0x00000000004B5AC0 ""
 *   insn=0x00000000004B5AC0 string=0x00000000004B5AC4 "A"
 *   insn=0x00000000004B5AC4 string=0x00000000004B5AC8 "h"
 *   insn=0x00000000004B5ACC string=0x00000000004B5AD0 ""
 *   insn=0x00000000004B5AD0 string=0x00000000004B5AD4 ""
 *   insn=0x00000000004B5ADC string=0x00000000004B5AE0 "`B"
 *   insn=0x00000000004B5AE4 string=0x00000000004B5AE8 "DR"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A3F8((std::exception *)(a1 - 2));
}

