/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002031E0
 * Mangled: ._ZN5Caver19CopyFromFileBuffer8EPhPKhi
 * Demangled: Caver::CopyFromFileBuffer8(uchar *,uchar const*,int)
 *
 * Callers: 1
 *   0x0000000000444214  Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *
 * Callees: 1
 *   0x00000000004D0B8C  Caver::CopyFromFileBuffer8(uchar *,uchar const*,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002031E4 string=0x00000000004D0B8C "B|@"
 *   insn=0x00000000002031E8 string=0x00000000002031EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CopyFromFileBuffer8(Caver *this, unsigned __int8 *a2, const unsigned __int8 *a3, int a4)
{
  return _ZN5Caver19CopyFromFileBuffer8EPhPKhi(this, a2, a3, a4);
}

