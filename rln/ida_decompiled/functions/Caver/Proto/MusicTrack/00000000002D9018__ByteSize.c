/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9018
 * Mangled: _ZNK5Caver5Proto10MusicTrack8ByteSizeEv
 * Demangled: Caver::Proto::MusicTrack::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 14
 *   insn=0x00000000002D9024 string=0x00000000002D9028 "ir@9"
 *   insn=0x00000000002D9030 string=0x00000000002D9044 "t\n@"
 *   insn=0x00000000002D9038 string=0x00000000002D9080 "\n"
 *   insn=0x00000000002D9040 string=0x00000000002D908C "`\n"
 *   insn=0x00000000002D9048 string=0x00000000002D904C ""
 *   insn=0x00000000002D9050 string=0x00000000002D9054 "b"
 *   insn=0x00000000002D9058 string=0x00000000002D905C ""
 *   insn=0x00000000002D905C string=0x00000000002D9078 "H"
 *   insn=0x00000000002D9060 string=0x00000000002D9064 "[t"
 *   insn=0x00000000002D9064 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002D9068 string=0x00000000002D906C "i"
 *   insn=0x00000000002D9070 string=0x00000000002D9074 ""
 *   insn=0x00000000002D9078 string=0x00000000002D907C ""
 *   insn=0x00000000002D9080 string=0x00000000002D9084 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicTrack::ByteSize(Caver::Proto::MusicTrack *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w8
  __int64 result; // x0
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0

  LOBYTE(v3) = *((_BYTE *)this + 28);
  if ( (_BYTE)v3 )
  {
    if ( (*((_BYTE *)this + 28) & 1) != 0 )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 2);
      v7 = *(_QWORD *)(*v6 - 24LL);
      if ( (unsigned int)v7 >= 0x80 )
      {
        v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
               a2);
        v3 = *((_DWORD *)this + 7);
        v8 = v9;
        v7 = *(_QWORD *)(*v6 - 24LL);
      }
      else
      {
        v8 = 1;
      }
      v4 = v8 + v7 + 1;
    }
    else
    {
      v4 = 0;
    }
    if ( (v3 & 2) != 0 )
      result = v4 + 5;
    else
      result = v4;
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

