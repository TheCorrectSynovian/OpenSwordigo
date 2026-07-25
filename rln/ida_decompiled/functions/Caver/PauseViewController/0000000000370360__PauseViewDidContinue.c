/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000370360
 * Mangled: _ZN5Caver19PauseViewController20PauseViewDidContinueEPNS_9PauseViewE
 * Demangled: Caver::PauseViewController::PauseViewDidContinue(Caver::PauseView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000370360 string=0x0000000000370364 "+"
 *   insn=0x0000000000370364 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PauseViewController::PauseViewDidContinue(
        Caver::GUIViewController **this,
        Caver::PauseView *a2)
{
  return Caver::GUIViewController::DismissModalViewController(this[5]);
}

