/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032852C
 * Mangled: _ZNK5Caver5Proto29BatMonsterControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::BatMonsterControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 17
 *   insn=0x0000000000328538 string=0x000000000032853C "hR@9H"
 *   insn=0x000000000032853C string=0x0000000000328540 "H"
 *   insn=0x0000000000328540 string=0x0000000000328544 "h"
 *   insn=0x0000000000328544 string=0x0000000000328570 "`"
 *   insn=0x0000000000328548 string=0x000000000032854C ""
 *   insn=0x000000000032854C string=0x0000000000328550 "`"
 *   insn=0x000000000032854C string=0x00000000003285AC "t\n"
 *   insn=0x0000000000328554 string=0x000000000032858C "h"
 *   insn=0x0000000000328558 string=0x000000000032855C """
 *   insn=0x0000000000328574 string=0x0000000000328594 "t"
 *   insn=0x0000000000328578 string=0x000000000032857C """
 *   insn=0x0000000000328580 string=0x0000000000328584 "h"
 *   insn=0x0000000000328584 string=0x0000000000328588 "\t"
 *   insn=0x00000000003285A0 string=0x00000000003285A4 ""
 *   insn=0x00000000003285A0 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000003285C0 string=0x00000000003285C4 "h"
 *   insn=0x00000000003285C8 string=0x00000000003285CC "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BatMonsterControllerComponent::ByteSize(
        Caver::Proto::BatMonsterControllerComponent *this,
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

