/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCCB0
 * Mangled: ._ZNK5Caver5Proto14MapNode_Portal8ByteSizeEv
 * Demangled: Caver::Proto::MapNode_Portal::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002DD97C  Caver::Proto::MapNode::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002DC430  Caver::Proto::MapNode_Portal::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCCB8 string=0x00000000001FCCBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MapNode_Portal::ByteSize(Caver::Proto::MapNode_Portal *this)
{
  return _ZNK5Caver5Proto14MapNode_Portal8ByteSizeEv(this);
}

