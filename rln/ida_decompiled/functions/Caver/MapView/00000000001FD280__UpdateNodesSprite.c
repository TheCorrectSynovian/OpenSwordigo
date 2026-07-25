/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD280
 * Mangled: ._ZN5Caver7MapView17UpdateNodesSpriteEv
 * Demangled: Caver::MapView::UpdateNodesSprite(void)
 *
 * Callers: 2
 *   0x0000000000424ACC  Caver::MapView::UpdateNodes(void)
 *   0x000000000042794C  Caver::MapView::SetNodePressed(ulong,bool)
 *
 * Callees: 1
 *   0x0000000000424D10  Caver::MapView::UpdateNodesSprite(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD288 string=0x00000000001FD28C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapView::UpdateNodesSprite(Caver::MapView *this)
{
  return _ZN5Caver7MapView17UpdateNodesSpriteEv(this);
}

