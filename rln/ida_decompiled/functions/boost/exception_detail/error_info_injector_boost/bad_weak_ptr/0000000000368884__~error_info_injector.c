/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368884
 * Mangled: _ZN5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEED0Ev
 * Demangled: boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 8
 *   insn=0x0000000000368894 string=0x0000000000368898 "`\n@"
 *   insn=0x0000000000368898 string=0x000000000036889C ""
 *   insn=0x000000000036889C string=0x00000000003688A0 "A"
 *   insn=0x00000000003688A0 string=0x00000000003688A4 "h"
 *   insn=0x00000000003688A8 string=0x00000000003688AC ""
 *   insn=0x00000000003688AC string=0x00000000003688B0 ""
 *   insn=0x00000000003688C8 string=0x00000000003688CC "y:"
 *   insn=0x00000000003688CC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 1) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::exception::~exception(this);
  operator delete(this);
}

