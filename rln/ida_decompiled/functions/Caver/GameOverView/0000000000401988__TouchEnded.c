/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000401988
 * Mangled: _ZN5Caver12GameOverView10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::GameOverView::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000002022A0  Caver::GUIResponder::TouchEnded(Caver::FWTouch const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 51
 *   insn=0x0000000000401998 string=0x000000000040199C "U"
 *   insn=0x00000000004019AC string=0x00000000004019B0 "<"
 *   insn=0x00000000004019B8 string=0x00000000004019BC "K"
 *   insn=0x00000000004019BC string=0x00000000004019C0 "\"
 *   insn=0x00000000004019C0 string=0x00000000001FDF30 "0'"
 *   insn=0x00000000004019C8 string=0x0000000000584965 "click"
 *   insn=0x00000000004019D4 string=0x00000000004019D8 "x"
 *   insn=0x00000000004019E8 string=0x00000000004019EC "U"
 *   insn=0x00000000004019EC string=0x00000000001F5340 "P'"
 *   insn=0x00000000004019F4 string=0x00000000004019F8 "@"
 *   insn=0x00000000004019F8 string=0x00000000004019FC ""
 *   insn=0x00000000004019FC string=0x0000000000401A00 ""
 *   insn=0x0000000000401A04 string=0x0000000000401A08 ""
 *   insn=0x0000000000401A08 string=0x0000000000401A0C ""
 *   insn=0x0000000000401A14 string=0x0000000000401A18 ")"
 *   insn=0x0000000000401A18 string=0x0000000000401A1C ")"
 *   insn=0x0000000000401A28 string=0x0000000000401A2C "`z@"
 *   insn=0x0000000000401A28 string=0x0000000000401A68 "\t"
 *   insn=0x0000000000401A30 string=0x0000000000401A34 ""
 *   insn=0x0000000000401A38 string=0x0000000000401A3C ""
 *   insn=0x0000000000401A4C string=0x0000000000401A50 "!"
 *   insn=0x0000000000401A50 string=0x0000000000401AB4 ""
 *   insn=0x0000000000401A68 string=0x0000000000401A6C ")=G"
 *   insn=0x0000000000401A6C string=0x0000000000401A70 "!"
 *   insn=0x0000000000401A74 string=0x0000000000401A78 "\t"
 *   insn=0x0000000000401A74 string=0x0000000000401A8C "\t"
 *   insn=0x0000000000401A78 string=0x0000000000401A7C "*"
 *   insn=0x0000000000401A7C string=0x0000000000401A80 "\n"
 *   insn=0x0000000000401A88 string=0x0000000000401A98 "?"
 *   insn=0x0000000000401A8C string=0x0000000000401A90 "*"
 *   insn=0x0000000000401A90 string=0x0000000000401A94 "\n"
 *   insn=0x0000000000401AA0 string=0x0000000000401AA4 "@"
 *   insn=0x0000000000401AA4 string=0x0000000000401AA8 "`z@"
 *   insn=0x0000000000401AA8 string=0x0000000000401AAC "@"
 *   insn=0x0000000000401AB4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000401ABC string=0x0000000000401AC0 "*"
 *   insn=0x0000000000401AC0 string=0x0000000000401AC4 "J"
 *   insn=0x0000000000401AC8 string=0x0000000000401ACC "(a"
 *   insn=0x0000000000401AD4 string=0x0000000000401AD8 "\n"
 *   insn=0x0000000000401AD8 string=0x0000000000401ADC "J=G"
 *   insn=0x0000000000401ADC string=0x0000000000401AE0 ")!"
 *   insn=0x0000000000401AE4 string=0x0000000000401AE8 "*"
 *   insn=0x0000000000401AE4 string=0x0000000000401B14 "*"
 *   insn=0x0000000000401AE8 string=0x0000000000401AEC "K"
 *   insn=0x0000000000401AEC string=0x0000000000401AF0 "+"
 *   insn=0x0000000000401AF4 string=0x0000000000401AF8 "_"
 *   insn=0x0000000000401B04 string=0x0000000000401B08 "'"
 *   insn=0x0000000000401B0C string=0x0000000000401B10 "m"
 *   insn=0x0000000000401B14 string=0x0000000000401B18 "K"
 *   insn=0x0000000000401B18 string=0x0000000000401B1C "+"
 *   insn=0x0000000000401B1C string=0x0000000000401B20 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::AudioSystem *__fastcall Caver::GameOverView::TouchEnded(Caver::AudioSystem **this, const Caver::FWTouch *a2)
{
  Caver::AudioSystem *result; // x0
  __int64 v5; // x0
  int v6; // w8
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9
  __int64 v10; // [xsp+10h] [xbp-40h] BYREF
  __int64 v11; // [xsp+18h] [xbp-38h]
  __int64 v12; // [xsp+28h] [xbp-28h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = (Caver::AudioSystem *)Caver::GUIResponder::TouchEnded((Caver::GUIResponder *)this, a2);
  if ( *((int *)a2 + 8) >= 1 )
  {
    Caver::AudioSystem::sharedSystem(result);
    sub_566BB8((int)&v10, "click");
    Caver::AudioSystem::PlaySoundEffectWithName();
    v5 = v11;
    if ( v11 )
    {
      v6 = *(_DWORD *)(v11 + 8) - 1;
      *(_DWORD *)(v11 + 8) = v6;
      if ( !v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
    v7 = (void *)(v10 - 24);
    if ( (__int64 *)(v10 - 24) == &qword_6FD2E0 )
      goto LABEL_6;
    v8 = (unsigned int *)(v10 - 8);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 > 0 )
    {
LABEL_6:
      result = this[30];
      if ( !result )
        return result;
    }
    else
    {
      operator delete(v7);
      result = this[30];
      if ( !result )
        return result;
    }
    return (Caver::AudioSystem *)(**(__int64 (__fastcall ***)(Caver::AudioSystem *, Caver::GameOverView *))result)(
                                   result,
                                   (Caver::GameOverView *)this);
  }
  return result;
}

