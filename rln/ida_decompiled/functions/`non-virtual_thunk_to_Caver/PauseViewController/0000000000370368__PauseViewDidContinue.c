/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000370368
 * Mangled: _ZThn72_N5Caver19PauseViewController20PauseViewDidContinueEPNS_9PauseViewE
 * Demangled: `non-virtual thunk to'Caver::PauseViewController::PauseViewDidContinue(Caver::PauseView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000370368 string=0x000000000037036C ")"
 *   insn=0x000000000037036C string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::PauseViewController::PauseViewDidContinue(
        Caver::GUIViewController **this,
        Caver::PauseView *a2)
{
  return Caver::GUIViewController::DismissModalViewController(*(this - 4));
}

