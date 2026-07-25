/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002158A0
 * Mangled: _ZN5boost6detail12shared_countC2ISsEEPT_
 * Demangled: boost::detail::shared_count::shared_count<std::string>(std::string *)
 *
 * Callers: 1
 *   0x00000000001F7F10  boost::detail::shared_count::shared_count<std::string>(std::string *)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 29
 *   insn=0x00000000002158B0 string=0x00000000002158B4 "U"
 *   insn=0x00000000002158CC string=0x00000000002158D0 "D"
 *   insn=0x00000000002158D0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002158D4 string=0x00000000002158D8 ")"
 *   insn=0x00000000002158E4 string=0x00000000002158E8 "(A"
 *   insn=0x00000000002158EC string=0x00000000002158F0 ""
 *   insn=0x0000000000215904 string=0x000000000021591C "m"
 *   insn=0x000000000021591C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000215920 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000215924 string=0x0000000000215928 "h"
 *   insn=0x0000000000215924 string=0x0000000000215978 "~"
 *   insn=0x000000000021592C string=0x0000000000215930 ")"
 *   insn=0x000000000021593C string=0x0000000000215940 "i&"
 *   insn=0x0000000000215940 string=0x0000000000215944 ")=G"
 *   insn=0x0000000000215944 string=0x0000000000215948 "!"
 *   insn=0x000000000021594C string=0x0000000000215950 "\t"
 *   insn=0x000000000021594C string=0x000000000021597C "\t"
 *   insn=0x0000000000215950 string=0x0000000000215954 "*"
 *   insn=0x0000000000215954 string=0x0000000000215958 "\n"
 *   insn=0x000000000021595C string=0x0000000000215960 "?"
 *   insn=0x0000000000215960 string=0x0000000000215964 "l"
 *   insn=0x0000000000215970 string=0x0000000000215974 "O"
 *   insn=0x0000000000215974 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021597C string=0x0000000000215980 "*"
 *   insn=0x0000000000215980 string=0x0000000000215984 "\n"
 *   insn=0x0000000000215984 string=0x0000000000215988 "?"
 *   insn=0x0000000000215998 string=0x00000000001FD590 "0'"
 *   insn=0x00000000002159A0 string=0x00000000002159A4 "j"
 *   insn=0x00000000002159A4 string=0x00000000002159A8 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<std::string>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  _ReadStatusReg(TPIDR_EL0);
  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6B9498;
  *a1 = v4;
  return result;
}

