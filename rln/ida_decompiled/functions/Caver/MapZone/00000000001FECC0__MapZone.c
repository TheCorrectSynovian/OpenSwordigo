/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FECC0
 * Mangled: ._ZN5Caver7MapZoneC2Ev
 * Demangled: Caver::MapZone::MapZone(void)
 *
 * Callers: 1
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Callees: 1
 *   0x00000000003BF76C  std::__uninitialized_copy<false>::__uninit_copy<Caver::MapNode::Portal *,Caver::MapNode::Portal *>(Caver::MapNode::Portal *,Caver::MapNode::Portal *,Caver::MapNode::Portal *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FECC4 string=0x00000000003BF8A4 "("
 *   insn=0x00000000001FECC8 string=0x00000000001FECCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MapZone::MapZone(Caver::MapZone *this)
{
  JUMPOUT(0x3BF8A4);
}

