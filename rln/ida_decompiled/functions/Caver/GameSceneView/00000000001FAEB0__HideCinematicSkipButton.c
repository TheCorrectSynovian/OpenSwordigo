/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAEB0
 * Mangled: ._ZN5Caver13GameSceneView23HideCinematicSkipButtonEb
 * Demangled: Caver::GameSceneView::HideCinematicSkipButton(bool)
 *
 * Callers: 2
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x000000000034FCCC  Caver::GUIPropertyValue::ValueWithFloat(float)
 *
 * Callees: 1
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAEB8 string=0x00000000001FAEBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameSceneView::HideCinematicSkipButton(Caver::GameSceneView *this)
{
  JUMPOUT(0x34F044);
}

