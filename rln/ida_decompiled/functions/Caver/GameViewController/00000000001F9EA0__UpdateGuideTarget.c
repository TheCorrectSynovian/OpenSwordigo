/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9EA0
 * Mangled: ._ZN5Caver18GameViewController17UpdateGuideTargetEb
 * Demangled: Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Callers: 7
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000357C74  Caver::GameViewController::GameMenuViewControllerDidSetGuideEnabled(Caver::GameMenuViewController *,bool)
 *   0x0000000000357C90  `non-virtual thunk to'Caver::GameViewController::GameMenuViewControllerDidSetGuideEnabled(Caver::GameMenuViewController *,bool)
 *   0x0000000000357CE0  Caver::GameViewController::PortalViewControllerDidSetGuideEnabled(Caver::PortalViewController *,bool)
 *   0x0000000000357CFC  `non-virtual thunk to'Caver::GameViewController::PortalViewControllerDidSetGuideEnabled(Caver::PortalViewController *,bool)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9EA8 string=0x00000000001F9EAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameViewController::UpdateGuideTarget(Caver::GameViewController *this, bool a2)
{
  return _ZN5Caver18GameViewController17UpdateGuideTargetEb(this, a2);
}

