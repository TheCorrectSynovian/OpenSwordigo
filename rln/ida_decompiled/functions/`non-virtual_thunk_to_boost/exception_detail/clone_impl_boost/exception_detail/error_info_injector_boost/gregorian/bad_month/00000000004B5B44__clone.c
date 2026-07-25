/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5B44
 * Mangled: _ZThn56_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEE5cloneEv
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000004B5C1C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow(void)
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x00000000004B5B58 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004B5B5C string=0x00000000004B5B60 ""
 *   insn=0x00000000004B5B68 string=0x00000000004B5B6C "A"
 *   insn=0x00000000004B5B6C string=0x00000000004B5B70 ""
 *   insn=0x00000000004B5B70 string=0x00000000004B5B74 "m"
 *   insn=0x00000000004B5B78 string=0x00000000004B5B7C "eB"
 *   insn=0x00000000004B5B84 string=0x00000000004B5B88 ")"
 *   insn=0x00000000004B5B88 string=0x00000000004B5B8C "A"
 *   insn=0x00000000004B5B8C string=0x00000000004B5B90 "h"
 *   insn=0x00000000004B5B94 string=0x00000000004B5B98 ")A"
 *   insn=0x00000000004B5B98 string=0x00000000004B5B9C "i"
 *   insn=0x00000000004B5BA0 string=0x00000000004B5BA4 ""
 *   insn=0x00000000004B5BA4 string=0x00000000004B5BA8 "@"
 *   insn=0x00000000004B5BB4 string=0x00000000004B5BB8 ")"
 *   insn=0x00000000004B5BBC string=0x00000000004B5BC0 "h2"
 *   insn=0x00000000004B5BC4 string=0x00000000004B5BC8 "*A"
 *   insn=0x00000000004B5BC8 string=0x00000000004B5BCC "+!"
 *   insn=0x00000000004B5BCC string=0x00000000004B5BD0 "("
 *   insn=0x00000000004B5BD0 string=0x00000000004B5BD4 "j"
 *   insn=0x00000000004B5BD4 string=0x00000000004B5BD8 "k\n"
 *   insn=0x00000000004B5BD8 string=0x00000000004B5BDC "`\n"
 *   insn=0x00000000004B5BDC string=0x00000000004B5BE0 "h"
 *   insn=0x00000000004B5C10 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004B5C14 string=0x00000000004B5C18 "+/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone(
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
  *(_QWORD *)v2 = &off_6D6F88;
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(v2 + 16) = off_6BC9E0;
  *(_QWORD *)(v2 + 24) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(v3 + 48);
  v5 = *(_OWORD *)(v3 + 32);
  *(_QWORD *)v2 = &off_6D6EB8;
  *(_QWORD *)(v2 + 16) = off_6D6EF0;
  *(_OWORD *)(v2 + 32) = v5;
  *(_QWORD *)(v2 + 56) = &off_6D6F10;
  return v2 + 56;
}

