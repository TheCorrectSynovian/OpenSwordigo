/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3B40
 * Mangled: ._ZNK5Caver5Proto6Circle8ByteSizeEv
 * Demangled: Caver::Proto::Circle::ByteSize(void)
 *
 * Callers: 1
 *   0x000000000030B404  Caver::Proto::ShapeComponent::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002D0040  Caver::Proto::Circle::ByteSize(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F3B44 string=0x00000000002D0040 "p@9("
 *   insn=0x00000000001F3B48 string=0x00000000001F3B4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Circle::ByteSize(Caver::Proto::Circle *this)
{
  return _ZNK5Caver5Proto6Circle8ByteSizeEv(this);
}

