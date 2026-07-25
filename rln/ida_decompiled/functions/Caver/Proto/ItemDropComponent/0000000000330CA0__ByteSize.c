/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330CA0
 * Mangled: _ZNK5Caver5Proto17ItemDropComponent8ByteSizeEv
 * Demangled: Caver::Proto::ItemDropComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FDFF0  Caver::Proto::ItemDropComponent_ItemDropEntry::ByteSize(void)
 *
 * Referenced strings: 37
 *   insn=0x0000000000330CB0 string=0x0000000000330CB4 "irA9"
 *   insn=0x0000000000330CBC string=0x0000000000330CD4 "t\n@"
 *   insn=0x0000000000330CC4 string=0x0000000000330CC8 "#"
 *   insn=0x0000000000330CC4 string=0x0000000000330D14 "u"
 *   insn=0x0000000000330CCC string=0x0000000000330CD0 "'"
 *   insn=0x0000000000330CD0 string=0x0000000000330D6C "i*@"
 *   insn=0x0000000000330CD8 string=0x0000000000330CDC ""
 *   insn=0x0000000000330CE0 string=0x0000000000330CE4 "b"
 *   insn=0x0000000000330CE8 string=0x0000000000330CEC ""
 *   insn=0x0000000000330CEC string=0x0000000000330D08 "H"
 *   insn=0x0000000000330CF0 string=0x0000000000330CF4 "7"
 *   insn=0x0000000000330CF4 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000330CF8 string=0x0000000000330CFC "i^@"
 *   insn=0x0000000000330D00 string=0x0000000000330D04 ""
 *   insn=0x0000000000330D0C string=0x0000000000330D10 ")"
 *   insn=0x0000000000330D18 string=0x0000000000330D1C ""
 *   insn=0x0000000000330D20 string=0x0000000000330D24 "b"
 *   insn=0x0000000000330D28 string=0x0000000000330D2C ""
 *   insn=0x0000000000330D2C string=0x0000000000330D48 "H"
 *   insn=0x0000000000330D30 string=0x0000000000330D34 "'"
 *   insn=0x0000000000330D38 string=0x0000000000330D3C "i^@"
 *   insn=0x0000000000330D40 string=0x0000000000330D44 ""
 *   insn=0x0000000000330D54 string=0x0000000000330D58 "?"
 *   insn=0x0000000000330D5C string=0x0000000000330D60 "\n\t"
 *   insn=0x0000000000330D60 string=0x0000000000330D64 "?"
 *   insn=0x0000000000330D64 string=0x0000000000330D68 ""
 *   insn=0x0000000000330D6C string=0x0000000000330D70 "?"
 *   insn=0x0000000000330D70 string=0x0000000000330D74 "4"
 *   insn=0x0000000000330D74 string=0x0000000000330D78 "K"
 *   insn=0x0000000000330D78 string=0x0000000000330DC0 "t\n"
 *   insn=0x0000000000330D7C string=0x0000000000330D80 "h"
 *   insn=0x0000000000330D88 string=0x00000000001FDFF0 "0'"
 *   insn=0x0000000000330D90 string=0x0000000000330D94 "b"
 *   insn=0x0000000000330D9C string=0x0000000000330DA8 "h*"
 *   insn=0x0000000000330DA0 string=0x0000000000330DA4 ""
 *   insn=0x0000000000330DB0 string=0x0000000000330DB4 "4"
 *   insn=0x0000000000330DB8 string=0x0000000000330DBC "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ItemDropComponent::ByteSize(Caver::Proto::ItemDropComponent *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w20
  int v5; // w8
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0
  _QWORD *v10; // x21
  __int64 v11; // x8
  int v12; // w10
  int v13; // w0
  int v14; // w9
  unsigned int v15; // w20
  __int64 v16; // x22
  unsigned int v17; // w1
  unsigned int v18; // w21
  int v19; // w0

  LOBYTE(v3) = *((_BYTE *)this + 92);
  if ( !(_BYTE)v3 )
  {
    v5 = 0;
    goto LABEL_18;
  }
  if ( (*((_BYTE *)this + 92) & 1) != 0 )
  {
    v6 = (_QWORD *)*((_QWORD *)this + 2);
    v7 = *(_QWORD *)(*v6 - 24LL);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
             a2);
      v3 = *((_DWORD *)this + 23);
      v8 = v9;
      v7 = *(_QWORD *)(*v6 - 24LL);
    }
    else
    {
      v8 = 1;
    }
    v4 = v8 + v7 + 1;
    if ( (v3 & 2) == 0 )
      goto LABEL_14;
    goto LABEL_10;
  }
  v4 = 0;
  if ( (*((_BYTE *)this + 92) & 2) != 0 )
  {
LABEL_10:
    v10 = (_QWORD *)*((_QWORD *)this + 3);
    v11 = *(_QWORD *)(*v10 - 24LL);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v11,
              a2);
      v3 = *((_DWORD *)this + 23);
      v12 = v13;
      v11 = *(_QWORD *)(*v10 - 24LL);
    }
    else
    {
      v12 = 1;
    }
    v4 += v12 + v11 + 1;
  }
LABEL_14:
  v5 = v4 + 2;
  if ( (v3 & 8) == 0 )
    v5 = v4;
  if ( (v3 & 0x10) != 0 )
    v5 += 2;
LABEL_18:
  v14 = *((_DWORD *)this + 10);
  v15 = v14 + v5;
  if ( v14 >= 1 )
  {
    v16 = 0;
    do
    {
      v18 = Caver::Proto::ItemDropComponent_ItemDropEntry::ByteSize(*(Caver::Proto::ItemDropComponent_ItemDropEntry **)(*((_QWORD *)this + 4) + 8 * v16));
      if ( v18 >= 0x80 )
        v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v18,
                v17);
      else
        v19 = 1;
      ++v16;
      v15 += v18 + v19;
    }
    while ( v16 < *((int *)this + 10) );
  }
  *((_DWORD *)this + 2) = v15;
  return v15;
}

