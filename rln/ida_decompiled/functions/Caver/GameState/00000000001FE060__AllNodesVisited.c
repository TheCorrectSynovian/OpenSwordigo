/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE060
 * Mangled: ._ZN5Caver9GameState15AllNodesVisitedEv
 * Demangled: Caver::GameState::AllNodesVisited(void)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x00000000003B82D4  Caver::GameState::AllNodesVisited(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE068 string=0x00000000001FE06C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameState::AllNodesVisited(Caver::GameState *this)
{
  return _ZN5Caver9GameState15AllNodesVisitedEv(this);
}

