/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036853C
 * Mangled: _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEE5cloneEv
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000003685F4  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x000000000036854C string=0x0000000000368550 "$4"
 *   insn=0x0000000000368550 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000368554 string=0x0000000000368558 ""
 *   insn=0x000000000036855C string=0x0000000000368560 ")"
 *   insn=0x0000000000368564 string=0x0000000000368568 "A"
 *   insn=0x000000000036856C string=0x0000000000368570 "(A"
 *   insn=0x0000000000368574 string=0x0000000000368578 "`"
 *   insn=0x000000000036857C string=0x0000000000368580 "`\n"
 *   insn=0x0000000000368584 string=0x0000000000368588 ""
 *   insn=0x0000000000368588 string=0x000000000036858C "@"
 *   insn=0x0000000000368598 string=0x000000000036859C ")1G"
 *   insn=0x00000000003685A0 string=0x00000000003685A4 "h*"
 *   insn=0x00000000003685A8 string=0x00000000003685AC "*A"
 *   insn=0x00000000003685AC string=0x00000000003685B0 "+!"
 *   insn=0x00000000003685B0 string=0x00000000003685B4 "A"
 *   insn=0x00000000003685B4 string=0x00000000003685B8 "("
 *   insn=0x00000000003685B8 string=0x00000000003685BC "a"
 *   insn=0x00000000003685BC string=0x00000000003685C0 "a"
 *   insn=0x00000000003685C0 string=0x00000000003685C4 "`"
 *   insn=0x00000000003685C4 string=0x00000000003685C8 "h"
 *   insn=0x00000000003685E4 string=0x00000000003685E8 "2;"
 *   insn=0x00000000003685E8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone(
        __int64 a1)
{
  __int64 v2; // x19
  __int128 v3; // q0
  __int64 v4; // x0
  __int128 v5; // q0
  __int128 v6; // q1

  v2 = operator new(0x38u);
  *(_QWORD *)&v3 = off_6CC4E8;
  *((_QWORD *)&v3 + 1) = off_6BC9E0;
  *(_OWORD *)v2 = v3;
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 16) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(a1 + 40);
  v5 = *(_OWORD *)(a1 + 24);
  *(_QWORD *)&v6 = off_6CC418;
  *((_QWORD *)&v6 + 1) = off_6CC450;
  *(_OWORD *)v2 = v6;
  *(_OWORD *)(v2 + 24) = v5;
  *(_QWORD *)(v2 + 48) = &off_6CC470;
  return v2 + 48;
}

