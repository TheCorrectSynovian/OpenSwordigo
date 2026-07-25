/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037CE74
 * Mangled: _ZN5Caver11AchievementC2ERKSsS2_S2_iS2_i
 * Demangled: Caver::Achievement::Achievement(std::string const&,std::string const&,std::string const&,int,std::string const&,int)
 *
 * Callers: 2
 *   0x00000000002028A0  Caver::Achievement::Achievement(std::string const&,std::string const&,std::string const&,int,std::string const&,int)
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 54
 *   insn=0x000000000037CE8C string=0x000000000037CE90 "Z"
 *   insn=0x000000000037CE90 string=0x000000000037CE94 "H"
 *   insn=0x000000000037CEB4 string=0x000000000037CEB8 "v""
 *   insn=0x000000000037CEC4 string=0x000000000037CEC8 "yB"
 *   insn=0x000000000037CED4 string=0x000000000037CED8 "`"
 *   insn=0x000000000037CED8 string=0x000000000037CEDC "w"
 *   insn=0x000000000037CEE4 string=0x000000000037CEE8 "t*"
 *   insn=0x000000000037CEE8 string=0x000000000037CEEC "H"
 *   insn=0x000000000037CF18 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000037CF1C string=0x000000000037CF20 "J"
 *   insn=0x000000000037CF20 string=0x000000000037CF24 "J"
 *   insn=0x000000000037CF28 string=0x000000000037CF2C "(a"
 *   insn=0x000000000037CF34 string=0x000000000037CF38 "J"
 *   insn=0x000000000037CF38 string=0x000000000037CF3C "J=G"
 *   insn=0x000000000037CF3C string=0x000000000037CF40 ")!"
 *   insn=0x000000000037CF44 string=0x000000000037CF48 "*"
 *   insn=0x000000000037CF44 string=0x000000000037CF5C "*"
 *   insn=0x000000000037CF48 string=0x000000000037CF4C "K"
 *   insn=0x000000000037CF4C string=0x000000000037CF50 "+"
 *   insn=0x000000000037CF58 string=0x000000000037CF68 "_"
 *   insn=0x000000000037CF5C string=0x000000000037CF60 "K"
 *   insn=0x000000000037CF60 string=0x000000000037CF64 "+"
 *   insn=0x000000000037CF74 string=0x000000000037CF78 ""
 *   insn=0x000000000037CF84 string=0x000000000037CF88 "I"
 *   insn=0x000000000037CF88 string=0x000000000037CF8C ")"
 *   insn=0x000000000037CF94 string=0x000000000037CF98 "`"
 *   insn=0x000000000037CF98 string=0x000000000037CF9C "I"
 *   insn=0x000000000037CF98 string=0x000000000037CFE4 "h"
 *   insn=0x000000000037CF9C string=0x000000000037CFA0 ")=G"
 *   insn=0x000000000037CFA0 string=0x000000000037CFA4 "!"
 *   insn=0x000000000037CFA8 string=0x000000000037CFAC "\t"
 *   insn=0x000000000037CFA8 string=0x000000000037CFC0 "\t"
 *   insn=0x000000000037CFAC string=0x000000000037CFB0 "*"
 *   insn=0x000000000037CFB0 string=0x000000000037CFB4 "\n"
 *   insn=0x000000000037CFBC string=0x000000000037CFCC "?"
 *   insn=0x000000000037CFC0 string=0x000000000037CFC4 "*"
 *   insn=0x000000000037CFC4 string=0x000000000037CFC8 "\n"
 *   insn=0x000000000037CFE4 string=0x000000000037CFE8 "I"
 *   insn=0x000000000037CFE8 string=0x000000000037CFEC ")"
 *   insn=0x000000000037CFF8 string=0x000000000037CFFC "I"
 *   insn=0x000000000037CFFC string=0x000000000037D000 ")=G"
 *   insn=0x000000000037D000 string=0x000000000037D004 "!"
 *   insn=0x000000000037D004 string=0x000000000037D008 "i"
 *   insn=0x000000000037D008 string=0x000000000037D00C "\t"
 *   insn=0x000000000037D008 string=0x000000000037D034 "\t"
 *   insn=0x000000000037D00C string=0x000000000037D010 "*"
 *   insn=0x000000000037D010 string=0x000000000037D014 "\n"
 *   insn=0x000000000037D018 string=0x000000000037D01C "?"
 *   insn=0x000000000037D01C string=0x000000000037D020 "l"
 *   insn=0x000000000037D02C string=0x000000000037D030 "%"
 *   insn=0x000000000037D034 string=0x000000000037D038 "*"
 *   insn=0x000000000037D038 string=0x000000000037D03C "\n"
 *   insn=0x000000000037D03C string=0x000000000037D040 "?"
 *   insn=0x000000000037D040 string=0x000000000037D044 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Achievement::Achievement(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 result; // x0

  _ReadStatusReg(TPIDR_EL0);
  sub_56A528(a1, a2);
  sub_56A528(a1 + 8, a3);
  sub_56A528(a1 + 16, a4);
  *(_DWORD *)(a1 + 24) = a5;
  result = sub_56A528(a1 + 32, a6);
  *(_DWORD *)(a1 + 40) = a7;
  return result;
}

