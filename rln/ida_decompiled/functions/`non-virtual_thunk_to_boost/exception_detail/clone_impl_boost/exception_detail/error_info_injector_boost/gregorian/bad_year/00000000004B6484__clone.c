/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6484
 * Mangled: _ZThn56_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEE5cloneEv
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000004B655C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow(void)
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x00000000004B6494 string=0x00000000004B6498 "R"
 *   insn=0x00000000004B6498 string=0x00000000004B649C "h"
 *   insn=0x00000000004B6498 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004B649C string=0x00000000004B64A0 ""
 *   insn=0x00000000004B64A8 string=0x00000000004B64AC "A"
 *   insn=0x00000000004B64AC string=0x00000000004B64B0 ""
 *   insn=0x00000000004B64B8 string=0x00000000004B64BC "5C"
 *   insn=0x00000000004B64BC string=0x00000000004B64C0 "i"
 *   insn=0x00000000004B64C4 string=0x00000000004B64C8 ")"
 *   insn=0x00000000004B64C8 string=0x00000000004B64CC "A"
 *   insn=0x00000000004B64CC string=0x00000000004B64D0 "h"
 *   insn=0x00000000004B64D4 string=0x00000000004B64D8 ")A"
 *   insn=0x00000000004B64D8 string=0x00000000004B64DC "i"
 *   insn=0x00000000004B64E0 string=0x00000000004B64E4 ""
 *   insn=0x00000000004B64E4 string=0x00000000004B64E8 "@"
 *   insn=0x00000000004B64F4 string=0x00000000004B64F8 ")=F"
 *   insn=0x00000000004B64FC string=0x00000000004B6500 "h2"
 *   insn=0x00000000004B6504 string=0x00000000004B6508 "*A"
 *   insn=0x00000000004B6508 string=0x00000000004B650C "+!"
 *   insn=0x00000000004B650C string=0x00000000004B6510 "("
 *   insn=0x00000000004B6510 string=0x00000000004B6514 "j"
 *   insn=0x00000000004B6514 string=0x00000000004B6518 "k\n"
 *   insn=0x00000000004B6518 string=0x00000000004B651C "`\n"
 *   insn=0x00000000004B651C string=0x00000000004B6520 "h"
 *   insn=0x00000000004B654C string=0x00000000004B6550 "X"
 *   insn=0x00000000004B6550 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone(
        __int64 a1)
{
  __int64 v2; // x19
  __int64 v3; // x20
  __int64 v4; // x0
  __int128 v5; // q0

  v2 = operator new(0x40u);
  *(_QWORD *)v2 = off_6B7560;
  sub_56A528(v2 + 8, a1 - 48);
  v3 = a1 - 56;
  *(_QWORD *)v2 = &off_6D7118;
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(v2 + 16) = off_6BC9E0;
  *(_QWORD *)(v2 + 24) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(v3 + 48);
  v5 = *(_OWORD *)(v3 + 32);
  *(_QWORD *)v2 = &off_6D7048;
  *(_QWORD *)(v2 + 16) = off_6D7080;
  *(_OWORD *)(v2 + 32) = v5;
  *(_QWORD *)(v2 + 56) = &off_6D70A0;
  return v2 + 56;
}

