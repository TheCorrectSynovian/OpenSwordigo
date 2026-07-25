/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037D1F0
 * Mangled: _ZN5Caver11AchievementC2ERKS0_
 * Demangled: Caver::Achievement::Achievement(Caver::Achievement const&)
 *
 * Callers: 1
 *   0x00000000001F4410  Caver::Achievement::Achievement(Caver::Achievement const&)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 52
 *   insn=0x000000000037D204 string=0x000000000037D208 "W"
 *   insn=0x000000000037D21C string=0x000000000037D220 "u""
 *   insn=0x000000000037D22C string=0x000000000037D230 "vB"
 *   insn=0x000000000037D240 string=0x000000000037D244 "`"
 *   insn=0x000000000037D248 string=0x000000000037D24C "h"
 *   insn=0x000000000037D254 string=0x000000000037D258 "h*"
 *   insn=0x000000000037D284 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000037D288 string=0x000000000037D28C "J"
 *   insn=0x000000000037D28C string=0x000000000037D290 "J"
 *   insn=0x000000000037D294 string=0x000000000037D298 "(a"
 *   insn=0x000000000037D2A0 string=0x000000000037D2A4 "*"
 *   insn=0x000000000037D2A4 string=0x000000000037D2A8 "J=G"
 *   insn=0x000000000037D2A8 string=0x000000000037D2AC ")!"
 *   insn=0x000000000037D2B0 string=0x000000000037D2B4 "*"
 *   insn=0x000000000037D2B0 string=0x000000000037D2C8 "*"
 *   insn=0x000000000037D2B4 string=0x000000000037D2B8 "K"
 *   insn=0x000000000037D2B8 string=0x000000000037D2BC "+"
 *   insn=0x000000000037D2C4 string=0x000000000037D2D4 "_"
 *   insn=0x000000000037D2C8 string=0x000000000037D2CC "K"
 *   insn=0x000000000037D2CC string=0x000000000037D2D0 "+"
 *   insn=0x000000000037D2E0 string=0x000000000037D2E4 "0"
 *   insn=0x000000000037D2F0 string=0x000000000037D2F4 "I"
 *   insn=0x000000000037D2F4 string=0x000000000037D2F8 ")"
 *   insn=0x000000000037D300 string=0x000000000037D304 "`"
 *   insn=0x000000000037D304 string=0x000000000037D308 ")"
 *   insn=0x000000000037D304 string=0x000000000037D350 "h"
 *   insn=0x000000000037D308 string=0x000000000037D30C ")=G"
 *   insn=0x000000000037D30C string=0x000000000037D310 "!"
 *   insn=0x000000000037D314 string=0x000000000037D318 "\t"
 *   insn=0x000000000037D314 string=0x000000000037D32C "\t"
 *   insn=0x000000000037D318 string=0x000000000037D31C "*"
 *   insn=0x000000000037D31C string=0x000000000037D320 "\n"
 *   insn=0x000000000037D328 string=0x000000000037D338 "?"
 *   insn=0x000000000037D32C string=0x000000000037D330 "*"
 *   insn=0x000000000037D330 string=0x000000000037D334 "\n"
 *   insn=0x000000000037D350 string=0x000000000037D354 "I"
 *   insn=0x000000000037D354 string=0x000000000037D358 ")"
 *   insn=0x000000000037D364 string=0x000000000037D368 ")"
 *   insn=0x000000000037D368 string=0x000000000037D36C ")=G"
 *   insn=0x000000000037D36C string=0x000000000037D370 "!"
 *   insn=0x000000000037D370 string=0x000000000037D374 "i"
 *   insn=0x000000000037D374 string=0x000000000037D378 "\t"
 *   insn=0x000000000037D374 string=0x000000000037D3A0 "\t"
 *   insn=0x000000000037D378 string=0x000000000037D37C "*"
 *   insn=0x000000000037D37C string=0x000000000037D380 "\n"
 *   insn=0x000000000037D384 string=0x000000000037D388 "?"
 *   insn=0x000000000037D388 string=0x000000000037D38C "l"
 *   insn=0x000000000037D398 string=0x000000000037D39C "J"
 *   insn=0x000000000037D3A0 string=0x000000000037D3A4 "*"
 *   insn=0x000000000037D3A4 string=0x000000000037D3A8 "\n"
 *   insn=0x000000000037D3A8 string=0x000000000037D3AC "?"
 *   insn=0x000000000037D3AC string=0x000000000037D3B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Achievement::Achievement(Caver::Achievement *this, const Caver::Achievement *a2)
{
  __int64 result; // x0

  _ReadStatusReg(TPIDR_EL0);
  sub_56A528(this, a2);
  sub_56A528((char *)this + 8, (char *)a2 + 8);
  sub_56A528((char *)this + 16, (char *)a2 + 16);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  result = sub_56A528((char *)this + 32, (char *)a2 + 32);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  return result;
}

