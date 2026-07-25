/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000338084
 * Mangled: _ZNK5Caver5Proto8MeshData8ByteSizeEv
 * Demangled: Caver::Proto::MeshData::ByteSize(void)
 *
 * Callers: 1
 *   0x0000000000202CE0  Caver::Proto::MeshData::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 35
 *   insn=0x0000000000338090 string=0x0000000000338094 "hr@9H"
 *   insn=0x0000000000338094 string=0x0000000000338098 "H"
 *   insn=0x0000000000338098 string=0x000000000033809C "h"
 *   insn=0x000000000033809C string=0x00000000003380C8 "`"
 *   insn=0x00000000003380A0 string=0x00000000003380A4 "("
 *   insn=0x00000000003380A4 string=0x00000000003380A8 "`"
 *   insn=0x00000000003380A4 string=0x0000000000338108 ""
 *   insn=0x00000000003380AC string=0x00000000003380E4 "i"
 *   insn=0x00000000003380B0 string=0x00000000003380B4 """
 *   insn=0x00000000003380B4 string=0x00000000003380F8 "6"
 *   insn=0x00000000003380BC string=0x0000000000338104 "4"
 *   insn=0x00000000003380C0 string=0x00000000003380C4 "/"
 *   insn=0x00000000003380C4 string=0x0000000000338180 "t\n"
 *   insn=0x00000000003380CC string=0x00000000003380EC "t"
 *   insn=0x00000000003380D0 string=0x00000000003380D4 "b"
 *   insn=0x00000000003380D8 string=0x00000000003380DC "h"
 *   insn=0x00000000003380DC string=0x00000000003380E0 "\n"
 *   insn=0x00000000003380E4 string=0x00000000003380E8 ""
 *   insn=0x00000000003380F8 string=0x00000000003380FC "h"
 *   insn=0x00000000003380F8 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000003380FC string=0x0000000000338100 "\t"
 *   insn=0x0000000000338108 string=0x0000000000338128 "`"
 *   insn=0x000000000033810C string=0x0000000000338110 "`"
 *   insn=0x0000000000338114 string=0x0000000000338148 "h"
 *   insn=0x0000000000338128 string=0x000000000033812C " "
 *   insn=0x000000000033812C string=0x0000000000338150 "i"
 *   insn=0x0000000000338138 string=0x000000000033813C "4"
 *   insn=0x0000000000338150 string=0x0000000000338154 "4"
 *   insn=0x0000000000338158 string=0x000000000033815C "\t"
 *   insn=0x0000000000338160 string=0x0000000000338164 "h"
 *   insn=0x0000000000338174 string=0x0000000000338178 ""
 *   insn=0x0000000000338194 string=0x0000000000338198 "h"
 *   insn=0x0000000000338198 string=0x000000000033819C "\t"
 *   insn=0x000000000033819C string=0x00000000003381A0 "4"
 *   insn=0x00000000003381A0 string=0x00000000003381A4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshData::ByteSize(Caver::Proto::MeshData *this, unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  google::protobuf::io::CodedOutputStream *v7; // x0
  int v8; // w0
  google::protobuf::io::CodedOutputStream *v9; // x0
  int v10; // w8
  google::protobuf::io::CodedOutputStream *v11; // x0
  int v12; // w0

  LOBYTE(v3) = *((_BYTE *)this + 28);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_33;
  }
  if ( (*((_BYTE *)this + 28) & 1) != 0 )
  {
    v7 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v7 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) != 0 )
        goto LABEL_4;
    }
    else if ( (unsigned int)v7 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2);
      v3 = *((_DWORD *)this + 7);
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
    if ( (*((_BYTE *)this + 28) & 2) != 0 )
    {
LABEL_4:
      v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
      if ( ((unsigned int)v5 & 0x80000000) != 0 )
      {
        v6 = 11;
      }
      else if ( (unsigned int)v5 >= 0x80 )
      {
        v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
        v3 = *((_DWORD *)this + 7);
        v6 = v8 + 1;
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
    v11 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v11 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 8) == 0 )
        goto LABEL_33;
    }
    else if ( (unsigned int)v11 >= 0x80 )
    {
      v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, a2) + 1;
      if ( (*((_DWORD *)this + 7) & 8) == 0 )
        goto LABEL_33;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 8) == 0 )
        goto LABEL_33;
    }
  }
  else if ( (v3 & 8) == 0 )
  {
    goto LABEL_33;
  }
  v9 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
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
LABEL_33:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

