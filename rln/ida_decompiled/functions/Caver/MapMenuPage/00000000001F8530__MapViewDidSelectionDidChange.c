/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8530
 * Mangled: ._ZN5Caver11MapMenuPage28MapViewDidSelectionDidChangeEPNS_7MapViewE
 * Demangled: Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapView *)
 *
 * Callers: 1
 *   0x000000000041F8BC  `non-virtual thunk to'Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapView *)
 *
 * Callees: 1
 *   0x000000000041F7D4  Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8538 string=0x00000000001F853C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapMenuPage *this, Caver::MapView *a2)
{
  return _ZN5Caver11MapMenuPage28MapViewDidSelectionDidChangeEPNS_7MapViewE(this, a2);
}

