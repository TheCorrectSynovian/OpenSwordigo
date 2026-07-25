/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202640
 * Mangled: ._ZN5Caver20CopyFromFileBuffer16EPhPKhi
 * Demangled: Caver::CopyFromFileBuffer16(uchar *,uchar const*,int)
 *
 * Callers: 1
 *   0x0000000000444214  Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *
 * Callees: 1
 *   0x00000000004D0B94  Caver::CopyFromFileBuffer16(uchar *,uchar const*,int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202644 string=0x00000000004D0B94 "I"
 *   insn=0x0000000000202648 string=0x000000000020264C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CopyFromFileBuffer16(Caver *this, unsigned __int8 *a2, const unsigned __int8 *a3, int a4)
{
  return _ZN5Caver20CopyFromFileBuffer16EPhPKhi(this, a2, a3, a4);
}

