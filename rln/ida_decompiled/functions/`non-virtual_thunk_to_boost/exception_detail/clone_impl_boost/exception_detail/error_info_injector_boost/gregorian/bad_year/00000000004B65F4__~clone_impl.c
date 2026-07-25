/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B65F4
 * Mangled: _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 10
 *   insn=0x00000000004B6600 string=0x00000000004B6604 "h"
 *   insn=0x00000000004B6604 string=0x00000000004B6608 "`"
 *   insn=0x00000000004B6608 string=0x00000000004B660C ""
 *   insn=0x00000000004B660C string=0x00000000004B6610 "A"
 *   insn=0x00000000004B6610 string=0x00000000004B6614 "h"
 *   insn=0x00000000004B6618 string=0x00000000004B661C ""
 *   insn=0x00000000004B6618 string=0x00000000004B6628 "s"
 *   insn=0x00000000004B661C string=0x00000000004B6620 ""
 *   insn=0x00000000004B662C string=0x00000000004B6630 "rO"
 *   insn=0x00000000004B6640 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
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

