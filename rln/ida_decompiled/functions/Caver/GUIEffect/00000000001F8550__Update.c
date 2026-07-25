/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8550
 * Mangled: ._ZN5Caver9GUIEffect6UpdateEf
 * Demangled: Caver::GUIEffect::Update(float)
 *
 * Callers: 7
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x00000000004A22B8  Caver::GUIWindow::SetRootViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *   0x00000000004A7174  Caver::GUIEffect::FadeOut(float)
 *   0x00000000004A72BC  Caver::GUIEffect::FadeIn(float)
 *   0x00000000004A72F0  Caver::GUIEffect::ShowBars(float)
 *   0x00000000004A7324  Caver::GUIEffect::HideBars(float)
 *   0x00000000004A770C  Caver::GUIEffectView::Update(float)
 *
 * Callees: 1
 *   0x00000000004A71A8  Caver::GUIEffect::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8558 string=0x00000000001F855C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIEffect::Update(Caver::GUIEffect *this, float a2)
{
  return _ZN5Caver9GUIEffect6UpdateEf(this, a2);
}

