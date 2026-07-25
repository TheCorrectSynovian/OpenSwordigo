/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202EE0
 * Mangled: ._ZN5Caver22GameMenuViewController33GuideToggleViewEnableStateChangedEPNS_15GuideToggleViewE
 * Demangled: Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callers: 1
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callees: 1
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202EE8 string=0x0000000000202EEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(
        Caver::GameMenuViewController *this,
        Caver::GuideToggleView *a2)
{
  return _ZN5Caver22GameMenuViewController33GuideToggleViewEnableStateChangedEPNS_15GuideToggleViewE(this, a2);
}

