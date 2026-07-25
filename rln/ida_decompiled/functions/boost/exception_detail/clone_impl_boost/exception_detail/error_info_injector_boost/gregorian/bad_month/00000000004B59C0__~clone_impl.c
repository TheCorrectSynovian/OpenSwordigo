/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B59C0
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEED0Ev
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 8
 *   insn=0x00000000004B59D0 string=0x00000000004B59D4 "`"
 *   insn=0x00000000004B59D4 string=0x00000000004B59D8 ""
 *   insn=0x00000000004B59D8 string=0x00000000004B59DC "A"
 *   insn=0x00000000004B59DC string=0x00000000004B59E0 "h\n"
 *   insn=0x00000000004B59E4 string=0x00000000004B59E8 ""
 *   insn=0x00000000004B59E8 string=0x00000000004B59EC ""
 *   insn=0x00000000004B5A04 string=0x00000000004B5A08 "*"
 *   insn=0x00000000004B5A08 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
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

