/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000427978
 * Mangled: _ZN5Caver7MapView10SelectNodeERKN5boost10shared_ptrINS_7MapNodeEEE
 * Demangled: Caver::MapView::SelectNode(boost::shared_ptr<Caver::MapNode> const&)
 *
 * Callers: 1
 *   0x00000000001FA6B0  Caver::MapView::SelectNode(boost::shared_ptr<Caver::MapNode> const&)
 *
 * Callees: 1
 *   0x00000000001FD3D0  Caver::MapView::UpdateSelectionSprite(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000042797C string=0x0000000000427980 ""
 *   insn=0x0000000000427980 string=0x0000000000427984 "\t"
 *   insn=0x0000000000427984 string=0x0000000000427988 ""
 *   insn=0x000000000042798C string=0x00000000001FD3D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapView::SelectNode(Caver::MapView *this, __int64 **a2)
{
  __int64 v2; // x8

  v2 = **a2;
  *((_BYTE *)this + 1016) = 1;
  *((_QWORD *)this + 128) = v2;
  Caver::MapView::UpdateSelectionSprite(this);
}

