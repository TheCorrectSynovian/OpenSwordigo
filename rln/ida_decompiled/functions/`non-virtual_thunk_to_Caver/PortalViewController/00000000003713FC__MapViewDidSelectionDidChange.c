/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003713FC
 * Mangled: _ZThn72_N5Caver20PortalViewController28MapViewDidSelectionDidChangeEPNS_7MapViewE
 * Demangled: `non-virtual thunk to'Caver::PortalViewController::MapViewDidSelectionDidChange(Caver::MapView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEC80  Caver::PortalViewController::MapViewDidSelectionDidChange(Caver::MapView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000003713FC string=0x0000000000371400 " 6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::PortalViewController::MapViewDidSelectionDidChange(
        Caver::PortalViewController *this,
        Caver::MapView *a2)
{
  Caver::PortalViewController::MapViewDidSelectionDidChange((Caver::PortalViewController *)((char *)this - 72), a2);
}

