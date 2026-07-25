/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002455F0
 * Mangled: _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPSsS2_EET0_T_S4_S3_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>(std::string *,std::string *,std::string *)
 *
 * Callers: 1
 *   0x00000000002020E0  std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>(std::string *,std::string *,std::string *)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x0000000000245604 string=0x0000000000245608 "W"
 *   insn=0x0000000000245620 string=0x0000000000245624 "@"
 *   insn=0x0000000000245640 string=0x0000000000245644 "A"
 *   insn=0x000000000024567C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000245680 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000024569C string=0x00000000002456E4 "h"
 *   insn=0x00000000002456A4 string=0x00000000002456A8 "\t"
 *   insn=0x00000000002456A4 string=0x00000000002456C4 "\t"
 *   insn=0x00000000002456A8 string=0x00000000002456AC "*"
 *   insn=0x00000000002456AC string=0x00000000002456B0 "\n"
 *   insn=0x00000000002456B4 string=0x00000000002456B8 "?"
 *   insn=0x00000000002456BC string=0x00000000002456F4 "s""
 *   insn=0x00000000002456C4 string=0x00000000002456C8 "*"
 *   insn=0x00000000002456C8 string=0x00000000002456CC "\n"
 *   insn=0x00000000002456CC string=0x00000000002456D0 "?"
 *   insn=0x00000000002456D8 string=0x00000000002456DC "2"
 *   insn=0x00000000002456F0 string=0x00000000002456A0 "!"
 *   insn=0x00000000002456F8 string=0x00000000002456FC "A"
 *   insn=0x0000000000245708 string=0x00000000001FD590 "0'"
 *   insn=0x000000000024570C string=0x0000000000245710 "m"
 *   insn=0x0000000000245758 string=0x000000000024575C "@"
 *   insn=0x0000000000245760 string=0x0000000000245764 ""
 *   insn=0x0000000000245770 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000245774 string=0x0000000000245778 "@"
 *   insn=0x0000000000245778 string=0x000000000024577C "Hc"
 *   insn=0x0000000000245778 string=0x00000000002457A0 "HC"
 *   insn=0x0000000000245784 string=0x0000000000245788 "\n"
 *   insn=0x00000000002457CC string=0x00000000002457D0 ""
 *   insn=0x00000000002457D0 string=0x00000000002457D4 ")"
 *   insn=0x00000000002457D8 string=0x00000000002457DC """
 *   insn=0x00000000002457DC string=0x00000000002457E0 "l"
 *   insn=0x00000000002457E0 string=0x00000000002457E4 "`"
 *   insn=0x00000000002457E4 string=0x00000000002457E8 "@"
 *   insn=0x00000000002457E8 string=0x00000000002457EC "\n"
 *   insn=0x0000000000245808 string=0x000000000024580C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // x22
  __int64 v5; // x20

  v4 = a1;
  _ReadStatusReg(TPIDR_EL0);
  if ( a1 == a2 )
    return a3;
  v5 = a3;
  do
  {
    sub_56A528(v5, v4);
    v4 += 8;
    v5 += 8;
  }
  while ( v4 != a2 );
  return v5;
}

