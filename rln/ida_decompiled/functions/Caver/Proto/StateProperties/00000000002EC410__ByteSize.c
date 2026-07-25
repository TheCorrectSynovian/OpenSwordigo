/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC410
 * Mangled: _ZNK5Caver5Proto15StateProperties8ByteSizeEv
 * Demangled: Caver::Proto::StateProperties::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 12
 *   insn=0x00000000002EC420 string=0x00000000002EC424 "i"
 *   insn=0x00000000002EC424 string=0x00000000002EC428 "?"
 *   insn=0x00000000002EC434 string=0x00000000002EC438 "h\n@"
 *   insn=0x00000000002EC440 string=0x00000000002EC444 ""
 *   insn=0x00000000002EC448 string=0x00000000002EC44C "b"
 *   insn=0x00000000002EC450 string=0x00000000002EC454 ""
 *   insn=0x00000000002EC454 string=0x00000000002EC470 "H"
 *   insn=0x00000000002EC458 string=0x00000000002EC45C "]'"
 *   insn=0x00000000002EC45C string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002EC460 string=0x00000000002EC464 "i"
 *   insn=0x00000000002EC468 string=0x00000000002EC46C ""
 *   insn=0x00000000002EC484 string=0x00000000002EC48C "t\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StateProperties::ByteSize(Caver::Proto::StateProperties *this, unsigned int a2)
{
  int v3; // w9
  __int64 v4; // x21
  unsigned int v5; // w20
  _QWORD *v6; // x22
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0

  v3 = *((_DWORD *)this + 6);
  if ( v3 < 1 )
  {
    v5 = *((_DWORD *)this + 6);
  }
  else
  {
    v4 = 0;
    v5 = *((_DWORD *)this + 6);
    do
    {
      v6 = *(_QWORD **)(*((_QWORD *)this + 2) + 8 * v4);
      v7 = *(_QWORD *)(*v6 - 24LL);
      if ( (unsigned int)v7 >= 0x80 )
      {
        v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
               a2);
        v3 = *((_DWORD *)this + 6);
        v8 = v9;
        v7 = *(_QWORD *)(*v6 - 24LL);
      }
      else
      {
        v8 = 1;
      }
      ++v4;
      v5 += v8 + v7;
    }
    while ( v4 < v3 );
  }
  *((_DWORD *)this + 2) = v5;
  return v5;
}

