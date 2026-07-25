/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002024E0
 * Mangled: ._ZNK5Caver5Proto9Component8ByteSizeEv
 * Demangled: Caver::Proto::Component::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002FEE60  Caver::Proto::SceneObject::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002FB9C0  Caver::Proto::Component::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002024E8 string=0x00000000002024EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Component::ByteSize(Caver::Proto::Component *this)
{
  return _ZNK5Caver5Proto9Component8ByteSizeEv(this);
}

