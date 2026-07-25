/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E4C58
 * Mangled: _ZNK5Caver5Proto11GuideTarget8ByteSizeEv
 * Demangled: Caver::Proto::GuideTarget::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F64A0  Caver::Proto::GuideTarget::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 69
 *   insn=0x00000000002E4C6C string=0x00000000002E4C70 "i"
 *   insn=0x00000000002E4C78 string=0x00000000002E4C90 "`"
 *   insn=0x00000000002E4C7C string=0x00000000002E4C80 "I"
 *   insn=0x00000000002E4C80 string=0x00000000002E4C84 "!"
 *   insn=0x00000000002E4C80 string=0x00000000002E4CC8 "u\n@"
 *   insn=0x00000000002E4C88 string=0x00000000002E4C8C "X"
 *   insn=0x00000000002E4C8C string=0x00000000002E4DEC "iB@"
 *   insn=0x00000000002E4C94 string=0x00000000002E4CAC "t"
 *   insn=0x00000000002E4C9C string=0x00000000002E4CB8 "FE"
 *   insn=0x00000000002E4CA0 string=0x00000000002E4CA4 ")"
 *   insn=0x00000000002E4CB8 string=0x00000000002E4CBC "ir@"
 *   insn=0x00000000002E4CB8 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002E4CC0 string=0x00000000002E4CC4 ")"
 *   insn=0x00000000002E4CCC string=0x00000000002E4CD0 ""
 *   insn=0x00000000002E4CD4 string=0x00000000002E4CD8 "b"
 *   insn=0x00000000002E4CDC string=0x00000000002E4CE0 ""
 *   insn=0x00000000002E4CE0 string=0x00000000002E4CFC "H"
 *   insn=0x00000000002E4CE4 string=0x00000000002E4CE8 ":E"
 *   insn=0x00000000002E4CEC string=0x00000000002E4CF0 "ir@"
 *   insn=0x00000000002E4CF4 string=0x00000000002E4CF8 ""
 *   insn=0x00000000002E4D08 string=0x00000000002E4D18 "u"
 *   insn=0x00000000002E4D0C string=0x00000000002E4D5C "u"
 *   insn=0x00000000002E4D10 string=0x00000000002E4D14 "3"
 *   insn=0x00000000002E4D10 string=0x00000000002E4DA0 "u"
 *   insn=0x00000000002E4D1C string=0x00000000002E4D20 ""
 *   insn=0x00000000002E4D24 string=0x00000000002E4D28 "b"
 *   insn=0x00000000002E4D2C string=0x00000000002E4D30 ""
 *   insn=0x00000000002E4D30 string=0x00000000002E4D4C "H"
 *   insn=0x00000000002E4D34 string=0x00000000002E4D38 "&E"
 *   insn=0x00000000002E4D3C string=0x00000000002E4D40 "ir@"
 *   insn=0x00000000002E4D44 string=0x00000000002E4D48 ""
 *   insn=0x00000000002E4D60 string=0x00000000002E4D64 ""
 *   insn=0x00000000002E4D68 string=0x00000000002E4D6C "b"
 *   insn=0x00000000002E4D70 string=0x00000000002E4D74 ""
 *   insn=0x00000000002E4D74 string=0x00000000002E4D90 "H"
 *   insn=0x00000000002E4D80 string=0x00000000002E4D84 "ir@"
 *   insn=0x00000000002E4D88 string=0x00000000002E4D8C ""
 *   insn=0x00000000002E4D98 string=0x00000000002E4D9C ")"
 *   insn=0x00000000002E4DA4 string=0x00000000002E4DA8 ""
 *   insn=0x00000000002E4DAC string=0x00000000002E4DB0 "b"
 *   insn=0x00000000002E4DB4 string=0x00000000002E4DB8 ""
 *   insn=0x00000000002E4DB8 string=0x00000000002E4DD4 "H"
 *   insn=0x00000000002E4DC4 string=0x00000000002E4DC8 "ir@"
 *   insn=0x00000000002E4DCC string=0x00000000002E4DD0 ""
 *   insn=0x00000000002E4DE0 string=0x00000000002E4DE4 "?"
 *   insn=0x00000000002E4DEC string=0x00000000002E4DF0 "?"
 *   insn=0x00000000002E4DF0 string=0x00000000002E4DF4 "4"
 *   insn=0x00000000002E4DF4 string=0x00000000002E4DF8 "K"
 *   insn=0x00000000002E4DF8 string=0x00000000002E4EE0 "t\n"
 *   insn=0x00000000002E4DFC string=0x00000000002E4E00 "h"
 *   insn=0x00000000002E4E0C string=0x00000000002E4E10 "\t"
 *   insn=0x00000000002E4E18 string=0x00000000002E4E1C "$"
 *   insn=0x00000000002E4E28 string=0x00000000002E4E2C "'"
 *   insn=0x00000000002E4E2C string=0x00000000002E4EC8 "hB"
 *   insn=0x00000000002E4E34 string=0x00000000002E4E38 ""
 *   insn=0x00000000002E4E3C string=0x00000000002E4E40 "b"
 *   insn=0x00000000002E4E44 string=0x00000000002E4E48 ""
 *   insn=0x00000000002E4E48 string=0x00000000002E4E64 "H"
 *   insn=0x00000000002E4E5C string=0x00000000002E4E60 ""
 *   insn=0x00000000002E4E68 string=0x00000000002E4E6C "\t"
 *   insn=0x00000000002E4E70 string=0x00000000002E4E74 ""
 *   insn=0x00000000002E4E74 string=0x00000000002E4E78 ""
 *   insn=0x00000000002E4E7C string=0x00000000002E4E80 "b"
 *   insn=0x00000000002E4E88 string=0x00000000002E4EA0 "("
 *   insn=0x00000000002E4E90 string=0x00000000002E4E94 ""
 *   insn=0x00000000002E4E98 string=0x00000000002E4E9C ""
 *   insn=0x00000000002E4EB0 string=0x00000000002E4EB4 "b"
 *   insn=0x00000000002E4ED0 string=0x00000000002E4ED4 "4"
 *   insn=0x00000000002E4ED8 string=0x00000000002E4EDC "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget::ByteSize(Caver::Proto::GuideTarget *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w20
  int v5; // w8
  google::protobuf::io::CodedOutputStream *v6; // x0
  int v7; // w0
  _QWORD *v8; // x21
  __int64 v9; // x8
  int v10; // w10
  int v11; // w0
  _QWORD *v12; // x21
  __int64 v13; // x8
  int v14; // w10
  int v15; // w0
  _QWORD *v16; // x21
  __int64 v17; // x8
  int v18; // w10
  int v19; // w0
  _QWORD *v20; // x21
  __int64 v21; // x8
  int v22; // w10
  int v23; // w0
  int v24; // w9
  unsigned int v25; // w20
  __int64 v26; // x22
  __int64 v27; // x23
  int v28; // w9
  unsigned int v29; // w21
  int v30; // w0
  _QWORD *v31; // x21
  __int64 v32; // x8
  int v33; // w10
  int v34; // w0
  _QWORD *v35; // x24
  __int64 v36; // x8
  int v37; // w9

  LOBYTE(v3) = *((_BYTE *)this + 112);
  if ( !(_BYTE)v3 )
  {
    v5 = 0;
    goto LABEL_35;
  }
  if ( (*((_BYTE *)this + 112) & 1) != 0 )
  {
    v6 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v6 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v6 >= 0x80 )
    {
      v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, a2);
      v3 = *((_DWORD *)this + 28);
      v4 = v7 + 1;
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
    if ( (*((_BYTE *)this + 112) & 2) == 0 )
      goto LABEL_17;
  }
  v8 = (_QWORD *)*((_QWORD *)this + 2);
  v9 = *(_QWORD *)(*v8 - 24LL);
  if ( (unsigned int)v9 >= 0x80 )
  {
    v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v9,
            a2);
    v3 = *((_DWORD *)this + 28);
    v10 = v11;
    v9 = *(_QWORD *)(*v8 - 24LL);
  }
  else
  {
    v10 = 1;
  }
  v4 += v10 + v9 + 1;
