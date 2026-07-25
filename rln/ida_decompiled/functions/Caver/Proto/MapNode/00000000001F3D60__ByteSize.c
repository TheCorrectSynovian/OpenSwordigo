/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3D60
 * Mangled: ._ZNK5Caver5Proto7MapNode8ByteSizeEv
 * Demangled: Caver::Proto::MapNode::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002DEC84  Caver::Proto::MapZone::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002DD97C  Caver::Proto::MapNode::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3D68 string=0x00000000001F3D6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MapNode::ByteSize(Caver::Proto::MapNode *this)
{
  return _ZNK5Caver5Proto7MapNode8ByteSizeEv(this);
}

