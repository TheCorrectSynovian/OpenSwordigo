/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F40E0
 * Mangled: ._ZN5Caver9GameState18CurrentGuideTargetEv
 * Demangled: Caver::GameState::CurrentGuideTarget(void)
 *
 * Callers: 2
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000424008  Caver::MapView::UpdateTargetPath(void)
 *
 * Callees: 1
 *   0x00000000003B9078  Caver::GameState::CurrentGuideTarget(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F40E8 string=0x00000000001F40EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameState::CurrentGuideTarget(Caver::GameState *this)
{
  return _ZN5Caver9GameState18CurrentGuideTargetEv(this);
}

