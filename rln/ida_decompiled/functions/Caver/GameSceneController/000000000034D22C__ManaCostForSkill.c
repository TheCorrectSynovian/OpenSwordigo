/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034D22C
 * Mangled: _ZN5Caver19GameSceneController16ManaCostForSkillERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::GameSceneController::ManaCostForSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 1
 *   0x0000000000201B40  Caver::GameSceneController::ManaCostForSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78A0  Caver::ProgramTable::BoolForKey(std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 49
 *   insn=0x000000000034D240 string=0x000000000034D244 "V"
 *   insn=0x000000000034D254 string=0x000000000034D258 "!"
 *   insn=0x000000000034D258 string=0x000000000034D25C "3"
 *   insn=0x000000000034D264 string=0x000000000058EB19 "dimension"
 *   insn=0x000000000034D2A4 string=0x000000000034D2A8 "&"
 *   insn=0x000000000034D2AC string=0x000000000034D2B0 ")=G"
 *   insn=0x000000000034D2B0 string=0x000000000034D2B4 "!"
 *   insn=0x000000000034D2B8 string=0x000000000034D2BC "\t"
 *   insn=0x000000000034D2B8 string=0x000000000034D2D0 "\t"
 *   insn=0x000000000034D2BC string=0x000000000034D2C0 "*"
 *   insn=0x000000000034D2C0 string=0x000000000034D2C4 "\n"
 *   insn=0x000000000034D2CC string=0x000000000034D2DC "?"
 *   insn=0x000000000034D2D0 string=0x000000000034D2D4 "*"
 *   insn=0x000000000034D2D4 string=0x000000000034D2D8 "\n"
 *   insn=0x000000000034D2E4 string=0x000000000034D2E8 "/t"
 *   insn=0x000000000034D2E8 string=0x000000000034D2EC "U"
 *   insn=0x000000000034D2F4 string=0x000000000058EACA "inAnotherDimension"
 *   insn=0x000000000034D300 string=0x000000000034D304 "-f"
 *   insn=0x000000000034D30C string=0x000000000034D310 "d"
 *   insn=0x000000000034D310 string=0x00000000001F78A0 "0'"
 *   insn=0x000000000034D358 string=0x000000000034D35C ")=G"
 *   insn=0x000000000034D35C string=0x000000000034D360 "!"
 *   insn=0x000000000034D364 string=0x000000000034D368 "\t"
 *   insn=0x000000000034D364 string=0x000000000034D37C "\t"
 *   insn=0x000000000034D368 string=0x000000000034D36C "*"
 *   insn=0x000000000034D36C string=0x000000000034D370 "\n"
 *   insn=0x000000000034D378 string=0x000000000034D388 "?"
 *   insn=0x000000000034D37C string=0x000000000034D380 "*"
 *   insn=0x000000000034D380 string=0x000000000034D384 "\n"
 *   insn=0x000000000034D39C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000034D3A4 string=0x000000000034D3A8 "(a"
 *   insn=0x000000000034D3B4 string=0x000000000034D3B8 "J=G"
 *   insn=0x000000000034D3B8 string=0x000000000034D3BC ")!"
 *   insn=0x000000000034D3C0 string=0x000000000034D3C4 "*"
 *   insn=0x000000000034D3C0 string=0x000000000034D434 "*"
 *   insn=0x000000000034D3C4 string=0x000000000034D3C8 "K"
 *   insn=0x000000000034D3C8 string=0x000000000034D3CC "+"
 *   insn=0x000000000034D3D4 string=0x000000000034D418 "_"
 *   insn=0x000000000034D3E0 string=0x000000000034D3E4 "J"
 *   insn=0x000000000034D3E8 string=0x000000000034D3EC "(a"
 *   insn=0x000000000034D3F8 string=0x000000000034D3FC "J=G"
 *   insn=0x000000000034D3FC string=0x000000000034D400 ")!"
 *   insn=0x000000000034D404 string=0x000000000034D408 "*"
 *   insn=0x000000000034D408 string=0x000000000034D40C "K"
 *   insn=0x000000000034D40C string=0x000000000034D410 "+"
 *   insn=0x000000000034D42C string=0x000000000034D430 "%"
 *   insn=0x000000000034D434 string=0x000000000034D438 "K"
 *   insn=0x000000000034D438 string=0x000000000034D43C "+"
 *   insn=0x000000000034D43C string=0x000000000034D440 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneController::ManaCostForSkill(__int64 a1, __int64 *a2)
{
  __int64 v2; // x1
  unsigned int v3; // w19
  int v4; // w21
  void *v5; // x0
  unsigned int *v7; // x8
  int v8; // w9
  char v9; // w20
  void *v10; // x0
  unsigned int *v11; // x8
  int v12; // w9
  _QWORD v13[3]; // [xsp+8h] [xbp-48h] BYREF

  v13[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *a2;
  v3 = *(_DWORD *)(v2 + 24);
  sub_56A528(v13, v2);
  v4 = sub_5689E0((int)v13, "dimension");
  v5 = (void *)(v13[0] - 24LL);
  if ( (__int64 *)(v13[0] - 24LL) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v13[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
    {
      operator delete(v5);
      if ( !v4 )
        goto LABEL_10;
      return v3;
    }
  }
  if ( v4 )
    return v3;
LABEL_10:
  sub_566BB8((int)v13, "inAnotherDimension");
  v9 = Caver::ProgramTable::BoolForKey();
  v10 = (void *)(v13[0] - 24LL);
  if ( (__int64 *)(v13[0] - 24LL) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v13[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v10);
  }
  if ( (v9 & 1) != 0 )
    return 0;
  else
    return v3;
}

