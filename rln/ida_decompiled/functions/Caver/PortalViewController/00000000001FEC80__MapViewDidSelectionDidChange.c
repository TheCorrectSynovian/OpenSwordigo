/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEC80
 * Mangled: ._ZN5Caver20PortalViewController28MapViewDidSelectionDidChangeEPNS_7MapViewE
 * Demangled: Caver::PortalViewController::MapViewDidSelectionDidChange(Caver::MapView *)
 *
 * Callers: 1
 *   0x00000000003713FC  `non-virtual thunk to'Caver::PortalViewController::MapViewDidSelectionDidChange(Caver::MapView *)
 *
 * Callees: 1
 *   0x0000000000370DDC  Caver::PortalViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEC88 string=0x00000000001FEC8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PortalViewController::MapViewDidSelectionDidChange(
        Caver::PortalViewController *this,
        Caver::MapView *a2)
{
  JUMPOUT(0x371120);
}

