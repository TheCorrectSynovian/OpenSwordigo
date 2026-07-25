/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000371758
 * Mangled: _ZThn80_N5Caver20PortalViewController33GuideToggleViewEnableStateChangedEPNS_15GuideToggleViewE
 * Demangled: `non-virtual thunk to'Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callers: 1
 *   0x0000000000371414  Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callees: 1
 *   0x00000000001FBE40  Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Referenced strings: 1
 *   insn=0x000000000037175C string=0x00000000001FBE40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::PortalViewController::GuideToggleViewEnableStateChanged(
        Caver::PortalViewController *this,
        Caver::GuideToggleView *a2)
{
  return Caver::PortalViewController::GuideToggleViewEnableStateChanged(
           (Caver::PortalViewController *)((char *)this - 80),
           a2);
}

