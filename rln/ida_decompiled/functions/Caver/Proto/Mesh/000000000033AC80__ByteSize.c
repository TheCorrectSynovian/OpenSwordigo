/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033AC80
 * Mangled: _ZNK5Caver5Proto4Mesh8ByteSizeEv
 * Demangled: Caver::Proto::Mesh::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FD990  Caver::Proto::Mesh::ByteSize(void)
 *
 * Callees: 4
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F6920  Caver::Proto::MeshMaterial::ByteSize(void)
 *   0x00000000001F7140  Caver::Proto::Box::ByteSize(void)
 *   0x0000000000202CE0  Caver::Proto::MeshData::ByteSize(void)
 *
 * Referenced strings: 111
 *   insn=0x000000000033AC90 string=0x000000000033AC94 "i"
 *   insn=0x000000000033AC94 string=0x000000000033AC98 "?"
 *   insn=0x000000000033AC9C string=0x000000000033ACA0 "\t"
 *   insn=0x000000000033ACA0 string=0x000000000033ACC0 "`"
 *   insn=0x000000000033ACA4 string=0x000000000033ACA8 ")"
 *   insn=0x000000000033ACA8 string=0x000000000033ACEC "`"
 *   insn=0x000000000033ACB0 string=0x000000000033ACB4 "?"
 *   insn=0x000000000033ACB8 string=0x000000000033AD2C "i"
 *   insn=0x000000000033ACBC string=0x000000000033B04C "h:@"
 *   insn=0x000000000033ACC8 string=0x000000000033ACDC "="
 *   insn=0x000000000033ACDC string=0x000000000033ACE0 "i"
 *   insn=0x000000000033ACDC string=0x00000000001F61D0 "0'"
 *   insn=0x000000000033ACE4 string=0x000000000033ACE8 "I"
 *   insn=0x000000000033ACF0 string=0x000000000033ACF4 "b"
 *   insn=0x000000000033ACF4 string=0x000000000033AD00 "4"
 *   insn=0x000000000033AD00 string=0x000000000033AD04 "i"
 *   insn=0x000000000033AD10 string=0x000000000033AD44 "i"
 *   insn=0x000000000033AD14 string=0x000000000033ADC8 "i"
 *   insn=0x000000000033AD18 string=0x000000000033AD1C "i"
 *   insn=0x000000000033AD18 string=0x000000000033AE68 "i"
 *   insn=0x000000000033AD1C string=0x000000000033AF08 "i"
 *   insn=0x000000000033AD20 string=0x000000000033AD24 "?"
 *   insn=0x000000000033AD20 string=0x000000000033AF90 "i"
 *   insn=0x000000000033AD24 string=0x000000000033AD28 " "
 *   insn=0x000000000033AD2C string=0x000000000033AD30 "IH7)"
 *   insn=0x000000000033AD2C string=0x000000000033AD78 "i"
 *   insn=0x000000000033AD30 string=0x000000000033AD34 ")"
 *   insn=0x000000000033AD30 string=0x000000000033AE18 "i"
 *   insn=0x000000000033AD34 string=0x000000000033AD38 "\t"
 *   insn=0x000000000033AD34 string=0x000000000033AEB8 "i"
 *   insn=0x000000000033AD38 string=0x000000000033AF58 "tJ@"
 *   insn=0x000000000033AD3C string=0x000000000033AFEC "tN@"
 *   insn=0x000000000033AD44 string=0x000000000033AD48 "h"
 *   insn=0x000000000033AD48 string=0x000000000033AD4C ")qC"
 *   insn=0x000000000033AD50 string=0x000000000033AD54 ")"
 *   insn=0x000000000033AD54 string=0x000000000033AD58 "("
 *   insn=0x000000000033AD74 string=0x000000000033ADB4 "i"
 *   insn=0x000000000033AD78 string=0x000000000033AD7C "h>@"
 *   insn=0x000000000033AD7C string=0x000000000033AD80 ")qC"
 *   insn=0x000000000033AD84 string=0x000000000033AD88 ")"
 *   insn=0x000000000033AD88 string=0x000000000033AD8C "("
 *   insn=0x000000000033ADA8 string=0x000000000033AE04 "i"
 *   insn=0x000000000033ADAC string=0x000000000033ADB0 ""
 *   insn=0x000000000033ADB8 string=0x000000000033ADBC ""
 *   insn=0x000000000033ADC8 string=0x000000000033ADCC "h"
 *   insn=0x000000000033ADCC string=0x000000000033ADD0 ")qC"
 *   insn=0x000000000033ADD4 string=0x000000000033ADD8 ")"
 *   insn=0x000000000033ADD8 string=0x000000000033ADDC "("
 *   insn=0x000000000033ADF8 string=0x000000000033AE54 "i"
 *   insn=0x000000000033AE08 string=0x000000000033AE0C ""
 *   insn=0x000000000033AE10 string=0x000000000033AE14 "\t"
 *   insn=0x000000000033AE18 string=0x000000000033AE1C "hB@"
 *   insn=0x000000000033AE1C string=0x000000000033AE20 ")qC"
 *   insn=0x000000000033AE24 string=0x000000000033AE28 ")"
 *   insn=0x000000000033AE28 string=0x000000000033AE2C "("
 *   insn=0x000000000033AE34 string=0x00000000001F6920 "0'"
 *   insn=0x000000000033AE48 string=0x000000000033AEA4 "i"
 *   insn=0x000000000033AE58 string=0x000000000033AE5C ""
 *   insn=0x000000000033AE68 string=0x000000000033AE6C "h"
 *   insn=0x000000000033AE6C string=0x000000000033AE70 ")qC"
 *   insn=0x000000000033AE74 string=0x000000000033AE78 ")"
 *   insn=0x000000000033AE78 string=0x000000000033AE7C "("
 *   insn=0x000000000033AE98 string=0x000000000033AEF4 "i"
 *   insn=0x000000000033AEA8 string=0x000000000033AEAC ""
 *   insn=0x000000000033AEB0 string=0x000000000033AEB4 ")"
 *   insn=0x000000000033AEB8 string=0x000000000033AEBC "hF@"
 *   insn=0x000000000033AEBC string=0x000000000033AEC0 ")qC"
 *   insn=0x000000000033AEC4 string=0x000000000033AEC8 ")"
 *   insn=0x000000000033AEC8 string=0x000000000033AECC "("
 *   insn=0x000000000033AED4 string=0x00000000001F7140 "0'"
 *   insn=0x000000000033AEE8 string=0x000000000033AF44 "i"
 *   insn=0x000000000033AEF8 string=0x000000000033AEFC ""
 *   insn=0x000000000033AF08 string=0x000000000033AF0C "h6@"
 *   insn=0x000000000033AF0C string=0x000000000033AF10 ")qC"
 *   insn=0x000000000033AF14 string=0x000000000033AF18 ")"
 *   insn=0x000000000033AF18 string=0x000000000033AF1C "("
 *   insn=0x000000000033AF20 string=0x000000000033AF24 "o"
 *   insn=0x000000000033AF2C string=0x000000000033AF30 """
 *   insn=0x000000000033AF38 string=0x000000000033AF7C "i"
 *   insn=0x000000000033AF48 string=0x000000000033AF4C ""
 *   insn=0x000000000033AF50 string=0x000000000033AF54 "I"
 *   insn=0x000000000033AF5C string=0x000000000033AF60 ""
 *   insn=0x000000000033AF6C string=0x000000000033AF70 ""
 *   insn=0x000000000033AF70 string=0x000000000033AFDC "H"
 *   insn=0x000000000033AF80 string=0x000000000033AF84 ""
 *   insn=0x000000000033AF90 string=0x000000000033AF94 "h:@"
 *   insn=0x000000000033AF94 string=0x000000000033AF98 ")qC"
 *   insn=0x000000000033AF9C string=0x000000000033AFA0 ")"
 *   insn=0x000000000033AFA0 string=0x000000000033AFA4 "("
 *   insn=0x000000000033AFA8 string=0x000000000033AFAC "M"
 *   insn=0x000000000033AFC0 string=0x000000000033B010 "i"
 *   insn=0x000000000033AFCC string=0x000000000033AFD0 "i"
 *   insn=0x000000000033AFD4 string=0x000000000033AFD8 ""
 *   insn=0x000000000033AFE4 string=0x000000000033AFE8 ")"
 *   insn=0x000000000033AFF0 string=0x000000000033AFF4 ""
 *   insn=0x000000000033B004 string=0x000000000033B040 "("
 *   insn=0x000000000033B008 string=0x000000000033B00C "q"
 *   insn=0x000000000033B014 string=0x000000000033B018 ""
 *   insn=0x000000000033B01C string=0x000000000033B020 "?"
 *   insn=0x000000000033B020 string=0x000000000033B024 "A"
 *   insn=0x000000000033B024 string=0x000000000033B028 "\t"
 *   insn=0x000000000033B02C string=0x000000000033B030 "h"
 *   insn=0x000000000033B038 string=0x000000000033B03C ""
 *   insn=0x000000000033B054 string=0x000000000033B058 "K"
 *   insn=0x000000000033B058 string=0x000000000033B0A0 "t\n"
 *   insn=0x000000000033B05C string=0x000000000033B060 "h"
 *   insn=0x000000000033B070 string=0x000000000033B074 "b"
 *   insn=0x000000000033B07C string=0x000000000033B088 "h:"
 *   insn=0x000000000033B080 string=0x000000000033B084 "S"
 *   insn=0x000000000033B090 string=0x000000000033B094 "4"
 *   insn=0x000000000033B098 string=0x000000000033B09C "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Mesh::ByteSize(Caver::Proto::Mesh *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w21
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w0
  google::protobuf::io::CodedOutputStream *v7; // x0
  int v8; // w0
  Caver::Proto::Mesh *v9; // x8
  unsigned int v10; // w20
  int v11; // w0
  Caver::Proto::Mesh *v12; // x8
  unsigned int v13; // w20
  int v14; // w0
  Caver::Proto::Mesh *v15; // x8
  unsigned int v16; // w20
  int v17; // w0
  Caver::Proto::Mesh *v18; // x8
  unsigned int v19; // w20
  int v20; // w0
  Caver::Proto::Mesh *v21; // x8
  unsigned int v22; // w20
  int v23; // w0
  Caver::Proto::Mesh *v24; // x8
  unsigned int v25; // w20
  int v26; // w0
  Caver::Proto::Mesh *v27; // x8
  unsigned int v28; // w20
  int v29; // w0
  _QWORD *v30; // x20
  __int64 v31; // x8
  int v32; // w10
  Caver::Proto::Mesh *v33; // x8
  unsigned int v34; // w20
  int v35; // w0
  int v36; // w0
  _QWORD *v37; // x20
  __int64 v38; // x8
  int v39; // w9
  int v40; // w8
  unsigned int v41; // w20
  __int64 v42; // x22
  unsigned int v43; // w1
  unsigned int v44; // w21
  int v45; // w0

  v3 = *((_DWORD *)this + 40);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    if ( (v3 & 0xFF00) == 0 )
      goto LABEL_92;
    goto LABEL_21;
  }
  if ( (v3 & 1) != 0 )
  {
    v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( (unsigned int)v5 >= 0x80 )
    {
      v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
      v3 = *((_DWORD *)this + 40);
      v4 = v6 + 1;
      if ( (v3 & 2) == 0 )
        goto LABEL_15;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) == 0 )
        goto LABEL_15;
    }
  }
  else
  {
    v4 = 0;
    if ( (v3 & 2) == 0 )
      goto LABEL_15;
  }
  v7 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( (unsigned int)v7 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2);
    v3 = *((_DWORD *)this + 40);
  }
  else
  {
    v8 = 1;
  }
  v4 += v8 + 1;
LABEL_15:
  if ( (v3 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 3) )
      v9 = this;
    else
      v9 = (Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
    v10 = Caver::Proto::MeshData::ByteSize(*((Caver::Proto::MeshData **)v9 + 3));
    if ( v10 >= 0x80 )
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v10,
              a2);
    else
      v11 = 1;
    v3 = *((_DWORD *)this + 40);
    v4 += v10 + v11 + 1;
    if ( (v3 & 8) == 0 )
    {
LABEL_17:
      if ( (v3 & 0x10) == 0 )
        goto LABEL_18;
      goto LABEL_53;
    }
  }
  else if ( (v3 & 8) == 0 )
  {
    goto LABEL_17;
  }
  if ( *((_QWORD *)this + 4) )
    v15 = this;
  else
    v15 = (Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
  v16 = Caver::Proto::MeshData::ByteSize(*((Caver::Proto::MeshData **)v15 + 4));
  if ( v16 >= 0x80 )
    v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v16,
            a2);
  else
    v17 = 1;
  v3 = *((_DWORD *)this + 40);
  v4 += v16 + v17 + 1;
  if ( (v3 & 0x10) == 0 )
  {
LABEL_18:
    if ( (v3 & 0x40) == 0 )
      goto LABEL_19;
LABEL_67:
    if ( *((_QWORD *)this + 13) )
      v27 = this;
    else
      v27 = (Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
    v28 = Caver::Proto::MeshData::ByteSize(*((Caver::Proto::MeshData **)v27 + 13));
    if ( v28 >= 0x80 )
      v29 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v28,
              a2);
    else
      v29 = 1;
    v3 = *((_DWORD *)this + 40);
    v4 += v28 + v29 + 1;
    if ( (v3 & 0x80) == 0 )
    {
LABEL_20:
      if ( (v3 & 0xFF00) == 0 )
        goto LABEL_92;
      goto LABEL_21;
    }
    goto LABEL_78;
  }
LABEL_53:
  if ( *((_QWORD *)this + 5) )
    v21 = this;
  else
    v21 = (Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
  v22 = Caver::Proto::MeshData::ByteSize(*((Caver::Proto::MeshData **)v21 + 5));
  if ( v22 >= 0x80 )
    v23 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v22,
            a2);
  else
    v23 = 1;
  v3 = *((_DWORD *)this + 40);
  v4 += v22 + v23 + 1;
  if ( (v3 & 0x40) != 0 )
    goto LABEL_67;
LABEL_19:
  if ( (v3 & 0x80) == 0 )
    goto LABEL_20;
LABEL_78:
  if ( *((_QWORD *)this + 14) )
    v33 = this;
  else
    v33 = (Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
  v34 = Caver::Proto::MeshData::ByteSize(*((Caver::Proto::MeshData **)v33 + 14));
  if ( v34 >= 0x80 )
    v35 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v34,
            a2);
  else
    v35 = 1;
  v3 = *((_DWORD *)this + 40);
  v4 += v34 + v35 + 1;
  if ( (v3 & 0xFF00) == 0 )
    goto LABEL_92;
LABEL_21:
  if ( (v3 & 0x100) != 0 )
  {
    if ( *((_QWORD *)this + 15) )
      v12 = this;
    else
      v12 = (Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
    v13 = Caver::Proto::MeshData::ByteSize(*((Caver::Proto::MeshData **)v12 + 15));
    if ( v13 >= 0x80 )
      v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v13,
              a2);
    else
      v14 = 1;
    v3 = *((_DWORD *)this + 40);
    v4 += v13 + v14 + 1;
    if ( (v3 & 0x200) == 0 )
    {
LABEL_23:
      if ( (v3 & 0x400) == 0 )
        goto LABEL_24;
LABEL_60:
      if ( *((_QWORD *)this + 17) )
        v24 = this;
      else
        v24 = (Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
      v25 = Caver::Proto::Box::ByteSize(*((Caver::Proto::Box **)v24 + 17));
      if ( v25 >= 0x80 )
        v26 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v25,
                a2);
      else
        v26 = 1;
      v3 = *((_DWORD *)this + 40);
      v4 += v25 + v26 + 1;
      if ( (v3 & 0x800) == 0 )
      {
LABEL_25:
        if ( (v3 & 0x1000) == 0 )
          goto LABEL_92;
        goto LABEL_85;
      }
      goto LABEL_74;
    }
  }
  else if ( (v3 & 0x200) == 0 )
  {
    goto LABEL_23;
  }
  if ( *((_QWORD *)this + 16) )
    v18 = this;
  else
    v18 = (Caver::Proto::Mesh *)Caver::Proto::Mesh::default_instance_;
  v19 = Caver::Proto::MeshMaterial::ByteSize(*((Caver::Proto::MeshMaterial **)v18 + 16));
  if ( v19 >= 0x80 )
    v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v19,
            a2);
  else
    v20 = 1;
  v3 = *((_DWORD *)this + 40);
  v4 += v19 + v20 + 1;
  if ( (v3 & 0x400) != 0 )
    goto LABEL_60;
LABEL_24:
  if ( (v3 & 0x800) == 0 )
    goto LABEL_25;
LABEL_74:
  v30 = (_QWORD *)*((_QWORD *)this + 18);
  v31 = *(_QWORD *)(*v30 - 24LL);
  if ( (unsigned int)v31 >= 0x80 )
  {
    v36 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v31,
            a2);
    v3 = *((_DWORD *)this + 40);
    v32 = v36;
    v31 = *(_QWORD *)(*v30 - 24LL);
  }
  else
  {
    v32 = 1;
  }
  v4 += v32 + v31 + 2;
  if ( (v3 & 0x1000) != 0 )
  {
LABEL_85:
    v37 = (_QWORD *)*((_QWORD *)this + 19);
    v38 = *(_QWORD *)(*v37 - 24LL);
    if ( (unsigned int)v38 >= 0x80 )
    {
      v39 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v38,
              a2);
      v38 = *(_QWORD *)(*v37 - 24LL);
    }
    else
    {
      v39 = 1;
    }
    v4 += v39 + v38 + 2;
  }
LABEL_92:
  v40 = *((_DWORD *)this + 14);
  v41 = v40 + v4;
  if ( v40 >= 1 )
  {
    v42 = 0;
    do
    {
      v44 = Caver::Proto::MeshData::ByteSize(*(Caver::Proto::MeshData **)(*((_QWORD *)this + 6) + 8 * v42));
      if ( v44 >= 0x80 )
        v45 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v44,
                v43);
      else
        v45 = 1;
      ++v42;
      v41 += v44 + v45;
    }
    while ( v42 < *((int *)this + 14) );
  }
  *((_DWORD *)this + 2) = v41;
  return v41;
}

