/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEEB0
 * Mangled: ._ZNK5Caver7MapNode9MusicNameEv
 * Demangled: Caver::MapNode::MusicName(void)
 *
 * Callers: 2
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Callees: 1
 *   0x00000000003BF274  Caver::MapNode::MusicName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEEB8 string=0x00000000001FEEBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapNode::MusicName(Caver::MapNode *this)
{
  return _ZNK5Caver7MapNode9MusicNameEv(this);
}

