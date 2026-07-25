/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203CC0
 * Mangled: ._ZN5Caver9GUIEffect7FadeOutEf
 * Demangled: Caver::GUIEffect::FadeOut(float)
 *
 * Callers: 4
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x00000000003601E8  sub_3601E8
 *   0x000000000041CA50  Caver::LoadingView::LoadingView(void)
 *
 * Callees: 1
 *   0x00000000004A7174  Caver::GUIEffect::FadeOut(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203CC8 string=0x0000000000203CCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIEffect::FadeOut(Caver::GUIEffect *this, float a2)
{
  return _ZN5Caver9GUIEffect7FadeOutEf(this, a2);
}

