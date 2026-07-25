/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B89B0
 * Mangled: _ZN5boost16exception_detail19error_info_injectorISt13runtime_errorED0Ev
 * Demangled: boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 9
 *   insn=0x00000000004B89BC string=0x00000000004B89C0 "h"
 *   insn=0x00000000004B89C0 string=0x00000000004B89C4 "`"
 *   insn=0x00000000004B89C4 string=0x00000000004B89C8 ""
 *   insn=0x00000000004B89C8 string=0x00000000004B89CC "A"
 *   insn=0x00000000004B89CC string=0x00000000004B89D0 "h\n"
 *   insn=0x00000000004B89D4 string=0x00000000004B89D8 ""
 *   insn=0x00000000004B89D8 string=0x00000000004B89DC ""
 *   insn=0x00000000004B89F4 string=0x00000000004B89F8 "."
 *   insn=0x00000000004B89F8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(
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

