/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B87FC
 * Mangled: _ZThn56_NK5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEE5cloneEv
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000004B88C4  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(void)
 *   0x000000000054A024  sub_54A024
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x00000000004B880C string=0x00000000004B8810 "t"
 *   insn=0x00000000004B8810 string=0x00000000004B8814 "h"
 *   insn=0x00000000004B8810 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004B8814 string=0x00000000004B8818 "UE"
 *   insn=0x00000000004B8820 string=0x00000000004B8824 "A"
 *   insn=0x00000000004B8824 string=0x00000000004B8828 ""
 *   insn=0x00000000004B8828 string=0x00000000004B882C "?"
 *   insn=0x00000000004B882C string=0x00000000004B8830 "h"
 *   insn=0x00000000004B8834 string=0x00000000004B8838 ""
 *   insn=0x00000000004B883C string=0x00000000004B8840 "A"
 *   insn=0x00000000004B8840 string=0x00000000004B8844 "h"
 *   insn=0x00000000004B8848 string=0x00000000004B884C ""
 *   insn=0x00000000004B884C string=0x00000000004B8850 "@"
 *   insn=0x00000000004B8858 string=0x00000000004B885C "i"
 *   insn=0x00000000004B885C string=0x00000000004B8860 ")=B"
 *   insn=0x00000000004B8864 string=0x00000000004B8868 "h2"
 *   insn=0x00000000004B886C string=0x00000000004B8870 "*A"
 *   insn=0x00000000004B8870 string=0x00000000004B8874 "+!"
 *   insn=0x00000000004B8874 string=0x00000000004B8878 "("
 *   insn=0x00000000004B8878 string=0x00000000004B887C "j"
 *   insn=0x00000000004B887C string=0x00000000004B8880 "k\n"
 *   insn=0x00000000004B8880 string=0x00000000004B8884 "`\n"
 *   insn=0x00000000004B8884 string=0x00000000004B8888 "h"
 *   insn=0x00000000004B88B4 string=0x00000000004B88B8 "~"
 *   insn=0x00000000004B88B8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone(
        __int64 a1)
{
  __int64 v2; // x19
  __int64 v3; // x20
  __int64 v4; // x0
  __int128 v5; // q0

  v2 = operator new(0x40u);
  *(_QWORD *)v2 = off_6B7650;
  sub_56A528(v2 + 8, a1 - 48);
  v3 = a1 - 56;
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(v2 + 16) = off_6BC9E0;
  *(_QWORD *)(v2 + 24) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(v3 + 48);
  v5 = *(_OWORD *)(v3 + 32);
  *(_QWORD *)v2 = off_6D73A8;
  *(_QWORD *)(v2 + 16) = off_6D73E0;
  *(_OWORD *)(v2 + 32) = v5;
  *(_QWORD *)(v2 + 56) = &off_6D7400;
  return v2 + 56;
}

