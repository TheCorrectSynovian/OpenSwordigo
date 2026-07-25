/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000313EC8
 * Mangled: _ZNK5Caver5Proto23CharControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::CharControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 129
 *   insn=0x0000000000313ED8 string=0x0000000000313EDC "h~@"
 *   insn=0x0000000000313EE0 string=0x0000000000313EE4 "@"
 *   insn=0x0000000000313EE8 string=0x0000000000313F1C "`"
 *   insn=0x0000000000313EF0 string=0x0000000000313EF4 "`"
 *   insn=0x0000000000313EF4 string=0x0000000000313EF8 " "
 *   insn=0x0000000000313EF8 string=0x0000000000313F3C "@"
 *   insn=0x0000000000313F14 string=0x0000000000313F84 "H"
 *   insn=0x0000000000313F1C string=0x0000000000313F20 " "
 *   insn=0x0000000000313F20 string=0x0000000000313F44 "@"
 *   insn=0x0000000000313F28 string=0x0000000000313FFC "u"
 *   insn=0x0000000000313F30 string=0x0000000000313F34 ""
 *   insn=0x0000000000313F34 string=0x0000000000313F38 ""
 *   insn=0x0000000000313F3C string=0x0000000000313F40 ""
 *   insn=0x0000000000313F48 string=0x0000000000313F4C "H"
 *   insn=0x0000000000313F54 string=0x0000000000313F58 "h~@"
 *   insn=0x0000000000313F54 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000313F5C string=0x0000000000313F60 "4"
 *   insn=0x0000000000313F64 string=0x0000000000313FB4 "`"
 *   insn=0x0000000000313F68 string=0x0000000000313F6C "H"
 *   insn=0x0000000000313F68 string=0x0000000000314038 "`"
 *   insn=0x0000000000313F6C string=0x0000000000313F70 "h"
 *   insn=0x0000000000313F6C string=0x0000000000314134 "`"
 *   insn=0x0000000000313F70 string=0x000000000031427C "`"@"
 *   insn=0x0000000000313F74 string=0x0000000000313F78 "h87"
 *   insn=0x0000000000313F74 string=0x00000000003142B0 "`&@"
 *   insn=0x0000000000313F78 string=0x00000000003142E4 "`*@"
 *   insn=0x0000000000313F84 string=0x0000000000313F88 "(H7"
 *   insn=0x0000000000313F84 string=0x0000000000313FCC "`.@"
 *   insn=0x0000000000313F88 string=0x000000000031406C "`2@"
 *   insn=0x0000000000313F8C string=0x0000000000314088 "`6@"
 *   insn=0x0000000000313F90 string=0x0000000000313F94 "h\t`7"
 *   insn=0x0000000000313F90 string=0x00000000003140A4 "`:@"
 *   insn=0x0000000000313F94 string=0x00000000003140C0 "`>@"
 *   insn=0x0000000000313F98 string=0x0000000000313F9C "`B@"
 *   insn=0x0000000000313F9C string=0x0000000000313FA0 " "
 *   insn=0x0000000000313FA0 string=0x0000000000313FE4 "i"
 *   insn=0x0000000000313FA4 string=0x0000000000313FA8 "B"
 *   insn=0x0000000000313FA8 string=0x0000000000314010 "p"
 *   insn=0x0000000000313FAC string=0x0000000000313FB0 ""
 *   insn=0x0000000000313FB0 string=0x000000000031401C "4"
 *   insn=0x0000000000313FB8 string=0x0000000000313FEC "@"
 *   insn=0x0000000000313FBC string=0x0000000000313FC0 """
 *   insn=0x0000000000313FC0 string=0x0000000000314024 "k"
 *   insn=0x0000000000313FCC string=0x0000000000313FD0 " "
 *   insn=0x0000000000313FD0 string=0x0000000000313FF4 "@"
 *   insn=0x0000000000313FD8 string=0x0000000000314058 "^"
 *   insn=0x0000000000313FDC string=0x0000000000313FE0 " "
 *   insn=0x0000000000313FE4 string=0x0000000000313FE8 ""
 *   insn=0x0000000000313FFC string=0x0000000000314000 "h~@"
 *   insn=0x0000000000314004 string=0x0000000000314008 "h"
 *   insn=0x0000000000314010 string=0x0000000000314014 "h~@"
 *   insn=0x0000000000314014 string=0x0000000000314018 "\t"
 *   insn=0x000000000031401C string=0x0000000000314020 "d"
 *   insn=0x0000000000314024 string=0x0000000000314028 "h~@"
 *   insn=0x000000000031402C string=0x0000000000314030 "4"
 *   insn=0x000000000031403C string=0x0000000000314050 "@"
 *   insn=0x0000000000314044 string=0x0000000000314120 ","
 *   insn=0x0000000000314048 string=0x000000000031404C "7"
 *   insn=0x0000000000314050 string=0x0000000000314054 "5"
 *   insn=0x0000000000314058 string=0x000000000031405C "h~@"
 *   insn=0x0000000000314060 string=0x0000000000314064 "4"
 *   insn=0x0000000000314064 string=0x0000000000314068 "("
 *   insn=0x000000000031407C string=0x0000000000314080 "4"
 *   insn=0x0000000000314080 string=0x0000000000314084 "h"
 *   insn=0x0000000000314088 string=0x000000000031408C " "
 *   insn=0x0000000000314098 string=0x000000000031409C "4"
 *   insn=0x00000000003140B4 string=0x00000000003140B8 "4"
 *   insn=0x00000000003140C0 string=0x00000000003140C4 "`"
 *   insn=0x00000000003140C4 string=0x0000000000314110 "i"
 *   insn=0x00000000003140CC string=0x000000000031419C ""
 *   insn=0x00000000003140D0 string=0x00000000003140D4 "4"
 *   insn=0x00000000003140D4 string=0x00000000003140D8 "("
 *   insn=0x00000000003140D8 string=0x00000000003140DC "5"
 *   insn=0x00000000003140E0 string=0x00000000003140E4 "4"
 *   insn=0x00000000003140E4 string=0x00000000003140E8 "H"
 *   insn=0x00000000003140F0 string=0x00000000003140F4 "4"
 *   insn=0x0000000000314100 string=0x0000000000314104 "4"
 *   insn=0x0000000000314110 string=0x0000000000314114 "4"
 *   insn=0x0000000000314114 string=0x0000000000314118 "("
 *   insn=0x0000000000314118 string=0x000000000031411C "%"
 *   insn=0x0000000000314120 string=0x0000000000314124 "h~@"
 *   insn=0x0000000000314128 string=0x000000000031412C "4"
 *   insn=0x000000000031412C string=0x0000000000314130 ""
 *   insn=0x0000000000314138 string=0x000000000031414C "@"
 *   insn=0x000000000031413C string=0x0000000000314140 "B\t"
 *   insn=0x0000000000314144 string=0x0000000000314148 "J"
 *   insn=0x000000000031414C string=0x0000000000314150 "H"
 *   insn=0x0000000000314154 string=0x0000000000314158 "h~@"
 *   insn=0x0000000000314158 string=0x000000000031415C "\t"
 *   insn=0x000000000031415C string=0x0000000000314160 "4"
 *   insn=0x0000000000314160 string=0x0000000000314164 "h"
 *   insn=0x000000000031416C string=0x0000000000314170 "h~@"
 *   insn=0x0000000000314170 string=0x0000000000314174 "\t"
 *   insn=0x0000000000314174 string=0x0000000000314178 "4"
 *   insn=0x0000000000314184 string=0x0000000000314188 "h~@"
 *   insn=0x0000000000314188 string=0x000000000031418C "\t"
 *   insn=0x000000000031418C string=0x0000000000314190 "4"
 *   insn=0x0000000000314190 string=0x0000000000314194 "("
 *   insn=0x000000000031419C string=0x00000000003141A0 "h~@"
 *   insn=0x00000000003141A0 string=0x00000000003141A4 "\t"
 *   insn=0x00000000003141A4 string=0x00000000003141A8 "4"
 *   insn=0x00000000003141C0 string=0x00000000003141F4 "hR@"
 *   insn=0x00000000003141D0 string=0x00000000003141D4 "*"
 *   insn=0x00000000003141D4 string=0x00000000003141D8 ")"
 *   insn=0x00000000003141DC string=0x00000000003141E0 "*"
 *   insn=0x00000000003141E0 string=0x00000000003141E4 ")"
 *   insn=0x00000000003141E4 string=0x00000000003141E8 "*"
 *   insn=0x00000000003141EC string=0x00000000003141F0 "4"
 *   insn=0x00000000003141F8 string=0x00000000003141FC "k"
 *   insn=0x0000000000314204 string=0x0000000000314208 "i&@"
 *   insn=0x0000000000314208 string=0x000000000031420C " yv"
 *   insn=0x0000000000314210 string=0x0000000000314224 "@"
 *   insn=0x000000000031422C string=0x0000000000314230 "hR@"
 *   insn=0x000000000031423C string=0x0000000000314240 "K"
 *   insn=0x000000000031424C string=0x0000000000314250 " "
 *   insn=0x0000000000314250 string=0x0000000000314254 "`\n"
 *   insn=0x0000000000314268 string=0x000000000031426C "h~@"
 *   insn=0x0000000000314270 string=0x0000000000314274 "4"
 *   insn=0x0000000000314280 string=0x0000000000314294 "@"
 *   insn=0x000000000031429C string=0x00000000003142A0 "h~@"
 *   insn=0x00000000003142A4 string=0x00000000003142A8 "4"
 *   insn=0x00000000003142A8 string=0x00000000003142AC "h"
 *   insn=0x00000000003142B4 string=0x00000000003142C8 "@"
 *   insn=0x00000000003142D0 string=0x00000000003142D4 "h~@"
 *   insn=0x00000000003142D8 string=0x00000000003142DC "4"
 *   insn=0x00000000003142E8 string=0x00000000003142FC "@"
 *   insn=0x0000000000314304 string=0x0000000000314308 "h~@"
 *   insn=0x000000000031430C string=0x0000000000314310 "4"
 *   insn=0x0000000000314314 string=0x0000000000314318 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharControllerComponent::ByteSize(
        Caver::Proto::CharControllerComponent *this,
        unsigned int a2)
{
  int v3; // w8
  int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w0
  google::protobuf::io::CodedOutputStream *v7; // x0
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w9
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w0
  google::protobuf::io::CodedOutputStream *v12; // x0
  int v13; // w0
  int v14; // w0
  int v15; // w0
  google::protobuf::io::CodedOutputStream *v16; // x0
  int v17; // w0
  google::protobuf::io::CodedOutputStream *v18; // x0
  google::protobuf::io::CodedOutputStream *v19; // x0
  google::protobuf::io::CodedOutputStream *v20; // x0
  google::protobuf::io::CodedOutputStream *v21; // x0
  google::protobuf::io::CodedOutputStream *v22; // x0
  int v23; // w0
  int v24; // w0
  int v25; // w0
  int v26; // w0
  int v27; // w0
  int v28; // w9
  int v29; // w8
  __int64 v30; // x22
  int v31; // w21
  google::protobuf::io::CodedOutputStream *v32; // x0
  int v33; // w0
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v35; // x0
  int v36; // w0
  google::protobuf::io::CodedOutputStream *v37; // x0
  int v38; // w0
  google::protobuf::io::CodedOutputStream *v39; // x0
  int v40; // w0

  v3 = *((_DWORD *)this + 31);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    if ( (v3 & 0xFF00) == 0 )
      goto LABEL_91;
    goto LABEL_25;
  }
  if ( (v3 & 1) != 0 )
  {
    v7 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v7 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    else if ( (unsigned int)v7 >= 0x80 )
    {
      v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2);
      v3 = *((_DWORD *)this + 31);
      v4 = v14 + 1;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
  }
  else
  {
    v4 = 0;
    if ( (v3 & 2) == 0 )
      goto LABEL_18;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 10;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 31);
  }
  else
  {
    v6 = 1;
  }
  v4 += v6 + 1;
LABEL_18:
  if ( (v3 & 4) != 0 )
  {
    v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v10 & 0x80000000) != 0 )
    {
      v11 = 10;
    }
    else if ( (unsigned int)v10 >= 0x80 )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2);
      v3 = *((_DWORD *)this + 31);
    }
    else
    {
      v11 = 1;
    }
    v4 += v11 + 1;
    if ( (v3 & 8) == 0 )
    {
LABEL_20:
      if ( (v3 & 0x10) == 0 )
        goto LABEL_21;
      goto LABEL_78;
    }
  }
  else if ( (v3 & 8) == 0 )
  {
    goto LABEL_20;
  }
  v16 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
  if ( ((unsigned int)v16 & 0x80000000) != 0 )
  {
    v17 = 10;
  }
  else if ( (unsigned int)v16 >= 0x80 )
  {
    v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v16, a2);
    v3 = *((_DWORD *)this + 31);
  }
  else
  {
    v17 = 1;
  }
  v4 += v17 + 1;
  if ( (v3 & 0x10) == 0 )
  {
LABEL_21:
    if ( (v3 & 0x20) == 0 )
      goto LABEL_22;
    goto LABEL_114;
  }
LABEL_78:
  v22 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 7);
  if ( ((unsigned int)v22 & 0x80000000) != 0 )
  {
    v23 = 10;
  }
  else if ( (unsigned int)v22 >= 0x80 )
  {
    v23 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v22, a2);
    v3 = *((_DWORD *)this + 31);
  }
  else
  {
    v23 = 1;
  }
  v4 += v23 + 1;
  if ( (v3 & 0x20) == 0 )
  {
LABEL_22:
    if ( (v3 & 0x40) == 0 )
      goto LABEL_23;
LABEL_120:
    v37 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 9);
    if ( ((unsigned int)v37 & 0x80000000) != 0 )
    {
      v38 = 10;
    }
    else if ( (unsigned int)v37 >= 0x80 )
    {
      v38 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v37, a2);
      v3 = *((_DWORD *)this + 31);
    }
    else
    {
      v38 = 1;
    }
    v4 += v38 + 1;
    if ( (v3 & 0x80) == 0 )
    {
LABEL_24:
      if ( (v3 & 0xFF00) == 0 )
        goto LABEL_91;
      goto LABEL_25;
    }
    goto LABEL_126;
  }
LABEL_114:
  v35 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 8);
  if ( ((unsigned int)v35 & 0x80000000) != 0 )
  {
    v36 = 10;
  }
  else if ( (unsigned int)v35 >= 0x80 )
  {
    v36 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v35, a2);
    v3 = *((_DWORD *)this + 31);
  }
  else
  {
    v36 = 1;
  }
  v4 += v36 + 1;
  if ( (v3 & 0x40) != 0 )
    goto LABEL_120;
LABEL_23:
  if ( (v3 & 0x80) == 0 )
    goto LABEL_24;
LABEL_126:
  v39 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 10);
  if ( ((unsigned int)v39 & 0x80000000) != 0 )
  {
    v40 = 10;
  }
  else if ( (unsigned int)v39 >= 0x80 )
  {
    v40 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v39, a2);
    v3 = *((_DWORD *)this + 31);
  }
  else
  {
    v40 = 1;
  }
  v4 += v40 + 1;
  if ( (v3 & 0xFF00) == 0 )
    goto LABEL_91;
LABEL_25:
  if ( (v3 & 0x100) == 0 )
  {
    if ( (v3 & 0x200) == 0 )
      goto LABEL_27;
LABEL_55:
    v18 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 12);
    if ( ((unsigned int)v18 & 0x80000000) != 0 )
    {
      v4 += 12;
      if ( (v3 & 0x400) != 0 )
        goto LABEL_58;
    }
    else if ( (unsigned int)v18 >= 0x80 )
    {
      v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v18, a2);
      v3 = *((_DWORD *)this + 31);
      v4 += v24 + 2;
      if ( (v3 & 0x400) != 0 )
        goto LABEL_58;
    }
    else
    {
      v4 += 3;
      if ( (v3 & 0x400) != 0 )
        goto LABEL_58;
    }
LABEL_28:
    if ( (v3 & 0x800) == 0 )
      goto LABEL_29;
LABEL_61:
    v20 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 14);
    if ( ((unsigned int)v20 & 0x80000000) != 0 )
    {
      v4 += 12;
      if ( (v3 & 0x1000) != 0 )
        goto LABEL_64;
    }
    else if ( (unsigned int)v20 >= 0x80 )
    {
      v26 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v20, a2);
      v3 = *((_DWORD *)this + 31);
      v4 += v26 + 2;
      if ( (v3 & 0x1000) != 0 )
        goto LABEL_64;
    }
    else
    {
      v4 += 3;
      if ( (v3 & 0x1000) != 0 )
        goto LABEL_64;
    }
LABEL_30:
    if ( (v3 & 0x2000) == 0 )
      goto LABEL_89;
    goto LABEL_31;
  }
  v12 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 11);
  if ( ((unsigned int)v12 & 0x80000000) != 0 )
  {
    v13 = 10;
  }
  else if ( (unsigned int)v12 >= 0x80 )
  {
    v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, a2);
    v3 = *((_DWORD *)this + 31);
  }
  else
  {
    v13 = 1;
  }
  v4 += v13 + 1;
  if ( (v3 & 0x200) != 0 )
    goto LABEL_55;
LABEL_27:
  if ( (v3 & 0x400) == 0 )
    goto LABEL_28;
LABEL_58:
  v19 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 13);
  if ( ((unsigned int)v19 & 0x80000000) != 0 )
  {
    v4 += 12;
    if ( (v3 & 0x800) != 0 )
      goto LABEL_61;
  }
  else if ( (unsigned int)v19 >= 0x80 )
  {
    v25 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v19, a2);
    v3 = *((_DWORD *)this + 31);
    v4 += v25 + 2;
    if ( (v3 & 0x800) != 0 )
      goto LABEL_61;
  }
  else
  {
    v4 += 3;
    if ( (v3 & 0x800) != 0 )
      goto LABEL_61;
  }
LABEL_29:
  if ( (v3 & 0x1000) == 0 )
    goto LABEL_30;
LABEL_64:
  v21 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 15);
  if ( ((unsigned int)v21 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 0x2000) == 0 )
      goto LABEL_89;
  }
  else if ( (unsigned int)v21 >= 0x80 )
  {
    v27 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v21, a2);
    v3 = *((_DWORD *)this + 31);
    v4 += v27 + 1;
    if ( (v3 & 0x2000) == 0 )
      goto LABEL_89;
  }
  else
  {
    v4 += 2;
    if ( (v3 & 0x2000) == 0 )
      goto LABEL_89;
  }
LABEL_31:
  v8 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 16);
  if ( ((unsigned int)v8 & 0x80000000) != 0 )
  {
    v9 = 11;
  }
  else if ( (unsigned int)v8 >= 0x80 )
  {
    v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
    v3 = *((_DWORD *)this + 31);
    v9 = v15 + 1;
  }
  else
  {
    v9 = 2;
  }
  v4 += v9;
LABEL_89:
  if ( (v3 & 0x8000) != 0 )
    v4 += 5;
LABEL_91:
  if ( (v3 & 0xFF0000) != 0 )
  {
    v28 = v4 + 5;
    if ( (v3 & 0x10000) == 0 )
      v28 = v4;
    if ( (v3 & 0x20000) != 0 )
      v28 += 5;
    if ( (v3 & 0x40000) != 0 )
      v28 += 6;
    if ( (v3 & 0x80000) != 0 )
      v4 = v28 + 6;
    else
      v4 = v28;
  }
  v29 = *((_DWORD *)this + 20);
  if ( v29 < 1 )
  {
    v31 = 0;
  }
  else
  {
    v30 = 0;
    v31 = 0;
    do
    {
      v32 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)(*((_QWORD *)this + 9) + 4 * v30);
      if ( ((unsigned int)v32 & 0x80000000) != 0 )
      {
        v33 = 10;
      }
      else if ( (unsigned int)v32 >= 0x80 )
      {
        v33 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v32, a2);
        v29 = *((_DWORD *)this + 20);
      }
      else
      {
        v33 = 1;
      }
      ++v30;
      v31 += v33;
    }
    while ( v30 < v29 );
  }
  result = (unsigned int)(v31 + v4 + v29);
  *((_DWORD *)this + 2) = result;
  return result;
}

