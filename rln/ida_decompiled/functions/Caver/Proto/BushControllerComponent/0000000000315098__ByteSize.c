/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315098
 * Mangled: _ZNK5Caver5Proto23BushControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::BushControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 28
 *   insn=0x00000000003150A4 string=0x00000000003150A8 "hb@9H"
 *   insn=0x00000000003150A8 string=0x00000000003150AC "H"
 *   insn=0x00000000003150AC string=0x00000000003150B0 "h"
 *   insn=0x00000000003150B0 string=0x00000000003150DC "`"
 *   insn=0x00000000003150B4 string=0x00000000003150B8 "("
 *   insn=0x00000000003150B8 string=0x00000000003150BC "`"
 *   insn=0x00000000003150B8 string=0x000000000031511C "("
 *   insn=0x00000000003150C0 string=0x00000000003150F8 "i"
 *   insn=0x00000000003150C4 string=0x00000000003150C8 """
 *   insn=0x00000000003150C8 string=0x000000000031510C "1"
 *   insn=0x00000000003150D0 string=0x0000000000315118 "4"
 *   insn=0x00000000003150D4 string=0x00000000003150D8 """
 *   insn=0x00000000003150D8 string=0x0000000000315160 "t\n"
 *   insn=0x00000000003150E0 string=0x0000000000315100 "t"
 *   insn=0x00000000003150E8 string=0x0000000000315140 "$"
 *   insn=0x00000000003150EC string=0x00000000003150F0 "h"
 *   insn=0x00000000003150F0 string=0x00000000003150F4 "\n"
 *   insn=0x00000000003150F8 string=0x00000000003150FC ""
 *   insn=0x000000000031510C string=0x0000000000315110 "h"
 *   insn=0x000000000031510C string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000315110 string=0x0000000000315114 "\t"
 *   insn=0x000000000031511C string=0x0000000000315120 "`"
 *   insn=0x0000000000315124 string=0x0000000000315138 "h"
 *   insn=0x0000000000315128 string=0x000000000031512C "B"
 *   insn=0x0000000000315130 string=0x0000000000315134 "\n"
 *   insn=0x0000000000315138 string=0x000000000031513C ""
 *   insn=0x0000000000315140 string=0x0000000000315144 "h"
 *   insn=0x0000000000315154 string=0x0000000000315158 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BushControllerComponent::ByteSize(
        Caver::Proto::BushControllerComponent *this,
        unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  google::protobuf::io::CodedOutputStream *v7; // x0
  int v8; // w0
  google::protobuf::io::CodedOutputStream *v9; // x0
  int v10; // w8
  int v11; // w0

  LOBYTE(v3) = *((_BYTE *)this + 24);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_26;
  }
  if ( (*((_BYTE *)this + 24) & 1) != 0 )
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
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2);
      v3 = *((_DWORD *)this + 6);
      v4 = v11 + 1;
      if ( (v3 & 2) == 0 )
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
    if ( (*((_BYTE *)this + 24) & 2) == 0 )
      goto LABEL_17;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 6);
    v6 = v8 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  if ( (v3 & 4) != 0 )
  {
    v9 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v9 & 0x80000000) != 0 )
    {
      v10 = 11;
    }
    else if ( (unsigned int)v9 >= 0x80 )
    {
      v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, a2) + 1;
    }
    else
    {
      v10 = 2;
    }
    v4 += v10;
  }
LABEL_26:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

