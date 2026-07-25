/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBAC0
 * Mangled: ._ZNK5Caver7MapNode15ExperienceLevelEv
 * Demangled: Caver::MapNode::ExperienceLevel(void)
 *
 * Callers: 2
 *   0x000000000026EED8  Caver::EntityInfoComponent::Prepare(void)
 *   0x0000000000351C5C  Caver::GameViewController::LoadGameState(void)
 *
 * Callees: 1
 *   0x00000000003BF1CC  Caver::MapNode::Title(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBAC8 string=0x00000000001FBACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MapNode::ExperienceLevel(Caver::MapNode *this)
{
  JUMPOUT(0x3BF24C);
}

