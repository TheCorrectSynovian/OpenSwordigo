/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B69C
 * Mangled: _ZThn64_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEE5cloneEv
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000046B754  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x000000000046B6B0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000046B6B4 string=0x000000000046B6B8 ""
 *   insn=0x000000000046B6BC string=0x000000000046B6C0 "A"
 *   insn=0x000000000046B6C0 string=0x000000000046B6C4 "h"
 *   insn=0x000000000046B6CC string=0x000000000046B6D0 ""
 *   insn=0x000000000046B6D0 string=0x000000000046B6D4 "`"
 *   insn=0x000000000046B6D8 string=0x000000000046B6DC "A"
 *   insn=0x000000000046B6DC string=0x000000000046B6E0 "h"
 *   insn=0x000000000046B6E4 string=0x000000000046B6E8 ""
 *   insn=0x000000000046B6E8 string=0x000000000046B6EC "@"
 *   insn=0x000000000046B6F4 string=0x000000000046B6F8 "\t9@"
 *   insn=0x000000000046B6FC string=0x000000000046B700 "J"
 *   insn=0x000000000046B704 string=0x000000000046B708 "i:"
 *   insn=0x000000000046B70C string=0x000000000046B710 "KA"
 *   insn=0x000000000046B710 string=0x000000000046B714 "L!"
 *   insn=0x000000000046B714 string=0x000000000046B718 "H"
 *   insn=0x000000000046B718 string=0x000000000046B71C "k"
 *   insn=0x000000000046B71C string=0x000000000046B720 "l"
 *   insn=0x000000000046B720 string=0x000000000046B724 "`"
 *   insn=0x000000000046B724 string=0x000000000046B728 "h"
 *   insn=0x000000000046B73C string=0x000000000046B740 "l%"
 *   insn=0x000000000046B740 string=0x00000000001F4CF0 "P'"
 *   insn=0x000000000046B748 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046B74C string=0x000000000046B750 "]X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone(
        __int64 a1)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int128 v4; // q0

  v2 = operator new(0x48u);
  *(_QWORD *)v2 = off_6D4C58;
  *(_OWORD *)(v2 + 8) = *(_OWORD *)(a1 - 56);
  v3 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(v2 + 24) = off_6BC9E0;
  *(_QWORD *)(v2 + 32) = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  *(_DWORD *)(v2 + 56) = *(_DWORD *)(a1 - 8);
  v4 = *(_OWORD *)(a1 - 24);
  *(_QWORD *)v2 = off_6D4B88;
  *(_QWORD *)(v2 + 24) = off_6D4BC0;
  *(_OWORD *)(v2 + 40) = v4;
  *(_QWORD *)(v2 + 64) = &off_6D4BE0;
  return v2 + 64;
}

