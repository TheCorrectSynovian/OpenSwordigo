/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB440
 * Mangled: ._ZN5Caver7MapNode9AddPortalERKNS0_6PortalE
 * Demangled: Caver::MapNode::AddPortal(Caver::MapNode::Portal const&)
 *
 * Callers: 1
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Callees: 1
 *   0x00000000003BEDB8  Caver::MapNode::AddPortal(Caver::MapNode::Portal const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB448 string=0x00000000001FB44C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MapNode::AddPortal()
{
  return _ZN5Caver7MapNode9AddPortalERKNS0_6PortalE();
}

