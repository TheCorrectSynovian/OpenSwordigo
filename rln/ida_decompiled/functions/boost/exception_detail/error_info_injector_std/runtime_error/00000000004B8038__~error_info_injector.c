/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8038
 * Mangled: _ZN5boost16exception_detail19error_info_injectorISt13runtime_errorED2Ev
 * Demangled: boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 7
 *   insn=0x00000000004B8044 string=0x00000000004B8048 "h"
 *   insn=0x00000000004B8048 string=0x00000000004B804C "`"
 *   insn=0x00000000004B804C string=0x00000000004B8050 ""
 *   insn=0x00000000004B8050 string=0x00000000004B8054 "A"
 *   insn=0x00000000004B8054 string=0x00000000004B8058 "h\n"
 *   insn=0x00000000004B805C string=0x00000000004B8060 ""
 *   insn=0x00000000004B8060 string=0x00000000004B8064 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 2) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A024(this);
}

