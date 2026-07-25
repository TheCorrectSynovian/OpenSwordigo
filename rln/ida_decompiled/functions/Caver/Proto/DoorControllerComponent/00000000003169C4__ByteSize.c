/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003169C4
 * Mangled: _ZNK5Caver5Proto23DoorControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::DoorControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 38
 *   insn=0x00000000003169D0 string=0x00000000003169D4 "h"
 *   insn=0x00000000003169D4 string=0x00000000003169D8 "H"
 *   insn=0x00000000003169D8 string=0x00000000003169DC "h"
 *   insn=0x00000000003169DC string=0x0000000000316A08 "`"
 *   insn=0x00000000003169E0 string=0x00000000003169E4 "("
 *   insn=0x00000000003169E4 string=0x00000000003169E8 "`"
 *   insn=0x00000000003169E4 string=0x0000000000316A48 ""
 *   insn=0x00000000003169EC string=0x0000000000316A24 "i"
 *   insn=0x00000000003169F0 string=0x00000000003169F4 """
 *   insn=0x00000000003169FC string=0x0000000000316A44 "4"
 *   insn=0x0000000000316A00 string=0x0000000000316A04 "3"
 *   insn=0x0000000000316A04 string=0x0000000000316AD0 "`\n"
 *   insn=0x0000000000316A0C string=0x0000000000316A2C "t"
 *   insn=0x0000000000316A10 string=0x0000000000316A14 "b"
 *   insn=0x0000000000316A18 string=0x0000000000316A1C "h"
 *   insn=0x0000000000316A1C string=0x0000000000316A20 "\n"
 *   insn=0x0000000000316A24 string=0x0000000000316A28 ""
 *   insn=0x0000000000316A38 string=0x0000000000316A3C "h"@"
 *   insn=0x0000000000316A38 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000316A3C string=0x0000000000316A40 "\t"
 *   insn=0x0000000000316A48 string=0x0000000000316A68 "`"
 *   insn=0x0000000000316A4C string=0x0000000000316A50 "`"
 *   insn=0x0000000000316A54 string=0x0000000000316A88 "i"
 *   insn=0x0000000000316A64 string=0x0000000000316AC0 "4"
 *   insn=0x0000000000316A68 string=0x0000000000316A6C " "
 *   insn=0x0000000000316A6C string=0x0000000000316A90 "i"
 *   insn=0x0000000000316A70 string=0x0000000000316A74 "b"
 *   insn=0x0000000000316A78 string=0x0000000000316A7C "4"
 *   insn=0x0000000000316A88 string=0x0000000000316A8C ""
 *   insn=0x0000000000316A90 string=0x0000000000316A94 "4"
 *   insn=0x0000000000316A98 string=0x0000000000316A9C "\n"
 *   insn=0x0000000000316AA0 string=0x0000000000316AA4 "h"@"
 *   insn=0x0000000000316AB4 string=0x0000000000316AB8 "h"@"
 *   insn=0x0000000000316AB8 string=0x0000000000316ABC "\t"
 *   insn=0x0000000000316AE0 string=0x0000000000316AE4 "h"@"
 *   insn=0x0000000000316AE4 string=0x0000000000316AE8 "\t"
 *   insn=0x0000000000316AE8 string=0x0000000000316AEC "4"
 *   insn=0x0000000000316AEC string=0x0000000000316AF0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DoorControllerComponent::ByteSize(
        Caver::Proto::DoorControllerComponent *this,
        unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w9
  google::protobuf::io::CodedOutputStream *v12; // x0
  int v13; // w0
  int v14; // w0
  int v15; // w0

  LOBYTE(v3) = *((_BYTE *)this + 32);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_36;
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    v8 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v8 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v8 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 8);
      v4 = v13 + 1;
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
    if ( (*((_BYTE *)this + 32) & 2) == 0 )
      goto LABEL_17;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 8);
    v6 = v9 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  if ( (v3 & 4) != 0 )
  {
    v12 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v12 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 8) != 0 )
        goto LABEL_19;
    }
    else if ( (unsigned int)v12 >= 0x80 )
    {
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, a2);
      v3 = *((_DWORD *)this + 8);
      v4 += v15 + 1;
      if ( (v3 & 8) != 0 )
        goto LABEL_19;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 8) != 0 )
        goto LABEL_19;
    }
  }
  else if ( (v3 & 8) != 0 )
  {
LABEL_19:
    v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
    if ( ((unsigned int)v10 & 0x80000000) != 0 )
    {
      v11 = 11;
    }
    else if ( (unsigned int)v10 >= 0x80 )
    {
      v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2);
      v3 = *((_DWORD *)this + 8);
      v11 = v14 + 1;
    }
    else
    {
      v11 = 2;
    }
    v4 += v11;
  }
  if ( (v3 & 0x10) != 0 )
    result = v4 + 2;
  else
    result = v4;
LABEL_36:
  *((_DWORD *)this + 2) = result;
  return result;
}

