/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327924
 * Mangled: _ZNK5Caver5Proto32StaticMonsterControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 16
 *   insn=0x0000000000327934 string=0x0000000000327938 "h"
 *   insn=0x0000000000327938 string=0x000000000032793C "h"
 *   insn=0x000000000032793C string=0x0000000000327948 "`"
 *   insn=0x0000000000327940 string=0x0000000000327944 ""
 *   insn=0x0000000000327944 string=0x0000000000327970 "h"
 *   insn=0x000000000032794C string=0x0000000000327960 "t"
 *   insn=0x0000000000327968 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000327974 string=0x0000000000327978 "k"
 *   insn=0x0000000000327980 string=0x0000000000327984 "i\n@"
 *   insn=0x0000000000327984 string=0x0000000000327988 " yv"
 *   insn=0x000000000032798C string=0x00000000003279A0 "@"
 *   insn=0x0000000000327994 string=0x00000000003279A8 "\n:"
 *   insn=0x00000000003279A8 string=0x00000000003279AC "h"
 *   insn=0x00000000003279B8 string=0x00000000003279BC "K"
 *   insn=0x00000000003279C8 string=0x00000000003279CC " "
 *   insn=0x00000000003279CC string=0x00000000003279D0 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StaticMonsterControllerComponent::ByteSize(
        Caver::Proto::StaticMonsterControllerComponent *this,
        unsigned int a2)
{
  int v3; // w20
  google::protobuf::io::CodedOutputStream *v4; // x0
  int v5; // w8
  __int64 v6; // x22
  int v7; // w21
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  __int64 result; // x0

  if ( (*((_BYTE *)this + 48) & 1) != 0 )
  {
    v4 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v4 & 0x80000000) != 0 )
    {
      v3 = 11;
    }
    else if ( (unsigned int)v4 >= 0x80 )
    {
      v3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v4, a2) + 1;
    }
    else
    {
      v3 = 2;
    }
  }
  else
  {
    v3 = 0;
  }
  v5 = *((_DWORD *)this + 6);
  if ( v5 < 1 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)(*((_QWORD *)this + 2) + 4 * v6);
      if ( ((unsigned int)v8 & 0x80000000) != 0 )
      {
        v9 = 10;
      }
      else if ( (unsigned int)v8 >= 0x80 )
      {
        v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
        v5 = *((_DWORD *)this + 6);
      }
      else
      {
        v9 = 1;
      }
      ++v6;
      v7 += v9;
    }
    while ( v6 < v5 );
  }
  result = (unsigned int)(v7 + v3 + v5);
  *((_DWORD *)this + 2) = result;
  return result;
}

