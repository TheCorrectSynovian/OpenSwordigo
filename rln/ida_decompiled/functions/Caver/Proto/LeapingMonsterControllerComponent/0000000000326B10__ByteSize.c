/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326B10
 * Mangled: _ZNK5Caver5Proto33LeapingMonsterControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 17
 *   insn=0x0000000000326B1C string=0x0000000000326B20 "hR@9H"
 *   insn=0x0000000000326B20 string=0x0000000000326B24 "H"
 *   insn=0x0000000000326B24 string=0x0000000000326B28 "h"
 *   insn=0x0000000000326B28 string=0x0000000000326B54 "`"
 *   insn=0x0000000000326B2C string=0x0000000000326B30 ""
 *   insn=0x0000000000326B30 string=0x0000000000326B34 "`"
 *   insn=0x0000000000326B30 string=0x0000000000326B90 "t\n"
 *   insn=0x0000000000326B38 string=0x0000000000326B70 "h"
 *   insn=0x0000000000326B3C string=0x0000000000326B40 """
 *   insn=0x0000000000326B58 string=0x0000000000326B78 "t"
 *   insn=0x0000000000326B5C string=0x0000000000326B60 """
 *   insn=0x0000000000326B64 string=0x0000000000326B68 "h"
 *   insn=0x0000000000326B68 string=0x0000000000326B6C "\t"
 *   insn=0x0000000000326B84 string=0x0000000000326B88 ""
 *   insn=0x0000000000326B84 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000326BA4 string=0x0000000000326BA8 "h"
 *   insn=0x0000000000326BAC string=0x0000000000326BB0 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LeapingMonsterControllerComponent::ByteSize(
        Caver::Proto::LeapingMonsterControllerComponent *this,
        unsigned int a2)
{
  char v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w8
  google::protobuf::io::CodedOutputStream *v7; // x0

  v3 = *((_BYTE *)this + 20);
  if ( !v3 )
  {
    v4 = 0;
    goto LABEL_17;
  }
  if ( (*((_BYTE *)this + 20) & 1) != 0 )
  {
    v7 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v7 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v7 >= 0x80 )
    {
      v4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2) + 1;
      if ( (*((_DWORD *)this + 5) & 2) == 0 )
        goto LABEL_17;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
  }
  else
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 20) & 2) == 0 )
      goto LABEL_17;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2) + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

