/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6D70
 * Mangled: _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian16bad_day_of_monthEEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 10
 *   insn=0x00000000004B6D7C string=0x00000000004B6D80 "h"
 *   insn=0x00000000004B6D80 string=0x00000000004B6D84 "`"
 *   insn=0x00000000004B6D84 string=0x00000000004B6D88 ""
 *   insn=0x00000000004B6D88 string=0x00000000004B6D8C "A"
 *   insn=0x00000000004B6D8C string=0x00000000004B6D90 "h"
 *   insn=0x00000000004B6D94 string=0x00000000004B6D98 ""
 *   insn=0x00000000004B6D94 string=0x00000000004B6DA4 "sB"
 *   insn=0x00000000004B6D98 string=0x00000000004B6D9C ""
 *   insn=0x00000000004B6DB8 string=0x00000000004B6DBC "="
 *   insn=0x00000000004B6DBC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(
        _QWORD *a1)
{
  __int64 v2; // x0
  std::exception *v3; // x19

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::exception *)(a1 - 2);
  sub_54A3F8(v3);
  operator delete(v3);
}

