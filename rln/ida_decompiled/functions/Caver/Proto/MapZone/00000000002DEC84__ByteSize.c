/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DEC84
 * Mangled: _ZNK5Caver5Proto7MapZone8ByteSizeEv
 * Demangled: Caver::Proto::MapZone::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FE2E0  Caver::Proto::MapZone::ByteSize(void)
 *
 * Callees: 2
 *   0x00000000001F3D60  Caver::Proto::MapNode::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 46
 *   insn=0x00000000002DEC94 string=0x00000000002DEC98 "i"
 *   insn=0x00000000002DECA0 string=0x00000000002DECB8 "t\n@"
 *   insn=0x00000000002DECA8 string=0x00000000002DECAC "#"
 *   insn=0x00000000002DECA8 string=0x00000000002DECF8 "u"
 *   insn=0x00000000002DECAC string=0x00000000002DED38 "i"
 *   insn=0x00000000002DECB0 string=0x00000000002DECB4 "D"
 *   insn=0x00000000002DECB4 string=0x00000000002DEDC4 "h*@"
 *   insn=0x00000000002DECBC string=0x00000000002DECC0 ""
 *   insn=0x00000000002DECC4 string=0x00000000002DECC8 "b"
 *   insn=0x00000000002DECCC string=0x00000000002DECD0 ""
 *   insn=0x00000000002DECD0 string=0x00000000002DECEC "H"
 *   insn=0x00000000002DECD4 string=0x00000000002DECD8 ">]"
 *   insn=0x00000000002DECD8 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002DECDC string=0x00000000002DECE0 "ij@"
 *   insn=0x00000000002DECE4 string=0x00000000002DECE8 ""
 *   insn=0x00000000002DECF0 string=0x00000000002DECF4 ")"
 *   insn=0x00000000002DECFC string=0x00000000002DED00 ""
 *   insn=0x00000000002DED04 string=0x00000000002DED08 "b"
 *   insn=0x00000000002DED0C string=0x00000000002DED10 ""
 *   insn=0x00000000002DED10 string=0x00000000002DED2C "H"
 *   insn=0x00000000002DED14 string=0x00000000002DED18 ".]"
 *   insn=0x00000000002DED1C string=0x00000000002DED20 "ij@"
 *   insn=0x00000000002DED24 string=0x00000000002DED28 ""
 *   insn=0x00000000002DED38 string=0x00000000002DED3C "i"
 *   insn=0x00000000002DED38 string=0x00000000002DED44 "`Z@"
 *   insn=0x00000000002DED3C string=0x00000000002DED40 "!"
 *   insn=0x00000000002DED3C string=0x00000000002DED88 "u2@"
 *   insn=0x00000000002DED48 string=0x00000000002DED64 "h"
 *   insn=0x00000000002DED4C string=0x00000000002DED50 """
 *   insn=0x00000000002DED58 string=0x00000000002DED5C "i"
 *   insn=0x00000000002DED74 string=0x00000000002DED78 "ij@"
 *   insn=0x00000000002DED78 string=0x00000000002DED7C ""
 *   insn=0x00000000002DED80 string=0x00000000002DED84 "\t"
 *   insn=0x00000000002DED8C string=0x00000000002DED90 ""
 *   insn=0x00000000002DED94 string=0x00000000002DED98 "b"
 *   insn=0x00000000002DEDA0 string=0x00000000002DEDB8 "("
 *   insn=0x00000000002DEDA4 string=0x00000000002DEDA8 "\n]"
 *   insn=0x00000000002DEDB0 string=0x00000000002DEDB4 ""
 *   insn=0x00000000002DEDCC string=0x00000000002DEDD0 "K"
 *   insn=0x00000000002DEDD0 string=0x00000000002DEE18 "t\n"
 *   insn=0x00000000002DEDD4 string=0x00000000002DEDD8 "h"
 *   insn=0x00000000002DEDE0 string=0x00000000001F3D60 "P'"
 *   insn=0x00000000002DEDE8 string=0x00000000002DEDEC "b"
 *   insn=0x00000000002DEDF4 string=0x00000000002DEE00 "h*"
 *   insn=0x00000000002DEE08 string=0x00000000002DEE0C "4"
 *   insn=0x00000000002DEE10 string=0x00000000002DEE14 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapZone::ByteSize(Caver::Proto::MapZone *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w20
  _QWORD *v5; // x20
  __int64 v6; // x8
  int v7; // w10
  int v8; // w0
  _QWORD *v9; // x21
  __int64 v10; // x8
  int v11; // w10
  int v12; // w0
  google::protobuf::io::CodedOutputStream *v13; // x0
  _QWORD *v14; // x21
  __int64 v15; // x8
  int v16; // w9
  int v17; // w8
  unsigned int v18; // w20
  __int64 v19; // x22
  unsigned int v20; // w1
  unsigned int v21; // w21
  int v22; // w0

  LOBYTE(v3) = *((_BYTE *)this + 104);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_28;
  }
  if ( (*((_BYTE *)this + 104) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 104) & 2) == 0 )
      goto LABEL_14;
    goto LABEL_10;
  }
  v5 = (_QWORD *)*((_QWORD *)this + 2);
  v6 = *(_QWORD *)(*v5 - 24LL);
  if ( (unsigned int)v6 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)(unsigned int)v6,
           a2);
    v3 = *((_DWORD *)this + 26);
    v7 = v8;
    v6 = *(_QWORD *)(*v5 - 24LL);
  }
  else
  {
    v7 = 1;
  }
  v4 = v7 + v6 + 1;
  if ( (v3 & 2) != 0 )
  {
LABEL_10:
    v9 = (_QWORD *)*((_QWORD *)this + 3);
    v10 = *(_QWORD *)(*v9 - 24LL);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v10,
              a2);
      v3 = *((_DWORD *)this + 26);
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
  if ( (v3 & 8) != 0 )
  {
    v13 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 22);
    if ( ((unsigned int)v13 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 0x10) == 0 )
        goto LABEL_28;
    }
    else if ( (unsigned int)v13 >= 0x80 )
    {
      v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, a2) + 1;
      if ( (*((_DWORD *)this + 26) & 0x10) == 0 )
        goto LABEL_28;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 0x10) == 0 )
        goto LABEL_28;
    }
  }
  else if ( (v3 & 0x10) == 0 )
  {
    goto LABEL_28;
  }
  v14 = (_QWORD *)*((_QWORD *)this + 12);
  v15 = *(_QWORD *)(*v14 - 24LL);
  if ( (unsigned int)v15 >= 0x80 )
  {
    v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v15,
            a2);
    v15 = *(_QWORD *)(*v14 - 24LL);
  }
  else
  {
    v16 = 1;
  }
  v4 += v16 + v15 + 1;
LABEL_28:
  v17 = *((_DWORD *)this + 10);
  v18 = v17 + v4;
  if ( v17 >= 1 )
  {
    v19 = 0;
    do
    {
      v21 = Caver::Proto::MapNode::ByteSize(*(Caver::Proto::MapNode **)(*((_QWORD *)this + 4) + 8 * v19));
      if ( v21 >= 0x80 )
        v22 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v21,
                v20);
      else
        v22 = 1;
      ++v19;
      v18 += v21 + v22;
    }
    while ( v19 < *((int *)this + 10) );
  }
  *((_DWORD *)this + 2) = v18;
  return v18;
}

