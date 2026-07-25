/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAC78
 * Mangled: _ZN5Caver24OnlineController_Android25ReportAchievementProgressERKN5boost10shared_ptrINS_11AchievementEEEd
 * Demangled: Caver::OnlineController_Android::ReportAchievementProgress(boost::shared_ptr<Caver::Achievement> const&,double)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202B00  Caver::AndroidReportAchievementProgress(std::string const&,int,bool)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 39
 *   insn=0x00000000004BAC88 string=0x00000000004BAC8C "U"
 *   insn=0x00000000004BAC9C string=0x00000000004BACA0 "a"
 *   insn=0x00000000004BACA8 string=0x00000000004BACAC "!(@"
 *   insn=0x00000000004BACAC string=0x00000000004BACB0 "!"
 *   insn=0x00000000004BACB0 string=0x00000000004BACB4 "!"
 *   insn=0x00000000004BACB4 string=0x00000000004BACB8 " `"
 *   insn=0x00000000004BACC4 string=0x00000000004BACC8 "h"
 *   insn=0x00000000004BACC8 string=0x00000000004BACCC ")@"
 *   insn=0x00000000004BACE4 string=0x00000000004BACE8 "I"
 *   insn=0x00000000004BACE8 string=0x00000000004BACEC ")"
 *   insn=0x00000000004BACF4 string=0x00000000004BACF8 "A"
 *   insn=0x00000000004BACF8 string=0x00000000004BAD20 "I"
 *   insn=0x00000000004BAD08 string=0x00000000004BAD64 "["
 *   insn=0x00000000004BAD20 string=0x00000000004BAD24 ")=G"
 *   insn=0x00000000004BAD24 string=0x00000000004BAD28 "!"
 *   insn=0x00000000004BAD2C string=0x00000000004BAD30 "\t"
 *   insn=0x00000000004BAD2C string=0x00000000004BAD44 "\t"
 *   insn=0x00000000004BAD30 string=0x00000000004BAD34 "*"
 *   insn=0x00000000004BAD34 string=0x00000000004BAD38 "\n"
 *   insn=0x00000000004BAD40 string=0x00000000004BAD50 "?"
 *   insn=0x00000000004BAD44 string=0x00000000004BAD48 "*"
 *   insn=0x00000000004BAD48 string=0x00000000004BAD4C "\n"
 *   insn=0x00000000004BAD50 string=0x00000000004BAD54 "L"
 *   insn=0x00000000004BAD64 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BAD68 string=0x00000000004BAD6C "J"
 *   insn=0x00000000004BAD6C string=0x00000000004BAD70 "J"
 *   insn=0x00000000004BAD74 string=0x00000000004BAD78 "(a"
 *   insn=0x00000000004BAD80 string=0x00000000004BAD84 "J"
 *   insn=0x00000000004BAD84 string=0x00000000004BAD88 "J=G"
 *   insn=0x00000000004BAD88 string=0x00000000004BAD8C ")!"
 *   insn=0x00000000004BAD90 string=0x00000000004BAD94 "*"
 *   insn=0x00000000004BAD90 string=0x00000000004BADC0 "*"
 *   insn=0x00000000004BAD94 string=0x00000000004BAD98 "K"
 *   insn=0x00000000004BAD98 string=0x00000000004BAD9C "+"
 *   insn=0x00000000004BADA0 string=0x00000000004BADA4 "_"
 *   insn=0x00000000004BADB0 string=0x00000000004BADB4 "|"
 *   insn=0x00000000004BADC0 string=0x00000000004BADC4 "K"
 *   insn=0x00000000004BADC4 string=0x00000000004BADC8 "+"
 *   insn=0x00000000004BADC8 string=0x00000000004BADCC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OnlineController_Android::ReportAchievementProgress(__int64 a1, _QWORD *a2)
{
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+8h] [xbp-38h] BYREF

  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(v5, *a2);
  Caver::AndroidReportAchievementProgress();
  v2 = (void *)(v5[0] - 24LL);
  if ( (__int64 *)(v5[0] - 24LL) != &qword_6FD2E0 )
  {
    v3 = (unsigned int *)(v5[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v4 = __ldaxr(v3);
      while ( __stlxr(v4 - 1, v3) );
    }
    else
    {
      v4 = (*v3)--;
    }
    if ( v4 <= 0 )
      operator delete(v2);
  }
}

