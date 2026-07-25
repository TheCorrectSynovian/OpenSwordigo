/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D3F44
 * Mangled: _ZNK5Caver5Proto10Font_Glyph8ByteSizeEv
 * Demangled: Caver::Proto::Font_Glyph::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F66D0  Caver::Proto::Font_Glyph::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 65
 *   insn=0x00000000002D3F50 string=0x00000000002D3F54 "h"
 *   insn=0x00000000002D3F5C string=0x00000000002D3F74 "`"
 *   insn=0x00000000002D3F60 string=0x00000000002D3F64 "H"
 *   insn=0x00000000002D3F64 string=0x00000000002D3F68 "*"
 *   insn=0x00000000002D3F68 string=0x00000000002D4010 "h"
 *   insn=0x00000000002D3F6C string=0x00000000002D3F70 "T"
 *   insn=0x00000000002D3F70 string=0x00000000002D40C0 "t\n"
 *   insn=0x00000000002D3F78 string=0x00000000002D3F90 "t"
 *   insn=0x00000000002D3F84 string=0x00000000002D3F88 "("
 *   insn=0x00000000002D3F88 string=0x00000000002D3F8C "!"
 *   insn=0x00000000002D3F9C string=0x00000000002D3FA0 "h*@"
 *   insn=0x00000000002D3F9C string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002D3FA4 string=0x00000000002D3FA8 "H"
 *   insn=0x00000000002D3FAC string=0x00000000002D3FB0 "h\n@"
 *   insn=0x00000000002D3FB0 string=0x00000000002D3FB4 ")"
 *   insn=0x00000000002D3FB8 string=0x00000000002D3FBC ")"
 *   insn=0x00000000002D3FBC string=0x00000000002D3FC0 "("
 *   insn=0x00000000002D3FC0 string=0x00000000002D3FC4 "\t@"
 *   insn=0x00000000002D3FC4 string=0x00000000002D3FC8 "\tq@9"
 *   insn=0x00000000002D3FCC string=0x00000000002D3FD0 "*"
 *   insn=0x00000000002D3FCC string=0x00000000002D4000 "\t\t"
 *   insn=0x00000000002D3FD4 string=0x00000000002D3FD8 "J"
 *   insn=0x00000000002D3FD8 string=0x00000000002D3FDC "?"
 *   insn=0x00000000002D3FDC string=0x00000000002D3FE0 "K"
 *   insn=0x00000000002D3FE0 string=0x00000000002D3FE4 "J"
 *   insn=0x00000000002D3FE4 string=0x00000000002D3FE8 "?"
 *   insn=0x00000000002D3FE8 string=0x00000000002D3FEC "K"
 *   insn=0x00000000002D3FEC string=0x00000000002D3FF0 "J"
 *   insn=0x00000000002D3FF0 string=0x00000000002D3FF4 "K"
 *   insn=0x00000000002D3FF4 string=0x00000000002D3FF8 "?"
 *   insn=0x00000000002D3FF8 string=0x00000000002D3FFC "I"
 *   insn=0x00000000002D4000 string=0x00000000002D4004 "h*@"
 *   insn=0x00000000002D4008 string=0x00000000002D400C "4\t"
 *   insn=0x00000000002D4010 string=0x00000000002D4014 "h"
 *   insn=0x00000000002D4010 string=0x00000000002D401C "`"
 *   insn=0x00000000002D4014 string=0x00000000002D4018 "*"
 *   insn=0x00000000002D4020 string=0x00000000002D403C "i"
 *   insn=0x00000000002D4024 string=0x00000000002D4028 """
 *   insn=0x00000000002D4028 string=0x00000000002D404C "a"
 *   insn=0x00000000002D402C string=0x00000000002D4030 "4"
 *   insn=0x00000000002D4030 string=0x00000000002D4034 "h"
 *   insn=0x00000000002D4034 string=0x00000000002D4038 """
 *   insn=0x00000000002D403C string=0x00000000002D4040 "4"
 *   insn=0x00000000002D404C string=0x00000000002D4050 "h*@"
 *   insn=0x00000000002D4050 string=0x00000000002D4054 "\t"
 *   insn=0x00000000002D4054 string=0x00000000002D4058 "4"
 *   insn=0x00000000002D4058 string=0x00000000002D405C "("
 *   insn=0x00000000002D4060 string=0x00000000002D4064 "h"
 *   insn=0x00000000002D4064 string=0x00000000002D4068 ")"
 *   insn=0x00000000002D406C string=0x00000000002D4070 ")"
 *   insn=0x00000000002D4070 string=0x00000000002D4074 "("
 *   insn=0x00000000002D4074 string=0x00000000002D4078 ""
 *   insn=0x00000000002D4078 string=0x00000000002D407C "\tq@9"
 *   insn=0x00000000002D4080 string=0x00000000002D4084 "*"
 *   insn=0x00000000002D4080 string=0x00000000002D40B4 "\t\t"
 *   insn=0x00000000002D4088 string=0x00000000002D408C "J"
 *   insn=0x00000000002D408C string=0x00000000002D4090 "?"
 *   insn=0x00000000002D4090 string=0x00000000002D4094 "K"
 *   insn=0x00000000002D4094 string=0x00000000002D4098 "J"
 *   insn=0x00000000002D4098 string=0x00000000002D409C "?"
 *   insn=0x00000000002D409C string=0x00000000002D40A0 "K"
 *   insn=0x00000000002D40A0 string=0x00000000002D40A4 "J"
 *   insn=0x00000000002D40A4 string=0x00000000002D40A8 "K"
 *   insn=0x00000000002D40A8 string=0x00000000002D40AC "?"
 *   insn=0x00000000002D40AC string=0x00000000002D40B0 "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font_Glyph::ByteSize(Caver::Proto::Font_Glyph *this, unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w0
  Caver::Proto::Font_Glyph *v7; // x8
  __int64 v8; // x8
  int v9; // w9
  int v10; // w10
  google::protobuf::io::CodedOutputStream *v11; // x0
  Caver::Proto::Font_Glyph *v12; // x8
  __int64 v13; // x8
  int v14; // w9
  int v15; // w10

  LOBYTE(v3) = *((_BYTE *)this + 40);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_47;
  }
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 40) & 2) == 0 )
      goto LABEL_25;
