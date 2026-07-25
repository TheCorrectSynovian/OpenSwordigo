/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324B1C
 * Mangled: _ZNK5Caver5Proto34ChargingMonsterControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 31
 *   insn=0x0000000000324B28 string=0x0000000000324B2C "h"
 *   insn=0x0000000000324B2C string=0x0000000000324B30 "H"
 *   insn=0x0000000000324B30 string=0x0000000000324B34 "h"
 *   insn=0x0000000000324B34 string=0x0000000000324B60 "`"
 *   insn=0x0000000000324B38 string=0x0000000000324B3C "("
 *   insn=0x0000000000324B3C string=0x0000000000324B40 "`"
 *   insn=0x0000000000324B3C string=0x0000000000324BA0 "H"
 *   insn=0x0000000000324B44 string=0x0000000000324B7C "i"
 *   insn=0x0000000000324B48 string=0x0000000000324B4C """
 *   insn=0x0000000000324B54 string=0x0000000000324B9C "4"
 *   insn=0x0000000000324B58 string=0x0000000000324B5C ")"
 *   insn=0x0000000000324B5C string=0x0000000000324C00 "`\n"
 *   insn=0x0000000000324B64 string=0x0000000000324B84 "t"
 *   insn=0x0000000000324B70 string=0x0000000000324B74 "h"
 *   insn=0x0000000000324B74 string=0x0000000000324B78 "\n"
 *   insn=0x0000000000324B7C string=0x0000000000324B80 ""
 *   insn=0x0000000000324B90 string=0x0000000000324B94 "h"@"
 *   insn=0x0000000000324B90 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000324B94 string=0x0000000000324B98 "\t"
 *   insn=0x0000000000324BA0 string=0x0000000000324BA4 "`"
 *   insn=0x0000000000324BA8 string=0x0000000000324BBC "i"
 *   insn=0x0000000000324BAC string=0x0000000000324BB0 "B"
 *   insn=0x0000000000324BB0 string=0x0000000000324BD8 "~E"
 *   insn=0x0000000000324BB4 string=0x0000000000324BB8 ""
 *   insn=0x0000000000324BB8 string=0x0000000000324BE4 "4"
 *   insn=0x0000000000324BBC string=0x0000000000324BC0 "\t"
 *   insn=0x0000000000324BC4 string=0x0000000000324BC8 "h"@"
 *   insn=0x0000000000324BD8 string=0x0000000000324BDC "h"@"
 *   insn=0x0000000000324BDC string=0x0000000000324BE0 "\t"
 *   insn=0x0000000000324BF0 string=0x0000000000324BF4 "*"
 *   insn=0x0000000000324BF8 string=0x0000000000324BFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ChargingMonsterControllerComponent::ByteSize(
        Caver::Proto::ChargingMonsterControllerComponent *this,
        unsigned int a2)
{
  int v3; // w8
  int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w9
  int v12; // w0
  int v13; // w0
  unsigned int v14; // w9

  LOBYTE(v3) = *((_BYTE *)this + 32);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_31;
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    v8 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v8 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) != 0 )
        goto LABEL_4;
    }
    else if ( (unsigned int)v8 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 8);
      v4 = v12 + 1;
      if ( (v3 & 2) != 0 )
        goto LABEL_4;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) != 0 )
        goto LABEL_4;
    }
  }
  else
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 32) & 2) != 0 )
    {
LABEL_4:
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
    }
  }
  if ( (v3 & 4) != 0 )
  {
    v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v10 & 0x80000000) != 0 )
    {
      v11 = 11;
    }
    else if ( (unsigned int)v10 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2);
      v3 = *((_DWORD *)this + 8);
      v11 = v13 + 1;
    }
    else
    {
      v11 = 2;
    }
    v4 += v11;
  }
  v14 = v4 + 5;
  if ( (v3 & 8) == 0 )
    v14 = v4;
  if ( (v3 & 0x10) != 0 )
    result = v14 + 5;
  else
    result = v14;
LABEL_31:
  *((_DWORD *)this + 2) = result;
  return result;
}

