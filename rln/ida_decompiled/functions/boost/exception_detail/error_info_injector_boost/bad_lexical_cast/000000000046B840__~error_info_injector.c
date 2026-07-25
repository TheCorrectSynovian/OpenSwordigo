/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B840
 * Mangled: _ZN5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEED0Ev
 * Demangled: boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 8
 *   insn=0x000000000046B850 string=0x000000000046B854 "`"
 *   insn=0x000000000046B854 string=0x000000000046B858 ""
 *   insn=0x000000000046B858 string=0x000000000046B85C "A"
 *   insn=0x000000000046B85C string=0x000000000046B860 "h"
 *   insn=0x000000000046B864 string=0x000000000046B868 ""
 *   insn=0x000000000046B868 string=0x000000000046B86C ""
 *   insn=0x000000000046B878 string=0x00000000001F4CF0 "P'"
 *   insn=0x000000000046B888 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector(
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

