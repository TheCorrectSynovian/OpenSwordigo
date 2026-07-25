/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041CA50
 * Mangled: _ZN5Caver11LoadingViewC2Ev
 * Demangled: Caver::LoadingView::LoadingView(void)
 *
 * Callers: 1
 *   0x00000000001FB150  Caver::LoadingView::LoadingView(void)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB760  Caver::GUILoadingView::GUILoadingView(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000202B80  Caver::GUIEffectView::GUIEffectView(void)
 *   0x0000000000203030  boost::shared_ptr<Caver::GUIEffectView>::shared_ptr<Caver::GUIEffectView>(Caver::GUIEffectView *)
 *   0x0000000000203CC0  Caver::GUIEffect::FadeOut(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 55
 *   insn=0x000000000041CA64 string=0x000000000041CA68 "V"
 *   insn=0x000000000041CA74 string=0x000000000041CA78 ":{"
 *   insn=0x000000000041CA78 string=0x000000000041CA7C "H"
 *   insn=0x000000000041CA78 string=0x00000000001FB760 "0'"
 *   insn=0x000000000041CA7C string=0x000000000041CA80 "qA"
 *   insn=0x000000000041CA8C string=0x000000000041CA90 "A"
 *   insn=0x000000000041CA98 string=0x000000000041CA9C "h"
 *   insn=0x000000000041CAAC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000041CAB4 string=0x000000000041CAB8 "2"
 *   insn=0x000000000041CAC0 string=0x000000000041CAC4 "["
 *   insn=0x000000000041CAC4 string=0x000000000041CAC8 "h"
 *   insn=0x000000000041CAD4 string=0x000000000041CAD8 "i"
 *   insn=0x000000000041CADC string=0x000000000041CAE0 "4"
 *   insn=0x000000000041CAE4 string=0x000000000041CAE8 ""
 *   insn=0x000000000041CAF4 string=0x000000000041CAF8 "\t@"
 *   insn=0x000000000041CB04 string=0x000000000041CB08 ""
 *   insn=0x000000000041CB14 string=0x000000000041CB18 "@"
 *   insn=0x000000000041CB2C string=0x000000000041CB30 "d"
 *   insn=0x000000000041CB30 string=0x000000000041CB34 "h"
 *   insn=0x000000000041CB34 string=0x000000000041CB38 "i~@"
 *   insn=0x000000000041CB38 string=0x000000000041CB3C "1@"
 *   insn=0x000000000041CB40 string=0x000000000041CB44 "i"
 *   insn=0x000000000041CB4C string=0x000000000041CB50 "*"
 *   insn=0x000000000041CB50 string=0x000000000041CB54 "J"
 *   insn=0x000000000041CB54 string=0x000000000041CB58 "*"
 *   insn=0x000000000041CB68 string=0x000000000041CB6C "4"
 *   insn=0x000000000041CB70 string=0x000000000041CB74 ""
 *   insn=0x000000000041CB80 string=0x000000000041CB84 "\t@"
 *   insn=0x000000000041CB90 string=0x000000000041CB94 ""
 *   insn=0x000000000041CBA0 string=0x000000000041CBA4 "@"
 *   insn=0x000000000041CBD8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000041CBDC string=0x000000000041CBE0 "u"
 *   insn=0x000000000041CBE4 string=0x000000000041CBE8 "."
 *   insn=0x000000000041CBE8 string=0x000000000041CCA0 "u"
 *   insn=0x000000000041CBF0 string=0x000000000041CBF4 "5"
 *   insn=0x000000000041CBF4 string=0x000000000041CC58 "u"
 *   insn=0x000000000041CBF8 string=0x000000000041CBFC ""
 *   insn=0x000000000041CC08 string=0x000000000041CC0C "\t@"
 *   insn=0x000000000041CC18 string=0x000000000041CC1C ""
 *   insn=0x000000000041CC28 string=0x000000000041CC2C "@"
 *   insn=0x000000000041CC34 string=0x000000000041CC38 ""
 *   insn=0x000000000041CC44 string=0x000000000041CC48 "u"
 *   insn=0x000000000041CC44 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000041CC58 string=0x000000000041CC5C "5"
 *   insn=0x000000000041CC60 string=0x000000000041CC64 ""
 *   insn=0x000000000041CC70 string=0x000000000041CC74 "\t@"
 *   insn=0x000000000041CC80 string=0x000000000041CC84 ""
 *   insn=0x000000000041CC90 string=0x000000000041CC94 "@"
 *   insn=0x000000000041CCA0 string=0x000000000041CCA4 "5"
 *   insn=0x000000000041CCA8 string=0x000000000041CCAC ""
 *   insn=0x000000000041CCB8 string=0x000000000041CCBC "\t@"
 *   insn=0x000000000041CCC8 string=0x000000000041CCCC ""
 *   insn=0x000000000041CCD8 string=0x000000000041CCDC "@"
 *   insn=0x000000000041CCE8 string=0x000000000041CCEC "Q"
 *   insn=0x000000000041CCFC string=0x00000000001F94B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LoadingView::LoadingView(Caver::LoadingView *this)
{
  Caver::GUIEffectView *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x9
  _QWORD *v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 (__fastcall *v8)(Caver::LoadingView *, __int64 *); // x8
  _QWORD *v9; // x9
  __int64 result; // x0
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // [xsp+8h] [xbp-48h] BYREF
  _QWORD *v15; // [xsp+10h] [xbp-40h]
  __int64 v16; // [xsp+18h] [xbp-38h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUILoadingView::GUILoadingView(this);
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 35) = 0x7F7FFFFF00000000LL;
  *(_QWORD *)this = off_6D2870;
  *((_QWORD *)this + 31) = 0;
  *(_DWORD *)((char *)this + 233) = 0;
  v2 = (Caver::GUIEffectView *)operator new(0x168u);
  Caver::GUIEffectView::GUIEffectView(v2);
  boost::shared_ptr<Caver::GUIEffectView>::shared_ptr<Caver::GUIEffectView>();
  v3 = (_QWORD *)*((_QWORD *)this + 32);
  v4 = v14;
  v14 = *((_QWORD *)this + 31);
  v5 = v15;
  *((_QWORD *)this + 31) = v4;
  *((_QWORD *)this + 32) = v5;
  v15 = v3;
  if ( v3 )
  {
    v6 = v3[1] - 1LL;
    v3[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v7 = v3[2] - 1LL;
      v3[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  Caver::GUIEffect::FadeOut((Caver::GUIEffect *)(*((_QWORD *)this + 31) + 240LL), 0.0);
  v8 = *(__int64 (__fastcall **)(Caver::LoadingView *, __int64 *))(*(_QWORD *)this + 96LL);
  v14 = *((_QWORD *)this + 31);
  v9 = (_QWORD *)*((_QWORD *)this + 32);
  v15 = v9;
  if ( v9 )
    ++v9[1];
  result = v8(this, &v14);
  v11 = v15;
  if ( v15 )
  {
    v12 = v15[1] - 1LL;
    v15[1] = v12;
    if ( !v12 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  return result;
}

