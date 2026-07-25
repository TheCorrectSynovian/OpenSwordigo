/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B61AC
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEEC2ERKS5_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_year> const&)
 *
 * Callers: 1
 *   0x00000000001FC3F0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_year> const&)
 *
 * Callees: 5
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x00000000004B61BC string=0x00000000004B61C0 "h"
 *   insn=0x00000000004B61C0 string=0x00000000004B61C4 ""
 *   insn=0x00000000004B61D0 string=0x00000000004B61D4 "A"
 *   insn=0x00000000004B61D4 string=0x00000000004B61D8 ""
 *   insn=0x00000000004B61E0 string=0x00000000004B61E4 "v"
 *   insn=0x00000000004B61E4 string=0x00000000004B61E8 "5C"
 *   insn=0x00000000004B61EC string=0x00000000004B61F0 "A"
 *   insn=0x00000000004B61F4 string=0x00000000004B61F8 "h"
 *   insn=0x00000000004B61F8 string=0x00000000004B61FC "i\n"
 *   insn=0x00000000004B6200 string=0x00000000004B6204 "`"
 *   insn=0x00000000004B6208 string=0x00000000004B620C ""
 *   insn=0x00000000004B6208 string=0x00000000004B6224 "wb"
 *   insn=0x00000000004B620C string=0x00000000004B6210 "@"
 *   insn=0x00000000004B622C string=0x00000000004B6230 ")=F"
 *   insn=0x00000000004B6230 string=0x00000000004B6234 "h2"
 *   insn=0x00000000004B6238 string=0x00000000004B623C "*A"
 *   insn=0x00000000004B623C string=0x00000000004B6240 "+!"
 *   insn=0x00000000004B6240 string=0x00000000004B6244 "("
 *   insn=0x00000000004B6244 string=0x00000000004B6248 "j"
 *   insn=0x00000000004B6248 string=0x00000000004B624C "k\n"
 *   insn=0x00000000004B624C string=0x00000000004B6250 "`\n"
 *   insn=0x00000000004B6250 string=0x00000000004B6254 "h"
 *   insn=0x00000000004B625C string=0x00000000004B6260 ""
 *   insn=0x00000000004B6260 string=0x00000000004B6264 ""
 *   insn=0x00000000004B6274 string=0x00000000004B6278 "@"
 *   insn=0x00000000004B6284 string=0x00000000004B6288 "\t"
 *   insn=0x00000000004B6288 string=0x00000000004B628C "j"
 *   insn=0x00000000004B628C string=0x00000000004B6290 "I"
 *   insn=0x00000000004B6294 string=0x00000000004B6298 "@"
 *   insn=0x00000000004B62BC string=0x00000000004B62C0 "l'"
 *   insn=0x00000000004B62CC string=0x00000000004B62D0 "`"
 *   insn=0x00000000004B62D4 string=0x00000000004B62D8 "h\n"
 *   insn=0x00000000004B62DC string=0x00000000004B62E0 ""
 *   insn=0x00000000004B62E0 string=0x00000000004B62E4 ""
 *   insn=0x00000000004B62EC string=0x00000000004B62F0 "BP"
 *   insn=0x00000000004B62F4 string=0x00000000004B62F8 "s-"
 *   insn=0x00000000004B62FC string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // x0
  _QWORD *v5; // x23
  __int128 v6; // q0
  __int64 v7; // x21
  long double result; // q0

  *(_QWORD *)a1 = off_6B7560;
  sub_56A528(a1 + 8, a2 + 8);
  *(_QWORD *)a1 = &off_6D7118;
  *(_QWORD *)(a1 + 16) = off_6BC9E0;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    v5 = (_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v5 = (_QWORD *)(a1 + 24);
  }
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  v6 = *(_OWORD *)(a2 + 32);
  *(_QWORD *)a1 = &off_6D7048;
  *(_QWORD *)(a1 + 16) = off_6D7080;
  *(_OWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 56) = &off_6D70A0;
  v7 = *(_QWORD *)(a2 + 24);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  *v5 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  result = *(long double *)(a2 + 32);
  *(long double *)(a1 + 32) = result;
  return result;
}

