/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041F8BC
 * Mangled: _ZThn248_N5Caver11MapMenuPage28MapViewDidSelectionDidChangeEPNS_7MapViewE
 * Demangled: `non-virtual thunk to'Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8530  Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapView *)
 *
 * Referenced strings: 1
 *   insn=0x000000000041F8C0 string=0x00000000001F8530 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MapMenuPage::MapViewDidSelectionDidChange(
        Caver::MapMenuPage *this,
        Caver::MapView *a2)
{
  return Caver::MapMenuPage::MapViewDidSelectionDidChange((Caver::MapMenuPage *)((char *)this - 248), a2);
}

