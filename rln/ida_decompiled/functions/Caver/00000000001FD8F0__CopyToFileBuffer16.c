/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD8F0
 * Mangled: ._ZN5Caver18CopyToFileBuffer16EPhPKhi
 * Demangled: Caver::CopyToFileBuffer16(uchar *,uchar const*,int)
 *
 * Callers: 2
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *   0x00000000004D2F1C  Caver::Image::SaveToTEXFile(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004D0A9C  Caver::CopyToFileBuffer16(uchar *,uchar const*,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD8F4 string=0x00000000004D0A9C "I"
 *   insn=0x00000000001FD8F8 string=0x00000000001FD8FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CopyToFileBuffer16(Caver *this, unsigned __int8 *a2, const unsigned __int8 *a3, int a4)
{
  return _ZN5Caver18CopyToFileBuffer16EPhPKhi(this, a2, a3, a4);
}

