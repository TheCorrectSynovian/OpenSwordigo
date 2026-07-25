/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003156D0
 * Mangled: _ZNK5Caver5Proto27ElevatorControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::ElevatorControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 17
 *   insn=0x00000000003156DC string=0x00000000003156E0 "hR@9H"
 *   insn=0x00000000003156E0 string=0x00000000003156E4 "H"
 *   insn=0x00000000003156E4 string=0x00000000003156E8 "h"
 *   insn=0x00000000003156E8 string=0x0000000000315714 "`"
 *   insn=0x00000000003156EC string=0x00000000003156F0 ""
 *   insn=0x00000000003156F0 string=0x00000000003156F4 "`"
 *   insn=0x00000000003156F0 string=0x0000000000315750 "t\n"
 *   insn=0x00000000003156F8 string=0x0000000000315730 "h"
 *   insn=0x00000000003156FC string=0x0000000000315700 """
 *   insn=0x0000000000315718 string=0x0000000000315738 "t"
 *   insn=0x000000000031571C string=0x0000000000315720 """
 *   insn=0x0000000000315724 string=0x0000000000315728 "h"
 *   insn=0x0000000000315728 string=0x000000000031572C "\t"
 *   insn=0x0000000000315744 string=0x0000000000315748 ""
 *   insn=0x0000000000315744 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000315764 string=0x0000000000315768 "h"
 *   insn=0x000000000031576C string=0x0000000000315770 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ElevatorControllerComponent::ByteSize(
        Caver::Proto::ElevatorControllerComponent *this,
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

