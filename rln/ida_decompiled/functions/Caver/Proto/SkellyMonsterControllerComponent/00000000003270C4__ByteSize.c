/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003270C4
 * Mangled: _ZNK5Caver5Proto32SkellyMonsterControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 18
 *   insn=0x00000000003270D0 string=0x00000000003270D4 "hR@9H"
 *   insn=0x00000000003270D4 string=0x00000000003270D8 "H"
 *   insn=0x00000000003270D8 string=0x00000000003270DC "h"
 *   insn=0x00000000003270DC string=0x0000000000327108 "`"
 *   insn=0x00000000003270E0 string=0x00000000003270E4 ""
 *   insn=0x00000000003270E4 string=0x00000000003270E8 "`"
 *   insn=0x00000000003270E4 string=0x0000000000327144 "t\n"
 *   insn=0x00000000003270EC string=0x0000000000327124 "h"
 *   insn=0x00000000003270F0 string=0x00000000003270F4 """
 *   insn=0x00000000003270F4 string=0x0000000000327138 "&<"
 *   insn=0x000000000032710C string=0x000000000032712C "t"
 *   insn=0x0000000000327110 string=0x0000000000327114 """
 *   insn=0x0000000000327118 string=0x000000000032711C "h"
 *   insn=0x000000000032711C string=0x0000000000327120 "\t"
 *   insn=0x0000000000327138 string=0x000000000032713C ""
 *   insn=0x0000000000327138 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000327158 string=0x000000000032715C "h"
 *   insn=0x0000000000327160 string=0x0000000000327164 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkellyMonsterControllerComponent::ByteSize(
        Caver::Proto::SkellyMonsterControllerComponent *this,
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

