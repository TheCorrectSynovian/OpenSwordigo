/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5CB4
 * Mangled: _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 9
 *   insn=0x00000000004B5CC4 string=0x00000000004B5CC8 "`"
 *   insn=0x00000000004B5CC8 string=0x00000000004B5CCC ""
 *   insn=0x00000000004B5CCC string=0x00000000004B5CD0 "A"
 *   insn=0x00000000004B5CD0 string=0x00000000004B5CD4 "h"
 *   insn=0x00000000004B5CD8 string=0x00000000004B5CDC ""
 *   insn=0x00000000004B5CD8 string=0x00000000004B5CE8 "s"
 *   insn=0x00000000004B5CDC string=0x00000000004B5CE0 ""
 *   insn=0x00000000004B5CFC string=0x00000000004B5D00 "l"
 *   insn=0x00000000004B5D00 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
        __int64 a1)
{
  __int64 v2; // x0
  std::exception *v3; // x19

  v2 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::exception *)(a1 - 56);
  sub_54A3F8(v3);
  operator delete(v3);
}

