/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D22E8
 * Mangled: _ZNK5Caver5Proto22Texture_ConversionInfo8ByteSizeEv
 * Demangled: Caver::Proto::Texture_ConversionInfo::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F9E40  Caver::Proto::Texture_ConversionInfo::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 36
 *   insn=0x00000000002D22F4 string=0x00000000002D22F8 "hr@9H"
 *   insn=0x00000000002D22F8 string=0x00000000002D22FC "H"
 *   insn=0x00000000002D22FC string=0x00000000002D2300 "h"
 *   insn=0x00000000002D2300 string=0x00000000002D232C "`"
 *   insn=0x00000000002D2304 string=0x00000000002D2308 "("
 *   insn=0x00000000002D2308 string=0x00000000002D230C "`"
 *   insn=0x00000000002D2308 string=0x00000000002D236C ""
 *   insn=0x00000000002D2310 string=0x00000000002D2348 "i"
 *   insn=0x00000000002D2314 string=0x00000000002D2318 """
 *   insn=0x00000000002D2320 string=0x00000000002D2368 "4"
 *   insn=0x00000000002D2324 string=0x00000000002D2328 "/"
 *   insn=0x00000000002D2328 string=0x00000000002D23E4 "t\n"
 *   insn=0x00000000002D2330 string=0x00000000002D2350 "t"
 *   insn=0x00000000002D2334 string=0x00000000002D2338 "b"
 *   insn=0x00000000002D233C string=0x00000000002D2340 "h"
 *   insn=0x00000000002D2340 string=0x00000000002D2344 "\n"
 *   insn=0x00000000002D2348 string=0x00000000002D234C ""
 *   insn=0x00000000002D235C string=0x00000000002D2360 "h"
 *   insn=0x00000000002D235C string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002D2360 string=0x00000000002D2364 "\t"
 *   insn=0x00000000002D236C string=0x00000000002D238C "`"
 *   insn=0x00000000002D2370 string=0x00000000002D2374 "`"
 *   insn=0x00000000002D2378 string=0x00000000002D23AC "h"
 *   insn=0x00000000002D2380 string=0x00000000002D23D8 "~"
 *   insn=0x00000000002D238C string=0x00000000002D2390 " "
 *   insn=0x00000000002D2390 string=0x00000000002D23B4 "i"
 *   insn=0x00000000002D2398 string=0x00000000002D23F8 "v"
 *   insn=0x00000000002D239C string=0x00000000002D23A0 "4"
 *   insn=0x00000000002D23B4 string=0x00000000002D23B8 "4"
 *   insn=0x00000000002D23BC string=0x00000000002D23C0 "\t"
 *   insn=0x00000000002D23C4 string=0x00000000002D23C8 "h"
 *   insn=0x00000000002D23D8 string=0x00000000002D23DC ""
 *   insn=0x00000000002D23F8 string=0x00000000002D23FC "h"
 *   insn=0x00000000002D23FC string=0x00000000002D2400 "\t"
 *   insn=0x00000000002D2400 string=0x00000000002D2404 "4"
 *   insn=0x00000000002D2404 string=0x00000000002D2408 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_ConversionInfo::ByteSize(
        Caver::Proto::Texture_ConversionInfo *this,
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

