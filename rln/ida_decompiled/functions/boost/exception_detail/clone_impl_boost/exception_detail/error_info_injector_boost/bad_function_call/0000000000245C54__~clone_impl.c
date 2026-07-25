/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245C54
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEED0Ev
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 8
 *   insn=0x0000000000245C60 string=0x0000000000245C64 "%"
 *   insn=0x0000000000245C64 string=0x0000000000245C68 "`"
 *   insn=0x0000000000245C68 string=0x0000000000245C6C ""
 *   insn=0x0000000000245C6C string=0x0000000000245C70 "A"
 *   insn=0x0000000000245C70 string=0x0000000000245C74 "h\n"
 *   insn=0x0000000000245C78 string=0x0000000000245C7C ""
 *   insn=0x0000000000245C7C string=0x0000000000245C80 ""
 *   insn=0x0000000000245C9C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 2) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  sub_54A024(this);
  operator delete(this);
}

