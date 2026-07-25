/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327F78
 * Mangled: _ZNK5Caver5Proto34ShootingMonsterControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 19
 *   insn=0x0000000000327F84 string=0x0000000000327F88 "hR@9H"
 *   insn=0x0000000000327F88 string=0x0000000000327F8C "H"
 *   insn=0x0000000000327F8C string=0x0000000000327F90 "h"
 *   insn=0x0000000000327F90 string=0x0000000000327FBC "`"
 *   insn=0x0000000000327F94 string=0x0000000000327F98 ""
 *   insn=0x0000000000327F98 string=0x0000000000327F9C "`"
 *   insn=0x0000000000327F98 string=0x0000000000327FF8 "t\n"
 *   insn=0x0000000000327FA0 string=0x0000000000327FD8 "h"
 *   insn=0x0000000000327FA4 string=0x0000000000327FA8 """
 *   insn=0x0000000000327FA8 string=0x0000000000327FEC "y8"
 *   insn=0x0000000000327FC0 string=0x0000000000327FE0 "t"
 *   insn=0x0000000000327FC4 string=0x0000000000327FC8 """
 *   insn=0x0000000000327FC8 string=0x000000000032800C "q8"
 *   insn=0x0000000000327FCC string=0x0000000000327FD0 "h"
 *   insn=0x0000000000327FD0 string=0x0000000000327FD4 "\t"
 *   insn=0x0000000000327FEC string=0x0000000000327FF0 ""
 *   insn=0x0000000000327FEC string=0x00000000001F61D0 "0'"
 *   insn=0x000000000032800C string=0x0000000000328010 "h"
 *   insn=0x0000000000328014 string=0x0000000000328018 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShootingMonsterControllerComponent::ByteSize(
        Caver::Proto::ShootingMonsterControllerComponent *this,
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

