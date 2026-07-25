/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032FE6C
 * Mangled: _ZNK5Caver5Proto31ItemDropComponent_ItemDropEntry8ByteSizeEv
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FDFF0  Caver::Proto::ItemDropComponent_ItemDropEntry::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 28
 *   insn=0x000000000032FE7C string=0x000000000032FE80 "i"
 *   insn=0x000000000032FE88 string=0x000000000032FEA0 "t\n@"
 *   insn=0x000000000032FE90 string=0x000000000032FE94 "#"
 *   insn=0x000000000032FE90 string=0x000000000032FEE0 "u"
 *   insn=0x000000000032FE98 string=0x000000000032FE9C "="
 *   insn=0x000000000032FE9C string=0x000000000032FF90 "t\n"
 *   insn=0x000000000032FEA4 string=0x000000000032FEA8 ""
 *   insn=0x000000000032FEAC string=0x000000000032FEB0 "b"
 *   insn=0x000000000032FEB4 string=0x000000000032FEB8 ""
 *   insn=0x000000000032FEB8 string=0x000000000032FED4 "H"
 *   insn=0x000000000032FEC0 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000032FEC4 string=0x000000000032FEC8 "i.@"
 *   insn=0x000000000032FECC string=0x000000000032FED0 ""
 *   insn=0x000000000032FED8 string=0x000000000032FEDC ")"
 *   insn=0x000000000032FEE4 string=0x000000000032FEE8 ""
 *   insn=0x000000000032FEEC string=0x000000000032FEF0 "b"
 *   insn=0x000000000032FEF4 string=0x000000000032FEF8 ""
 *   insn=0x000000000032FEF8 string=0x000000000032FF14 "H"
 *   insn=0x000000000032FF04 string=0x000000000032FF08 "i.@"
 *   insn=0x000000000032FF0C string=0x000000000032FF10 ""
 *   insn=0x000000000032FF20 string=0x000000000032FF24 "?"
 *   insn=0x000000000032FF2C string=0x000000000032FF30 "`&@"
 *   insn=0x000000000032FF34 string=0x000000000032FF48 "h"
 *   insn=0x000000000032FF50 string=0x000000000032FF54 "i.@"
 *   insn=0x000000000032FF54 string=0x000000000032FF58 ""
 *   insn=0x000000000032FF60 string=0x000000000032FF64 "`*@"
 *   insn=0x000000000032FF68 string=0x000000000032FF7C "h"
 *   insn=0x000000000032FF84 string=0x000000000032FF88 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::ByteSize(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this,
        unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  _QWORD *v5; // x20
  __int64 v6; // x8
  int v7; // w10
  int v8; // w0
  _QWORD *v9; // x21
  __int64 v10; // x8
  int v11; // w10
  int v12; // w0
  google::protobuf::io::CodedOutputStream *v13; // x0
  int v14; // w8
  int v15; // w0
  google::protobuf::io::CodedOutputStream *v16; // x0
  int v17; // w8

  LOBYTE(v3) = *((_BYTE *)this + 44);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_30;
  }
  if ( (*((_BYTE *)this + 44) & 1) != 0 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 2);
    v6 = *(_QWORD *)(*v5 - 24LL);
    if ( (unsigned int)v6 >= 0x80 )
    {
      v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v6,
             a2);
      v3 = *((_DWORD *)this + 11);
      v7 = v8;
      v6 = *(_QWORD *)(*v5 - 24LL);
    }
    else
    {
      v7 = 1;
    }
    v4 = v7 + v6 + 1;
    if ( (v3 & 2) == 0 )
      goto LABEL_14;
    goto LABEL_10;
  }
  v4 = 0;
  if ( (*((_BYTE *)this + 44) & 2) != 0 )
  {
LABEL_10:
    v9 = (_QWORD *)*((_QWORD *)this + 3);
    v10 = *(_QWORD *)(*v9 - 24LL);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v10,
              a2);
      v3 = *((_DWORD *)this + 11);
      v11 = v12;
      v10 = *(_QWORD *)(*v9 - 24LL);
    }
    else
    {
      v11 = 1;
    }
    v4 += v11 + v10 + 1;
  }
LABEL_14:
  if ( (v3 & 4) != 0 )
    v4 += 5;
  if ( (v3 & 8) != 0 )
  {
    v13 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 9);
    if ( ((unsigned int)v13 & 0x80000000) != 0 )
    {
      v14 = 11;
    }
    else if ( (unsigned int)v13 >= 0x80 )
    {
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, a2);
      v3 = *((_DWORD *)this + 11);
      v14 = v15 + 1;
    }
    else
    {
      v14 = 2;
    }
    v4 += v14;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v16 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 10);
    if ( ((unsigned int)v16 & 0x80000000) != 0 )
    {
      v17 = 11;
    }
    else if ( (unsigned int)v16 >= 0x80 )
    {
      v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v16, a2) + 1;
    }
    else
    {
      v17 = 2;
    }
    v4 += v17;
  }
LABEL_30:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

