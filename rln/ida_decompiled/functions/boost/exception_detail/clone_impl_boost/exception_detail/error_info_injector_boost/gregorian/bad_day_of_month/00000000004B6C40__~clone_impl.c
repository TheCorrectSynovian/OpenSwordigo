/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6C40
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian16bad_day_of_monthEEEED0Ev
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 8
 *   insn=0x00000000004B6C4C string=0x00000000004B6C50 "h"
 *   insn=0x00000000004B6C50 string=0x00000000004B6C54 "`"
 *   insn=0x00000000004B6C54 string=0x00000000004B6C58 ""
 *   insn=0x00000000004B6C58 string=0x00000000004B6C5C "A"
 *   insn=0x00000000004B6C5C string=0x00000000004B6C60 "h\n"
 *   insn=0x00000000004B6C64 string=0x00000000004B6C68 ""
 *   insn=0x00000000004B6C68 string=0x00000000004B6C6C ""
 *   insn=0x00000000004B6C88 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 2) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  sub_54A3F8(this);
  operator delete(this);
}

