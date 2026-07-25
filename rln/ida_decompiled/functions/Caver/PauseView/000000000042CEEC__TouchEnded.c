/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042CEEC
 * Mangled: _ZN5Caver9PauseView10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::PauseView::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8060  Caver::AndroidQuitApplication(void)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x0000000000200B40  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x00000000002022A0  Caver::GUIResponder::TouchEnded(Caver::FWTouch const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 76
 *   insn=0x000000000042CEFC string=0x000000000042CF00 "U"
 *   insn=0x000000000042CF1C string=0x000000000042CF20 ""
 *   insn=0x000000000042CF44 string=0x00000000001FA5A0 "0'"
 *   insn=0x000000000042CF50 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000042CF54 string=0x00000000001FDF30 "0'"
 *   insn=0x000000000042CF5C string=0x0000000000584965 "click"
 *   insn=0x000000000042CF80 string=0x00000000001F5340 "P'"
 *   insn=0x000000000042CF88 string=0x000000000042CF8C "@"
 *   insn=0x000000000042CF8C string=0x000000000042CF90 ""
 *   insn=0x000000000042CF90 string=0x000000000042CF94 ""
 *   insn=0x000000000042CF98 string=0x000000000042CF9C ""
 *   insn=0x000000000042CF9C string=0x000000000042CFA0 ""
 *   insn=0x000000000042CFAC string=0x000000000042CFB0 ")"
 *   insn=0x000000000042CFB8 string=0x000000000042CFBC "A"
 *   insn=0x000000000042CFBC string=0x000000000042CFC0 "`z@"
 *   insn=0x000000000042CFC4 string=0x000000000042CFC8 ""
 *   insn=0x000000000042CFC8 string=0x000000000042CFCC ""
 *   insn=0x000000000042CFD8 string=0x000000000042CFDC "3"
 *   insn=0x000000000042CFDC string=0x000000000042CFE0 "h"
 *   insn=0x000000000042CFE0 string=0x000000000042CFE4 ""
 *   insn=0x000000000042CFE4 string=0x000000000042CFE8 "h"
 *   insn=0x000000000042CFEC string=0x000000000042CFF0 "h"
 *   insn=0x000000000042CFF4 string=0x000000000042CFF8 "\t@"
 *   insn=0x000000000042CFFC string=0x000000000042D000 "h\n@"
 *   insn=0x000000000042D000 string=0x000000000042D004 ""
 *   insn=0x000000000042D004 string=0x000000000042D008 "h\n"
 *   insn=0x000000000042D00C string=0x000000000042D010 "h"
 *   insn=0x000000000042D014 string=0x000000000042D018 "@"
 *   insn=0x000000000042D028 string=0x000000000042D02C "!"
 *   insn=0x000000000042D044 string=0x000000000042D048 ")=G"
 *   insn=0x000000000042D048 string=0x000000000042D04C "!"
 *   insn=0x000000000042D050 string=0x000000000042D054 "\t"
 *   insn=0x000000000042D050 string=0x000000000042D068 "\t"
 *   insn=0x000000000042D054 string=0x000000000042D058 "*"
 *   insn=0x000000000042D058 string=0x000000000042D05C "\n"
 *   insn=0x000000000042D064 string=0x000000000042D074 "?"
 *   insn=0x000000000042D068 string=0x000000000042D06C "*"
 *   insn=0x000000000042D06C string=0x000000000042D070 "\n"
 *   insn=0x000000000042D074 string=0x000000000042D078 "L"
 *   insn=0x000000000042D080 string=0x000000000042D084 "`z@"
 *   insn=0x000000000042D090 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000042D09C string=0x000000000042D0A0 "J"
 *   insn=0x000000000042D0A4 string=0x000000000042D0A8 "(a"
 *   insn=0x000000000042D0B4 string=0x000000000042D0B8 "J=G"
 *   insn=0x000000000042D0B8 string=0x000000000042D0BC ")!"
 *   insn=0x000000000042D0C0 string=0x000000000042D0C4 "*"
 *   insn=0x000000000042D0C0 string=0x000000000042D0F4 "*"
 *   insn=0x000000000042D0C4 string=0x000000000042D0C8 "K"
 *   insn=0x000000000042D0C8 string=0x000000000042D0CC "+"
 *   insn=0x000000000042D0D0 string=0x000000000042D0D4 "_"
 *   insn=0x000000000042D0E8 string=0x000000000042D0EC "t"
 *   insn=0x000000000042D0F4 string=0x000000000042D0F8 "K"
 *   insn=0x000000000042D0F8 string=0x000000000042D0FC "+"
 *   insn=0x000000000042D0FC string=0x000000000042D100 "_"
 *   insn=0x000000000042D110 string=0x000000000042D114 "4"
 *   insn=0x000000000042D118 string=0x000000000042D11C ""
 *   insn=0x000000000042D128 string=0x000000000042D12C "\t@"
 *   insn=0x000000000042D138 string=0x000000000042D13C ""
 *   insn=0x000000000042D148 string=0x000000000042D14C "@"
 *   insn=0x000000000042D15C string=0x000000000042D160 "{"
 *   insn=0x000000000042D160 string=0x000000000042D164 "("
 *   insn=0x000000000042D16C string=0x000000000042D170 "a"
 *   insn=0x000000000042D170 string=0x000000000042D174 ")"
 *   insn=0x000000000042D174 string=0x000000000042D178 "?"
 *   insn=0x000000000042D178 string=0x000000000042D17C ""
 *   insn=0x000000000042D180 string=0x000000000042D184 "K"
 *   insn=0x000000000042D184 string=0x000000000042D188 "J!"
 *   insn=0x000000000042D188 string=0x000000000042D18C ""
 *   insn=0x000000000042D18C string=0x000000000042D190 "_"
 *   insn=0x000000000042D194 string=0x000000000042D1B0 "?"
 *   insn=0x000000000042D19C string=0x000000000042D1A0 "\t"
 *   insn=0x000000000042D1A4 string=0x000000000042D1A8 """
 *   insn=0x000000000042D1A8 string=0x000000000042D1AC "@"
 *   insn=0x000000000042D1B0 string=0x000000000042D1B4 "A"
 *   insn=0x000000000042D1B8 string=0x00000000001F8060 "0'"
 *   insn=0x000000000042D1C0 string=0x00000000001FB420 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUIAnimation *__fastcall Caver::PauseView::TouchEnded(Caver::GUIAnimation **this, const Caver::FWTouch *a2)
{
  Caver::GUIAnimation *result; // x0
  Caver::AudioSystem *v5; // x0
  __int64 v6; // x0
  int v7; // w8
  void *v8; // x0
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x8
  unsigned int *v12; // x8
  int v13; // w9
  __int64 v14; // [xsp+10h] [xbp-50h] BYREF
  __int64 v15; // [xsp+18h] [xbp-48h]
  __int64 v16; // [xsp+20h] [xbp-40h] BYREF
  _QWORD *v17; // [xsp+28h] [xbp-38h]
  __int64 v18; // [xsp+38h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = (Caver::GUIAnimation *)Caver::GUIResponder::TouchEnded((Caver::GUIResponder *)this, a2);
  if ( *((int *)a2 + 8) < 1 )
    return result;
  Caver::GUIAnimation::AlphaAnimation(&v16, result, 1.0, 0.0, 0.25);
  *(_BYTE *)(v16 + 184) = 0;
  Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)this);
  v5 = (Caver::AudioSystem *)Caver::GUIView::AddAnimation();
  Caver::AudioSystem::sharedSystem(v5);
  sub_566BB8((int)&v14, "click");
  Caver::AudioSystem::PlaySoundEffectWithName();
  v6 = v15;
  if ( v15 )
  {
    v7 = *(_DWORD *)(v15 + 8) - 1;
    *(_DWORD *)(v15 + 8) = v7;
    if ( !v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v8 = (void *)(v14 - 24);
  if ( (__int64 *)(v14 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v14 - 8);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
    {
      operator delete(v8);
      result = this[30];
      if ( !result )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
  result = this[30];
  if ( result )
LABEL_7:
    result = (Caver::GUIAnimation *)(**(__int64 (__fastcall ***)(Caver::GUIAnimation *, Caver::PauseView *))result)(
                                      result,
                                      (Caver::PauseView *)this);
LABEL_8:
  v9 = v17;
  if ( v17 )
  {
    v10 = v17[1] - 1LL;
    v17[1] = v10;
    if ( !v10 )
    {
      result = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        return (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  return result;
}

