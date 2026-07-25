/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6430
 * Mangled: _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 9
 *   insn=0x00000000004B643C string=0x00000000004B6440 "h"
 *   insn=0x00000000004B6440 string=0x00000000004B6444 "`"
 *   insn=0x00000000004B6444 string=0x00000000004B6448 ""
 *   insn=0x00000000004B6448 string=0x00000000004B644C "A"
 *   insn=0x00000000004B644C string=0x00000000004B6450 "h"
 *   insn=0x00000000004B6454 string=0x00000000004B6458 ""
 *   insn=0x00000000004B6454 string=0x00000000004B6464 "sB"
 *   insn=0x00000000004B6458 string=0x00000000004B645C ""
 *   insn=0x00000000004B647C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
        _QWORD *a1)
{
  __int64 v2; // x0
  std::exception *v3; // x19

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::exception *)(a1 - 2);
  sub_54A3F8(v3);
  operator delete(v3);
}