LABEL_13:
    if ( *((_QWORD *)this + 2) )
      v7 = this;
    else
      v7 = (Caver::Proto::Font_Glyph *)Caver::Proto::Font_Glyph::default_instance_;
    v8 = *((_QWORD *)v7 + 2);
    v9 = *(unsigned __int8 *)(v8 + 28);
    if ( *(_BYTE *)(v8 + 28) )
    {
      v10 = (v9 << 31 >> 31) & 5;
      if ( (v9 & 2) != 0 )
        v10 += 5;
      if ( (v9 & 4) != 0 )
        v10 += 5;
      if ( (v9 & 8) != 0 )
        v9 = v10 + 5;
      else
        v9 = v10;
    }
    *(_DWORD *)(v8 + 8) = v9;
    v3 = *((_DWORD *)this + 10);
    v4 += v9 + 2;
    goto LABEL_25;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v4 = 11;
    if ( (v3 & 2) == 0 )
      goto LABEL_25;
    goto LABEL_13;
  }
  if ( (unsigned int)v5 < 0x80 )
  {
    v4 = 2;
    if ( (v3 & 2) == 0 )
      goto LABEL_25;
    goto LABEL_13;
  }
  v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
  v3 = *((_DWORD *)this + 10);
  v4 = v6 + 1;
  if ( (v3 & 2) != 0 )
    goto LABEL_13;
LABEL_25:
  if ( (v3 & 4) != 0 )
  {
    v11 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
    if ( ((unsigned int)v11 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 8) == 0 )
        goto LABEL_47;
    }
    else if ( (unsigned int)v11 >= 0x80 )
    {
      v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, a2) + 1;
      if ( (*((_DWORD *)this + 10) & 8) == 0 )
        goto LABEL_47;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 8) == 0 )
        goto LABEL_47;
    }
  }
  else if ( (v3 & 8) == 0 )
  {
    goto LABEL_47;
  }
  if ( *((_QWORD *)this + 4) )
    v12 = this;
  else
    v12 = (Caver::Proto::Font_Glyph *)Caver::Proto::Font_Glyph::default_instance_;
  v13 = *((_QWORD *)v12 + 4);
  v14 = *(unsigned __int8 *)(v13 + 28);
  if ( *(_BYTE *)(v13 + 28) )
  {
    v15 = (v14 << 31 >> 31) & 5;
    if ( (v14 & 2) != 0 )
      v15 += 5;
    if ( (v14 & 4) != 0 )
      v15 += 5;
    if ( (v14 & 8) != 0 )
      v14 = v15 + 5;
    else
      v14 = v15;
  }
  *(_DWORD *)(v13 + 8) = v14;
  v4 += v14 + 2;
LABEL_47:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

