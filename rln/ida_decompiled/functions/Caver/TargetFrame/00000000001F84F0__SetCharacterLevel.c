/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F84F0
 * Mangled: ._ZN5Caver11TargetFrame17SetCharacterLevelEi
 * Demangled: Caver::TargetFrame::SetCharacterLevel(int)
 *
 * Callers: 1
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Callees: 1
 *   0x00000000003E342C  Caver::TargetFrame::SetCharacterLevel(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F84F8 string=0x00000000001F84FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TargetFrame::SetCharacterLevel(Caver::TargetFrame *this, int a2)
{
  return _ZN5Caver11TargetFrame17SetCharacterLevelEi(this, a2);
}

