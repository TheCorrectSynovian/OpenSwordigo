/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DAF4C
 * Mangled: _ZNK5Caver5Proto15EditorViewState8ByteSizeEv
 * Demangled: Caver::Proto::EditorViewState::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 68
 *   insn=0x00000000002DAF5C string=0x00000000002DAF60 "i"
 *   insn=0x00000000002DAF68 string=0x00000000002DAF80 "t\n@"
 *   insn=0x00000000002DAF70 string=0x00000000002DAF74 "#"
 *   insn=0x00000000002DAF70 string=0x00000000002DAFC0 "t*@"
 *   insn=0x00000000002DAF78 string=0x00000000002DAF7C "n"
 *   insn=0x00000000002DAF7C string=0x00000000002DB134 "i"@"
 *   insn=0x00000000002DAF84 string=0x00000000002DAF88 ""
 *   insn=0x00000000002DAF8C string=0x00000000002DAF90 "b"
 *   insn=0x00000000002DAF94 string=0x00000000002DAF98 ""
 *   insn=0x00000000002DAF98 string=0x00000000002DAFB4 "H"
 *   insn=0x00000000002DAFA0 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002DAFA4 string=0x00000000002DAFA8 "iz@"
 *   insn=0x00000000002DAFAC string=0x00000000002DAFB0 ""
 *   insn=0x00000000002DAFB8 string=0x00000000002DAFBC ")"
 *   insn=0x00000000002DAFC4 string=0x00000000002DAFC8 ""
 *   insn=0x00000000002DAFCC string=0x00000000002DAFD0 "b"
 *   insn=0x00000000002DAFD4 string=0x00000000002DAFD8 ""
 *   insn=0x00000000002DAFD8 string=0x00000000002DAFF4 "H"
 *   insn=0x00000000002DAFDC string=0x00000000002DAFE0 "|l"
 *   insn=0x00000000002DAFE4 string=0x00000000002DAFE8 "iz@"
 *   insn=0x00000000002DAFEC string=0x00000000002DAFF0 ""
 *   insn=0x00000000002DB000 string=0x00000000002DB014 "t.@"
 *   insn=0x00000000002DB004 string=0x00000000002DB058 "`b@"
 *   insn=0x00000000002DB008 string=0x00000000002DB00C "\t07I"
 *   insn=0x00000000002DB008 string=0x00000000002DB09C "I "
 *   insn=0x00000000002DB00C string=0x00000000002DB010 "I"
 *   insn=0x00000000002DB00C string=0x00000000002DB0EC "I "
 *   insn=0x00000000002DB018 string=0x00000000002DB01C ""
 *   insn=0x00000000002DB020 string=0x00000000002DB024 "b"
 *   insn=0x00000000002DB028 string=0x00000000002DB02C ""
 *   insn=0x00000000002DB02C string=0x00000000002DB048 "H"
 *   insn=0x00000000002DB030 string=0x00000000002DB034 "gl"
 *   insn=0x00000000002DB038 string=0x00000000002DB03C "iz@"
 *   insn=0x00000000002DB040 string=0x00000000002DB044 ""
 *   insn=0x00000000002DB05C string=0x00000000002DB078 "h"
 *   insn=0x00000000002DB060 string=0x00000000002DB064 """
 *   insn=0x00000000002DB064 string=0x00000000002DB088 "Rl"
 *   insn=0x00000000002DB070 string=0x00000000002DB074 "\n"
 *   insn=0x00000000002DB07C string=0x00000000002DB080 "i"
 *   insn=0x00000000002DB088 string=0x00000000002DB08C "iz@"
 *   insn=0x00000000002DB08C string=0x00000000002DB090 ""
 *   insn=0x00000000002DB09C string=0x00000000002DB0A0 "h6@"
 *   insn=0x00000000002DB0A0 string=0x00000000002DB0A4 ")eF"
 *   insn=0x00000000002DB0A8 string=0x00000000002DB0AC ")"
 *   insn=0x00000000002DB0AC string=0x00000000002DB0B0 "("
 *   insn=0x00000000002DB0C0 string=0x00000000002DB0C4 "b"
 *   insn=0x00000000002DB0CC string=0x00000000002DB0D8 "iz@"
 *   insn=0x00000000002DB0D0 string=0x00000000002DB0D4 "?l"
 *   insn=0x00000000002DB0DC string=0x00000000002DB0E0 ""
 *   insn=0x00000000002DB0E4 string=0x00000000002DB0E8 "i"
 *   insn=0x00000000002DB0EC string=0x00000000002DB0F0 "h:@"
 *   insn=0x00000000002DB0F0 string=0x00000000002DB0F4 ")eF"
 *   insn=0x00000000002DB0F8 string=0x00000000002DB0FC ")"
 *   insn=0x00000000002DB0FC string=0x00000000002DB100 "("
 *   insn=0x00000000002DB104 string=0x00000000002DB108 "\n"
 *   insn=0x00000000002DB110 string=0x00000000002DB114 "b"
 *   insn=0x00000000002DB120 string=0x00000000002DB124 "+l"
 *   insn=0x00000000002DB128 string=0x00000000002DB12C ""
 *   insn=0x00000000002DB134 string=0x00000000002DB138 "?"
 *   insn=0x00000000002DB138 string=0x00000000002DB13C "4"
 *   insn=0x00000000002DB140 string=0x00000000002DB194 "t\n"
 *   insn=0x00000000002DB144 string=0x00000000002DB148 "h"
 *   insn=0x00000000002DB150 string=0x00000000002DB154 ""
 *   insn=0x00000000002DB158 string=0x00000000002DB15C "b"
 *   insn=0x00000000002DB160 string=0x00000000002DB164 ""
 *   insn=0x00000000002DB164 string=0x00000000002DB180 "H"
 *   insn=0x00000000002DB170 string=0x00000000002DB174 "i"@"
 *   insn=0x00000000002DB178 string=0x00000000002DB17C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EditorViewState::ByteSize(Caver::Proto::EditorViewState *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w21
  _QWORD *v5; // x20
  __int64 v6; // x8
  int v7; // w10
  int v8; // w0
  _QWORD *v9; // x20
  __int64 v10; // x8
  int v11; // w10
  int v12; // w0
  _QWORD *v13; // x20
  __int64 v14; // x8
  int v15; // w10
  int v16; // w0
  google::protobuf::io::CodedOutputStream *v17; // x0
  int v18; // w0
  Caver::Proto::EditorViewState *v19; // x8
  unsigned int v20; // w20
  int v21; // w0
  Caver::Proto::EditorViewState *v22; // x8
  unsigned int v23; // w20
  int v24; // w0
  int v25; // w9
  unsigned int v26; // w20
  __int64 i; // x21
  _QWORD *v28; // x22
  __int64 v29; // x8
  int v30; // w10
  int v31; // w0

  LOBYTE(v3) = *((_BYTE *)this + 120);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_44;
  }
  if ( (*((_BYTE *)this + 120) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 120) & 4) == 0 )
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
    v3 = *((_DWORD *)this + 30);
    v7 = v8;
    v6 = *(_QWORD *)(*v5 - 24LL);
  }
  else
  {
    v7 = 1;
  }
  v4 = v7 + v6 + 1;
  if ( (v3 & 4) != 0 )
  {
LABEL_10:
    v9 = (_QWORD *)*((_QWORD *)this + 10);
    v10 = *(_QWORD *)(*v9 - 24LL);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v10,
              a2);
      v3 = *((_DWORD *)this + 30);
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
  if ( (v3 & 8) == 0 )
  {
    if ( (v3 & 0x10) == 0 )
      goto LABEL_16;
LABEL_23:
    v17 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 24);
    if ( ((unsigned int)v17 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 0x20) != 0 )
        goto LABEL_30;
    }
    else if ( (unsigned int)v17 >= 0x80 )
    {
      v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v17, a2);
      v3 = *((_DWORD *)this + 30);
      v4 += v18 + 1;
      if ( (v3 & 0x20) != 0 )
        goto LABEL_30;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 0x20) != 0 )
        goto LABEL_30;
    }
LABEL_17:
    if ( (v3 & 0x40) == 0 )
      goto LABEL_44;
    goto LABEL_37;
  }
  v13 = (_QWORD *)*((_QWORD *)this + 11);
  v14 = *(_QWORD *)(*v13 - 24LL);
  if ( (unsigned int)v14 >= 0x80 )
  {
    v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v14,
            a2);
    v3 = *((_DWORD *)this + 30);
    v15 = v16;
    v14 = *(_QWORD *)(*v13 - 24LL);
  }
  else
  {
    v15 = 1;
  }
  v4 += v15 + v14 + 1;
  if ( (v3 & 0x10) != 0 )
    goto LABEL_23;
LABEL_16:
  if ( (v3 & 0x20) == 0 )
    goto LABEL_17;
LABEL_30:
  if ( *((_QWORD *)this + 13) )
    v19 = this;
  else
    v19 = (Caver::Proto::EditorViewState *)Caver::Proto::EditorViewState::default_instance_;
  v20 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v19 + 13));
  if ( v20 >= 0x80 )
    v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v20,
            a2);
  else
    v21 = 1;
  v4 += v20 + v21 + 1;
  if ( (*((_DWORD *)this + 30) & 0x40) != 0 )
  {
LABEL_37:
    if ( *((_QWORD *)this + 14) )
      v22 = this;
    else
      v22 = (Caver::Proto::EditorViewState *)Caver::Proto::EditorViewState::default_instance_;
    v23 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v22 + 14));
    if ( v23 >= 0x80 )
      v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v23,
              a2);
    else
      v24 = 1;
    v4 += v23 + v24 + 1;
  }
LABEL_44:
  v25 = *((_DWORD *)this + 8);
  v26 = v25 + v4;
  if ( v25 >= 1 )
  {
    for ( i = 0; i < v25; ++i )
    {
      v28 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * i);
      v29 = *(_QWORD *)(*v28 - 24LL);
      if ( (unsigned int)v29 >= 0x80 )
      {
        v31 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)(unsigned int)v29,
                a2);
        v25 = *((_DWORD *)this + 8);
        v30 = v31;
        v29 = *(_QWORD *)(*v28 - 24LL);
      }
      else
      {
        v30 = 1;
      }
      v26 += v30 + v29;
    }
  }
  *((_DWORD *)this + 2) = v26;
  return v26;
}

