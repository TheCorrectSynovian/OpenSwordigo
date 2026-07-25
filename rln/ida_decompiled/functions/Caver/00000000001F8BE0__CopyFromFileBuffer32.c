/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8BE0
 * Mangled: ._ZN5Caver20CopyFromFileBuffer32EPhPKhi
 * Demangled: Caver::CopyFromFileBuffer32(uchar *,uchar const*,int)
 *
 * Callers: 2
 *   0x0000000000444214  Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *   0x00000000004D65E0  Caver::BinaryFile::ReadInt32(void)
 *
 * Callees: 1
 *   0x00000000004D0C34  Caver::CopyFromFileBuffer32(uchar *,uchar const*,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8BE4 string=0x00000000004D0C34 "_"
 *   insn=0x00000000001F8BE8 string=0x00000000001F8BEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CopyFromFileBuffer32(Caver *this, unsigned __int8 *a2, const unsigned __int8 *a3, int a4)
{
  return _ZN5Caver20CopyFromFileBuffer32EPhPKhi(this, a2, a3, a4);
}

