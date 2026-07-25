/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB190
 * Mangled: ._ZN5Caver11MapMenuPage25MapViewDidTapSelectedNodeEPNS_7MapViewE
 * Demangled: Caver::MapMenuPage::MapViewDidTapSelectedNode(Caver::MapView *)
 *
 * Callers: 1
 *   0x000000000041FB14  `non-virtual thunk to'Caver::MapMenuPage::MapViewDidTapSelectedNode(Caver::MapView *)
 *
 * Callees: 1
 *   0x000000000041F8C4  Caver::MapMenuPage::MapViewDidTapSelectedNode(Caver::MapView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB198 string=0x00000000001FB19C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapMenuPage::MapViewDidTapSelectedNode(Caver::MapMenuPage *this, Caver::MapView *a2)
{
  return _ZN5Caver11MapMenuPage25MapViewDidTapSelectedNodeEPNS_7MapViewE(this, a2);
}

