/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF594
 * Mangled: _ZNK5Caver5Proto3Map8ByteSizeEv
 * Demangled: Caver::Proto::Map::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FE2E0  Caver::Proto::MapZone::ByteSize(void)
 *
 * Referenced strings: 10
 *   insn=0x00000000002DF5A4 string=0x00000000002DF5A8 "t"
 *   insn=0x00000000002DF5AC string=0x00000000002DF5B0 "K"
 *   insn=0x00000000002DF5B0 string=0x00000000002DF5F8 "t\n"
 *   insn=0x00000000002DF5B4 string=0x00000000002DF5B8 "h\n@"
 *   insn=0x00000000002DF5BC string=0x00000000002DF5C0 "H{"
 *   insn=0x00000000002DF5C8 string=0x00000000002DF5CC "b"
 *   insn=0x00000000002DF5D4 string=0x00000000002DF5E0 "h"
 *   insn=0x00000000002DF5DC string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002DF5E8 string=0x00000000002DF5EC "4"
 *   insn=0x00000000002DF5F0 string=0x00000000002DF5F4 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Map::ByteSize(Caver::Proto::Map *this)
{
  int v2; // w20
  __int64 v3; // x22
  unsigned int v4; // w1
  unsigned int v5; // w21
  int v6; // w0

  v2 = *((_DWORD *)this + 6);
  if ( v2 >= 1 )
  {
    v3 = 0;
    do
    {
      v5 = Caver::Proto::MapZone::ByteSize(*(Caver::Proto::MapZone **)(*((_QWORD *)this + 2) + 8 * v3));
      if ( v5 >= 0x80 )
        v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)v5,
               v4);
      else
        v6 = 1;
      ++v3;
      v2 += v5 + v6;
    }
    while ( v3 < *((int *)this + 6) );
  }
  *((_DWORD *)this + 2) = v2;
  return (unsigned int)v2;
}

