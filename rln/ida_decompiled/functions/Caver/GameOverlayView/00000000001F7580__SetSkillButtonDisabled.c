/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7580
 * Mangled: ._ZN5Caver15GameOverlayView22SetSkillButtonDisabledEb
 * Demangled: Caver::GameOverlayView::SetSkillButtonDisabled(bool)
 *
 * Callers: 1
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *
 * Callees: 1
 *   0x00000000003D6974  Caver::GameOverlayView::SetSkillButtonDisabled(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7588 string=0x00000000001F758C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOverlayView::SetSkillButtonDisabled(Caver::GameOverlayView *this, bool a2)
{
  return _ZN5Caver15GameOverlayView22SetSkillButtonDisabledEb(this, a2);
}

