/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DD97C
 * Mangled: _ZNK5Caver5Proto7MapNode8ByteSizeEv
 * Demangled: Caver::Proto::MapNode::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F3D60  Caver::Proto::MapNode::ByteSize(void)
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FCCB0  Caver::Proto::MapNode_Portal::ByteSize(void)
 *   0x00000000001FCDD0  Caver::Proto::Vector2::ByteSize(void)
 *
 * Referenced strings: 72
 *   insn=0x00000000002DD98C string=0x00000000002DD990 "i"
 *   insn=0x00000000002DD990 string=0x00000000002DD994 "?"
 *   insn=0x00000000002DD998 string=0x00000000002DD99C "\t"
 *   insn=0x00000000002DD99C string=0x00000000002DD9BC "I "
 *   insn=0x00000000002DD9A0 string=0x00000000002DD9A4 ")"
 *   insn=0x00000000002DD9A4 string=0x00000000002DD9A8 "("
 *   insn=0x00000000002DD9A4 string=0x00000000002DDA08 "u"
 *   insn=0x00000000002DD9A8 string=0x00000000002DDA48 "\t"
 *   insn=0x00000000002DD9AC string=0x00000000002DD9B0 "?"
 *   insn=0x00000000002DD9B8 string=0x00000000002DDBC0 "h2@"
 *   insn=0x00000000002DD9BC string=0x00000000002DD9C0 "h\n@"
 *   insn=0x00000000002DD9C0 string=0x00000000002DD9C4 ")"
 *   insn=0x00000000002DD9C8 string=0x00000000002DD9CC ")"
 *   insn=0x00000000002DD9CC string=0x00000000002DD9D0 "("
 *   insn=0x00000000002DD9D8 string=0x00000000001FCDD0 "0'"
 *   insn=0x00000000002DD9E0 string=0x00000000002DD9E4 "b"
 *   insn=0x00000000002DD9EC string=0x00000000002DD9F8 "i"
 *   insn=0x00000000002DD9F4 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002DDA00 string=0x00000000002DDA04 ")"
 *   insn=0x00000000002DDA0C string=0x00000000002DDA10 ""
 *   insn=0x00000000002DDA14 string=0x00000000002DDA18 "b"
 *   insn=0x00000000002DDA1C string=0x00000000002DDA20 ""
 *   insn=0x00000000002DDA20 string=0x00000000002DDA3C "H"
 *   insn=0x00000000002DDA2C string=0x00000000002DDA30 "i"
 *   insn=0x00000000002DDA34 string=0x00000000002DDA38 ""
 *   insn=0x00000000002DDA48 string=0x00000000002DDA68 "u"
 *   insn=0x00000000002DDA4C string=0x00000000002DDA50 "`b@"
 *   insn=0x00000000002DDA54 string=0x00000000002DDAB0 "h"
 *   insn=0x00000000002DDA6C string=0x00000000002DDA70 ""
 *   insn=0x00000000002DDA74 string=0x00000000002DDA78 "b"
 *   insn=0x00000000002DDA7C string=0x00000000002DDA80 ""
 *   insn=0x00000000002DDA80 string=0x00000000002DDA9C "H"
 *   insn=0x00000000002DDA8C string=0x00000000002DDA90 "i"
 *   insn=0x00000000002DDA94 string=0x00000000002DDA98 ""
 *   insn=0x00000000002DDAA4 string=0x00000000002DDAA8 "I"
 *   insn=0x00000000002DDAA8 string=0x00000000002DDAAC ""
 *   insn=0x00000000002DDAB8 string=0x00000000002DDABC "i"
 *   insn=0x00000000002DDABC string=0x00000000002DDAC0 ""
 *   insn=0x00000000002DDAC8 string=0x00000000002DDACC "?"
 *   insn=0x00000000002DDAD4 string=0x00000000002DDAE8 "`j@"
 *   insn=0x00000000002DDAD8 string=0x00000000002DDADC "?"
 *   insn=0x00000000002DDAD8 string=0x00000000002DDB2C "u:@"
 *   insn=0x00000000002DDAE0 string=0x00000000002DDAE4 "7"
 *   insn=0x00000000002DDAEC string=0x00000000002DDB08 "h"
 *   insn=0x00000000002DDAF0 string=0x00000000002DDAF4 """
 *   insn=0x00000000002DDB00 string=0x00000000002DDB04 "\n"
 *   insn=0x00000000002DDB0C string=0x00000000002DDB10 "i"
 *   insn=0x00000000002DDB18 string=0x00000000002DDB1C "i"
 *   insn=0x00000000002DDB1C string=0x00000000002DDB20 ""
 *   insn=0x00000000002DDB30 string=0x00000000002DDB34 ""
 *   insn=0x00000000002DDB38 string=0x00000000002DDB3C "b"
 *   insn=0x00000000002DDB40 string=0x00000000002DDB44 ""
 *   insn=0x00000000002DDB44 string=0x00000000002DDB60 "H"
 *   insn=0x00000000002DDB50 string=0x00000000002DDB54 "i"
 *   insn=0x00000000002DDB58 string=0x00000000002DDB5C ""
 *   insn=0x00000000002DDB68 string=0x00000000002DDB6C "?"
 *   insn=0x00000000002DDB74 string=0x00000000002DDB78 "?"
 *   insn=0x00000000002DDB80 string=0x00000000002DDB84 "`~@"
 *   insn=0x00000000002DDB88 string=0x00000000002DDB9C "h"
 *   insn=0x00000000002DDBA4 string=0x00000000002DDBA8 "i"
 *   insn=0x00000000002DDBA8 string=0x00000000002DDBAC ""
 *   insn=0x00000000002DDBB4 string=0x00000000002DDBB8 "?"
 *   insn=0x00000000002DDBC8 string=0x00000000002DDBCC "K"
 *   insn=0x00000000002DDBCC string=0x00000000002DDC14 "t\n"
 *   insn=0x00000000002DDBD0 string=0x00000000002DDBD4 "h"
 *   insn=0x00000000002DDBD8 string=0x00000000002DDBDC "5|"
 *   insn=0x00000000002DDBDC string=0x00000000001FCCB0 "0'"
 *   insn=0x00000000002DDBE4 string=0x00000000002DDBE8 "b"
 *   insn=0x00000000002DDBF0 string=0x00000000002DDBFC "h2"
 *   insn=0x00000000002DDBF4 string=0x00000000002DDBF8 "va"
 *   insn=0x00000000002DDC04 string=0x00000000002DDC08 "4"
 *   insn=0x00000000002DDC0C string=0x00000000002DDC10 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode::ByteSize(Caver::Proto::MapNode *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w20
  Caver::Proto::MapNode *v5; // x8
  unsigned int v6; // w20
  int v7; // w0
  _QWORD *v8; // x21
  __int64 v9; // x8
  int v10; // w10
  int v11; // w0
  google::protobuf::io::CodedOutputStream *v12; // x0
  int v13; // w8
  _QWORD *v14; // x21
  __int64 v15; // x8
  int v16; // w10
  int v17; // w0
  int v18; // w0
  google::protobuf::io::CodedOutputStream *v19; // x0
  int v20; // w0
  _QWORD *v21; // x21
  __int64 v22; // x8
  int v23; // w10
  int v24; // w0
  google::protobuf::io::CodedOutputStream *v25; // x0
  int v26; // w8
  int v27; // w0
  int v28; // w8
  unsigned int v29; // w20
  __int64 v30; // x22
  unsigned int v31; // w1
  unsigned int v32; // w21
  int v33; // w0

  v3 = *((_DWORD *)this + 33);
  if ( (_BYTE)v3 )
  {
    if ( (v3 & 1) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
        v5 = this;
      else
        v5 = (Caver::Proto::MapNode *)Caver::Proto::MapNode::default_instance_;
      v6 = Caver::Proto::Vector2::ByteSize(*((Caver::Proto::Vector2 **)v5 + 2));
      if ( v6 >= 0x80 )
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)v6,
               a2);
      else
        v7 = 1;
      v3 = *((_DWORD *)this + 33);
      v4 = v6 + v7 + 1;
      if ( (v3 & 2) == 0 )
      {
LABEL_18:
        if ( (v3 & 4) != 0 )
        {
          v14 = (_QWORD *)*((_QWORD *)this + 4);
          v15 = *(_QWORD *)(*v14 - 24LL);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                    (google::protobuf::io::CodedOutputStream *)(unsigned int)v15,
                    a2);
            v3 = *((_DWORD *)this + 33);
            v16 = v17;
            v15 = *(_QWORD *)(*v14 - 24LL);
          }
          else
          {
            v16 = 1;
          }
          v4 += v16 + v15 + 1;
          if ( (v3 & 0x10) == 0 )
          {
LABEL_31:
            if ( (v3 & 0x20) != 0 )
              v4 += 2;
            if ( (v3 & 0x40) == 0 )
            {
              if ( (v3 & 0x80) == 0 )
                goto LABEL_35;
LABEL_44:
              v21 = (_QWORD *)*((_QWORD *)this + 14);
              v22 = *(_QWORD *)(*v21 - 24LL);
              if ( (unsigned int)v22 >= 0x80 )
              {
                v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                        (google::protobuf::io::CodedOutputStream *)(unsigned int)v22,
                        a2);
                v3 = *((_DWORD *)this + 33);
                v23 = v24;
                v22 = *(_QWORD *)(*v21 - 24LL);
              }
              else
              {
                v23 = 1;
              }
              v4 += v23 + v22 + 1;
              if ( (v3 & 0xFF00) == 0 )
                goto LABEL_59;
              goto LABEL_48;
            }
            v19 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 26);
            if ( ((unsigned int)v19 & 0x80000000) != 0 )
            {
              v4 += 11;
              if ( (v3 & 0x80) != 0 )
                goto LABEL_44;
            }
            else if ( (unsigned int)v19 >= 0x80 )
            {
              v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v19, a2);
              v3 = *((_DWORD *)this + 33);
              v4 += v20 + 1;
              if ( (v3 & 0x80) != 0 )
                goto LABEL_44;
            }
            else
            {
              v4 += 2;
              if ( (v3 & 0x80) != 0 )
                goto LABEL_44;
            }
LABEL_35:
            if ( (v3 & 0xFF00) == 0 )
              goto LABEL_59;
            goto LABEL_48;
          }
        }
        else if ( (v3 & 0x10) == 0 )
        {
          goto LABEL_31;
        }
        v12 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 24);
        if ( ((unsigned int)v12 & 0x80000000) != 0 )
        {
          v13 = 11;
        }
        else if ( (unsigned int)v12 >= 0x80 )
        {
          v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, a2);
          v3 = *((_DWORD *)this + 33);
          v13 = v18 + 1;
        }
        else
        {
          v13 = 2;
        }
        v4 += v13;
        goto LABEL_31;
      }
    }
    else
    {
      v4 = 0;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    v8 = (_QWORD *)*((_QWORD *)this + 3);
    v9 = *(_QWORD *)(*v8 - 24LL);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v9,
              a2);
      v3 = *((_DWORD *)this + 33);
      v10 = v11;
      v9 = *(_QWORD *)(*v8 - 24LL);
    }
    else
    {
      v10 = 1;
    }
    v4 += v10 + v9 + 1;
    goto LABEL_18;
  }
  v4 = 0;
  if ( (v3 & 0xFF00) == 0 )
    goto LABEL_59;
LABEL_48:
  if ( (v3 & 0x100) != 0 )
    v4 += 2;
  if ( (v3 & 0x200) != 0 )
  {
    v25 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 31);
    if ( ((unsigned int)v25 & 0x80000000) != 0 )
    {
      v26 = 11;
    }
    else if ( (unsigned int)v25 >= 0x80 )
    {
      v27 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v25, a2);
      v3 = *((_DWORD *)this + 33);
      v26 = v27 + 1;
    }
    else
    {
      v26 = 2;
    }
    v4 += v26;
  }
  if ( (v3 & 0x400) != 0 )
    v4 += 2;
LABEL_59:
  v28 = *((_DWORD *)this + 12);
  v29 = v28 + v4;
  if ( v28 >= 1 )
  {
    v30 = 0;
    do
    {
      v32 = Caver::Proto::MapNode_Portal::ByteSize(*(Caver::Proto::MapNode_Portal **)(*((_QWORD *)this + 5) + 8 * v30));
      if ( v32 >= 0x80 )
        v33 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v32,
                v31);
      else
        v33 = 1;
      ++v30;
      v29 += v32 + v33;
    }
    while ( v30 < *((int *)this + 12) );
  }
  *((_DWORD *)this + 2) = v29;
  return v29;
}

