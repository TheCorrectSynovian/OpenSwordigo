/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6300
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEED0Ev
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 9
 *   insn=0x00000000004B630C string=0x00000000004B6310 "h"
 *   insn=0x00000000004B6310 string=0x00000000004B6314 "`"
 *   insn=0x00000000004B6314 string=0x00000000004B6318 ""
 *   insn=0x00000000004B6318 string=0x00000000004B631C "A"
 *   insn=0x00000000004B631C string=0x00000000004B6320 "h\n"
 *   insn=0x00000000004B6324 string=0x00000000004B6328 ""
 *   insn=0x00000000004B6328 string=0x00000000004B632C ""
 *   insn=0x00000000004B6334 string=0x00000000004B6338 "0P"
 *   insn=0x00000000004B6348 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
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