LABEL_17:
  if ( (v3 & 4) != 0 )
  {
    v12 = (_QWORD *)*((_QWORD *)this + 3);
    v13 = *(_QWORD *)(*v12 - 24LL);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v13,
              a2);
      v3 = *((_DWORD *)this + 28);
      v14 = v15;
      v13 = *(_QWORD *)(*v12 - 24LL);
    }
    else
    {
      v14 = 1;
    }
    v4 += v14 + v13 + 1;
    if ( (v3 & 8) == 0 )
    {
LABEL_19:
      if ( (v3 & 0x10) == 0 )
        goto LABEL_33;
      goto LABEL_29;
    }
  }
  else if ( (v3 & 8) == 0 )
  {
    goto LABEL_19;
  }
  v16 = (_QWORD *)*((_QWORD *)this + 4);
  v17 = *(_QWORD *)(*v16 - 24LL);
  if ( (unsigned int)v17 >= 0x80 )
  {
    v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v17,
            a2);
    v3 = *((_DWORD *)this + 28);
    v18 = v19;
    v17 = *(_QWORD *)(*v16 - 24LL);
  }
  else
  {
    v18 = 1;
  }
  v4 += v18 + v17 + 1;
  if ( (v3 & 0x10) != 0 )
  {
LABEL_29:
    v20 = (_QWORD *)*((_QWORD *)this + 5);
    v21 = *(_QWORD *)(*v20 - 24LL);
    if ( (unsigned int)v21 >= 0x80 )
    {
      v23 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v21,
              a2);
      v3 = *((_DWORD *)this + 28);
      v22 = v23;
      v21 = *(_QWORD *)(*v20 - 24LL);
    }
    else
    {
      v22 = 1;
    }
    v4 += v22 + v21 + 1;
  }
