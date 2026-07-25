/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202900
 * Mangled: ._ZN5Caver7MapView17UpdatePathsSpriteEv
 * Demangled: Caver::MapView::UpdatePathsSprite(void)
 *
 * Callers: 1
 *   0x0000000000424ACC  Caver::MapView::UpdateNodes(void)
 *
 * Callees: 1
 *   0x0000000000424D10  Caver::MapView::UpdateNodesSprite(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202908 string=0x000000000020290C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MapView::UpdatePathsSprite(Caver::MapView *this)
{
  JUMPOUT(0x4251CC);
}

