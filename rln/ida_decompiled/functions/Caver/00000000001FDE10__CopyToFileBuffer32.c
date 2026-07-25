/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDE10
 * Mangled: ._ZN5Caver18CopyToFileBuffer32EPhPKhi
 * Demangled: Caver::CopyToFileBuffer32(uchar *,uchar const*,int)
 *
 * Callers: 2
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *   0x00000000004D667C  Caver::BinaryFile::WriteInt32(int)
 *
 * Callees: 1
 *   0x00000000004D0B54  Caver::CopyToFileBuffer32(uchar *,uchar const*,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDE14 string=0x00000000004D0B54 "_"
 *   insn=0x00000000001FDE18 string=0x00000000001FDE1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CopyToFileBuffer32(Caver *this, unsigned __int8 *a2, const unsigned __int8 *a3, int a4)
{
  return _ZN5Caver18CopyToFileBuffer32EPhPKhi(this, a2, a3, a4);
}

