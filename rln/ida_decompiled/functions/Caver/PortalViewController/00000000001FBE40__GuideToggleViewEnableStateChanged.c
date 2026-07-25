/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBE40
 * Mangled: ._ZN5Caver20PortalViewController33GuideToggleViewEnableStateChangedEPNS_15GuideToggleViewE
 * Demangled: Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callers: 1
 *   0x0000000000371758  `non-virtual thunk to'Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callees: 1
 *   0x0000000000371414  Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBE48 string=0x00000000001FBE4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PortalViewController::GuideToggleViewEnableStateChanged(
        Caver::PortalViewController *this,
        Caver::GuideToggleView *a2)
{
  return _ZN5Caver20PortalViewController33GuideToggleViewEnableStateChangedEPNS_15GuideToggleViewE(this, a2);
}

