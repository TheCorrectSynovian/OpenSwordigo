/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245DD8
 * Mangled: _ZThn56_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEE5cloneEv
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000245EB0  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow(void)
 *   0x000000000054A024  sub_54A024
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x0000000000245DEC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000245DF0 string=0x0000000000245DF4 "UE"
 *   insn=0x0000000000245DFC string=0x0000000000245E00 "A"
 *   insn=0x0000000000245E00 string=0x0000000000245E04 ""
 *   insn=0x0000000000245E08 string=0x0000000000245E0C "%"
 *   insn=0x0000000000245E0C string=0x0000000000245E10 ""
 *   insn=0x0000000000245E10 string=0x0000000000245E14 "\t%"
 *   insn=0x0000000000245E18 string=0x0000000000245E1C ")"
 *   insn=0x0000000000245E1C string=0x0000000000245E20 "A"
 *   insn=0x0000000000245E20 string=0x0000000000245E24 "h"
 *   insn=0x0000000000245E28 string=0x0000000000245E2C ")A"
 *   insn=0x0000000000245E2C string=0x0000000000245E30 "i"
 *   insn=0x0000000000245E34 string=0x0000000000245E38 ""
 *   insn=0x0000000000245E38 string=0x0000000000245E3C "@"
 *   insn=0x0000000000245E48 string=0x0000000000245E4C ")"
 *   insn=0x0000000000245E50 string=0x0000000000245E54 "h2"
 *   insn=0x0000000000245E58 string=0x0000000000245E5C "*A"
 *   insn=0x0000000000245E5C string=0x0000000000245E60 "+!"
 *   insn=0x0000000000245E60 string=0x0000000000245E64 "("
 *   insn=0x0000000000245E64 string=0x0000000000245E68 "j"
 *   insn=0x0000000000245E68 string=0x0000000000245E6C "k\n"
 *   insn=0x0000000000245E6C string=0x0000000000245E70 "`\n"
 *   insn=0x0000000000245E70 string=0x0000000000245E74 "h"
 *   insn=0x0000000000245E88 string=0x0000000000245E8C "f"
 *   insn=0x0000000000245E98 string=0x0000000000245E9C "u"
 *   insn=0x0000000000245EA4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone(
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
  *(_QWORD *)v2 = &off_6BC9B8;
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(v2 + 16) = off_6BC9E0;
  *(_QWORD *)(v2 + 24) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(v3 + 48);
  v5 = *(_OWORD *)(v3 + 32);
  *(_QWORD *)v2 = &off_6BC8E8;
  *(_QWORD *)(v2 + 16) = off_6BC920;
  *(_OWORD *)(v2 + 32) = v5;
  *(_QWORD *)(v2 + 56) = &off_6BC940;
  return v2 + 56;
}

