/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F45D0
 * Mangled: ._ZN5Caver9GUIEffect6FadeInEf
 * Demangled: Caver::GUIEffect::FadeIn(float)
 *
 * Callers: 3
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x00000000004A72BC  Caver::GUIEffect::FadeIn(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F45D8 string=0x00000000001F45DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIEffect::FadeIn(Caver::GUIEffect *this, float a2)
{
  return _ZN5Caver9GUIEffect6FadeInEf(this, a2);
}

