/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8650
 * Mangled: _ZNK5Caver5Proto12SoundLibrary8ByteSizeEv
 * Demangled: Caver::Proto::SoundLibrary::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F47E0  Caver::Proto::SoundEffect::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 11
 *   insn=0x00000000002D8660 string=0x00000000002D8664 "t"
 *   insn=0x00000000002D8668 string=0x00000000002D866C "K"
 *   insn=0x00000000002D866C string=0x00000000002D86B4 "t\n"
 *   insn=0x00000000002D8670 string=0x00000000002D8674 "h\n@"
 *   insn=0x00000000002D8678 string=0x00000000002D867C "Yp"
 *   insn=0x00000000002D867C string=0x00000000001F47E0 "P'"
 *   insn=0x00000000002D8684 string=0x00000000002D8688 "b"
 *   insn=0x00000000002D8690 string=0x00000000002D869C "h"
 *   insn=0x00000000002D8698 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002D86A4 string=0x00000000002D86A8 "4"
 *   insn=0x00000000002D86AC string=0x00000000002D86B0 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundLibrary::ByteSize(Caver::Proto::SoundLibrary *this)
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
      v5 = Caver::Proto::SoundEffect::ByteSize(*(Caver::Proto::SoundEffect **)(*((_QWORD *)this + 2) + 8 * v3));
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

