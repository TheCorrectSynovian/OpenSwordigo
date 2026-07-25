/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB860
 * Mangled: ._ZN5Caver17CopyToFileBuffer8EPhPKhi
 * Demangled: Caver::CopyToFileBuffer8(uchar *,uchar const*,int)
 *
 * Callers: 1
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *
 * Callees: 1
 *   0x00000000004D0A94  Caver::CopyToFileBuffer8(uchar *,uchar const*,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB864 string=0x00000000004D0A94 "B|@"
 *   insn=0x00000000001FB868 string=0x00000000001FB86C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CopyToFileBuffer8(Caver *this, unsigned __int8 *a2, const unsigned __int8 *a3, int a4)
{
  return _ZN5Caver17CopyToFileBuffer8EPhPKhi(this, a2, a3, a4);
}

