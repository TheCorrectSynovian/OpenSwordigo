/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202B80
 * Mangled: ._ZN5Caver13GUIEffectViewC2Ev
 * Demangled: Caver::GUIEffectView::GUIEffectView(void)
 *
 * Callers: 2
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000041CA50  Caver::LoadingView::LoadingView(void)
 *
 * Callees: 1
 *   0x00000000004A74F4  Caver::GUIEffectView::GUIEffectView(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202B88 string=0x0000000000202B8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIEffectView::GUIEffectView(Caver::GUIEffectView *this)
{
  return _ZN5Caver13GUIEffectViewC2Ev(this);
}

