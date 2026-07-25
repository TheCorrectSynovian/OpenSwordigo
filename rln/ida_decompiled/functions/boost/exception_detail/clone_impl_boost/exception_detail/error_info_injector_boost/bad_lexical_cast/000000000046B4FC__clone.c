/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B4FC
 * Mangled: _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEE5cloneEv
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000046B5B0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x000000000046B50C string=0x000000000046B510 "4("
 *   insn=0x000000000046B510 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000046B514 string=0x000000000046B518 ""
 *   insn=0x000000000046B51C string=0x000000000046B520 "A"
 *   insn=0x000000000046B520 string=0x000000000046B524 "h"
 *   insn=0x000000000046B52C string=0x000000000046B530 ""
 *   insn=0x000000000046B530 string=0x000000000046B534 "`"
 *   insn=0x000000000046B538 string=0x000000000046B53C "A"
 *   insn=0x000000000046B53C string=0x000000000046B540 "h"
 *   insn=0x000000000046B544 string=0x000000000046B548 ""
 *   insn=0x000000000046B548 string=0x000000000046B54C "@"
 *   insn=0x000000000046B558 string=0x000000000046B55C ")"
 *   insn=0x000000000046B560 string=0x000000000046B564 "h:"
 *   insn=0x000000000046B568 string=0x000000000046B56C "*A"
 *   insn=0x000000000046B56C string=0x000000000046B570 "+!"
 *   insn=0x000000000046B570 string=0x000000000046B574 "("
 *   insn=0x000000000046B574 string=0x000000000046B578 "j"
 *   insn=0x000000000046B578 string=0x000000000046B57C "k"
 *   insn=0x000000000046B57C string=0x000000000046B580 "`"
 *   insn=0x000000000046B580 string=0x000000000046B584 "h"
 *   insn=0x000000000046B59C string=0x00000000001F4CF0 "P'"
 *   insn=0x000000000046B5A0 string=0x000000000046B5A4 "C/"
 *   insn=0x000000000046B5A4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone(
        __int64 a1)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int128 v4; // q0

  v2 = operator new(0x48u);
  *(_QWORD *)v2 = off_6D4C58;
  *(_OWORD *)(v2 + 8) = *(_OWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v2 + 24) = off_6BC9E0;
  *(_QWORD *)(v2 + 32) = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  *(_DWORD *)(v2 + 56) = *(_DWORD *)(a1 + 56);
  v4 = *(_OWORD *)(a1 + 40);
  *(_QWORD *)v2 = off_6D4B88;
  *(_QWORD *)(v2 + 24) = off_6D4BC0;
  *(_OWORD *)(v2 + 40) = v4;
  *(_QWORD *)(v2 + 64) = &off_6D4BE0;
  return v2 + 64;
}

