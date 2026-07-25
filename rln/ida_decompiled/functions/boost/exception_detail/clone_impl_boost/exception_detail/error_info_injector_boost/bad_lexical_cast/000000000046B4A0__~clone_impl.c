/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B4A0
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED0Ev
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 9
 *   insn=0x000000000046B4B0 string=0x000000000046B4B4 "`"
 *   insn=0x000000000046B4B4 string=0x000000000046B4B8 ""
 *   insn=0x000000000046B4B8 string=0x000000000046B4BC "A"
 *   insn=0x000000000046B4BC string=0x000000000046B4C0 "h"
 *   insn=0x000000000046B4C4 string=0x000000000046B4C8 ""
 *   insn=0x000000000046B4C8 string=0x000000000046B4CC ""
 *   insn=0x000000000046B4D8 string=0x00000000001F4CF0 "P'"
 *   insn=0x000000000046B4E4 string=0x000000000046B4E8 "r/"
 *   insn=0x000000000046B4E8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl(
        std::bad_cast *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::bad_cast::~bad_cast(this);
  operator delete(this);
}

