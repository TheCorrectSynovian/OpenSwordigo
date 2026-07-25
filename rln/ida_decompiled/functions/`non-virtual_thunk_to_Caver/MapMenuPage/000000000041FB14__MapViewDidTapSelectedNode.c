/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041FB14
 * Mangled: _ZThn248_N5Caver11MapMenuPage25MapViewDidTapSelectedNodeEPNS_7MapViewE
 * Demangled: `non-virtual thunk to'Caver::MapMenuPage::MapViewDidTapSelectedNode(Caver::MapView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB190  Caver::MapMenuPage::MapViewDidTapSelectedNode(Caver::MapView *)
 *
 * Referenced strings: 1
 *   insn=0x000000000041FB18 string=0x00000000001FB190 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MapMenuPage::MapViewDidTapSelectedNode(
        Caver::MapMenuPage *this,
        Caver::MapView *a2)
{
  return Caver::MapMenuPage::MapViewDidTapSelectedNode((Caver::MapMenuPage *)((char *)this - 248), a2);
}

