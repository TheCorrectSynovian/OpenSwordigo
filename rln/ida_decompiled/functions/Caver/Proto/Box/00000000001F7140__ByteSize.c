/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7140
 * Mangled: ._ZNK5Caver5Proto3Box8ByteSizeEv
 * Demangled: Caver::Proto::Box::ByteSize(void)
 *
 * Callers: 1
 *   0x000000000033AC80  Caver::Proto::Mesh::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002CF8D0  Caver::Proto::Box::ByteSize(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7144 string=0x00000000002CF8D0 ""
 *   insn=0x00000000001F7148 string=0x00000000001F714C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Box::ByteSize(Caver::Proto::Box *this)
{
  return _ZNK5Caver5Proto3Box8ByteSizeEv(this);
}

