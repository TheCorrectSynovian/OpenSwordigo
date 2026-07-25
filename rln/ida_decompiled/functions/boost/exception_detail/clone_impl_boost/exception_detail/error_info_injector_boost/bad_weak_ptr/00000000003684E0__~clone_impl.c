/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003684E0
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED0Ev
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 8
 *   insn=0x00000000003684F0 string=0x00000000003684F4 "`\n@"
 *   insn=0x00000000003684F4 string=0x00000000003684F8 ""
 *   insn=0x00000000003684F8 string=0x00000000003684FC "A"
 *   insn=0x00000000003684FC string=0x0000000000368500 "h"
 *   insn=0x0000000000368504 string=0x0000000000368508 ""
 *   insn=0x0000000000368508 string=0x000000000036850C ""
 *   insn=0x0000000000368524 string=0x0000000000368528 "b;"
 *   insn=0x0000000000368528 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl(
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