LABEL_33:
  v5 = v4 + 2;
  if ( (v3 & 0x20) == 0 )
    v5 = v4;
LABEL_35:
  v24 = *((_DWORD *)this + 16);
  v25 = v24 + v5;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      v27 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v26);
      LOBYTE(v28) = *(_BYTE *)(v27 + 32);
      if ( (_BYTE)v28 )
        break;
      v29 = 0;
      *(_DWORD *)(v27 + 8) = 0;
      v30 = 1;
LABEL_53:
      ++v26;
      v25 += v29 + v30;
      if ( v26 >= *((int *)this + 16) )
        goto LABEL_54;
    }
    if ( (*(_BYTE *)(v27 + 32) & 1) != 0 )
    {
      v31 = *(_QWORD **)(v27 + 16);
      v32 = *(_QWORD *)(*v31 - 24LL);
      if ( (unsigned int)v32 >= 0x80 )
      {
        v34 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)(unsigned int)v32,
                a2);
        v28 = *(_DWORD *)(v27 + 32);
        v33 = v34;
        v32 = *(_QWORD *)(*v31 - 24LL);
      }
      else
      {
        v33 = 1;
      }
      v29 = v33 + v32 + 1;
      if ( (v28 & 2) == 0 )
        goto LABEL_50;
    }
    else
    {
      v29 = 0;
      if ( (*(_BYTE *)(v27 + 32) & 2) == 0 )
      {
LABEL_50:
        *(_DWORD *)(v27 + 8) = v29;
        if ( v29 >= 0x80 )
          v30 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                  (google::protobuf::io::CodedOutputStream *)v29,
                  a2);
        else
          v30 = 1;
        goto LABEL_53;
      }
    }
    v35 = *(_QWORD **)(v27 + 24);
    v36 = *(_QWORD *)(*v35 - 24LL);
    if ( (unsigned int)v36 >= 0x80 )
    {
      v37 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v36,
              a2);
      v36 = *(_QWORD *)(*v35 - 24LL);
    }
    else
    {
      v37 = 1;
    }
    v29 += v37 + v36 + 1;
    goto LABEL_50;
  }
LABEL_54:
  *((_DWORD *)this + 2) = v25;
  return v25;
}

