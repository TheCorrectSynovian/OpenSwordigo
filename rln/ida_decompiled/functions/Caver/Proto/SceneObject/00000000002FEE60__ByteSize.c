/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FEE60
 * Mangled: _ZNK5Caver5Proto11SceneObject8ByteSizeEv
 * Demangled: Caver::Proto::SceneObject::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FF090  Caver::Proto::SceneObject::ByteSize(void)
 *
 * Callees: 6
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FCDD0  Caver::Proto::Vector2::ByteSize(void)
 *   0x00000000001FE3C0  Caver::Proto::Rectangle::ByteSize(void)
 *   0x00000000002024E0  Caver::Proto::Component::ByteSize(void)
 *   0x00000000003000B0  Caver::Proto::SceneObject::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Referenced strings: 69
 *   insn=0x00000000002FEE70 string=0x00000000002FEE74 "i"
 *   insn=0x00000000002FEE74 string=0x00000000002FEE78 "?"
 *   insn=0x00000000002FEE7C string=0x00000000002FEE80 "\t"
 *   insn=0x00000000002FEE80 string=0x00000000002FEEA0 "t\n@"
 *   insn=0x00000000002FEE88 string=0x00000000002FEE8C "%"
 *   insn=0x00000000002FEE88 string=0x00000000002FEEE0 "t"
 *   insn=0x00000000002FEE90 string=0x00000000002FEE94 "?"
 *   insn=0x00000000002FEE98 string=0x00000000002FEE9C "j"
 *   insn=0x00000000002FEE9C string=0x00000000002FF044 "h*@"
 *   insn=0x00000000002FEEA4 string=0x00000000002FEEA8 ""
 *   insn=0x00000000002FEEAC string=0x00000000002FEEB0 "b"
 *   insn=0x00000000002FEEB4 string=0x00000000002FEEB8 ""
 *   insn=0x00000000002FEEB8 string=0x00000000002FEED4 "H"
 *   insn=0x00000000002FEEC0 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002FEEC4 string=0x00000000002FEEC8 "i"
 *   insn=0x00000000002FEECC string=0x00000000002FEED0 ""
 *   insn=0x00000000002FEED8 string=0x00000000002FEEDC ")"
 *   insn=0x00000000002FEEE4 string=0x00000000002FEEE8 ""
 *   insn=0x00000000002FEEEC string=0x00000000002FEEF0 "b"
 *   insn=0x00000000002FEEF4 string=0x00000000002FEEF8 ""
 *   insn=0x00000000002FEEF8 string=0x00000000002FEF14 "H"
 *   insn=0x00000000002FEF04 string=0x00000000002FEF08 "i"
 *   insn=0x00000000002FEF0C string=0x00000000002FEF10 ""
 *   insn=0x00000000002FEF20 string=0x00000000002FEF24 "I"
 *   insn=0x00000000002FEF24 string=0x00000000002FEF28 "h.@"
 *   insn=0x00000000002FEF28 string=0x00000000002FEF2C ")"
 *   insn=0x00000000002FEF30 string=0x00000000002FEF34 ")"
 *   insn=0x00000000002FEF34 string=0x00000000002FEF38 "("
 *   insn=0x00000000002FEF40 string=0x00000000001FCDD0 "0'"
 *   insn=0x00000000002FEF48 string=0x00000000002FEF4C "b"
 *   insn=0x00000000002FEF54 string=0x00000000002FEF60 "i"
 *   insn=0x00000000002FEF64 string=0x00000000002FEF68 ""
 *   insn=0x00000000002FEF70 string=0x00000000002FEF74 "?"
 *   insn=0x00000000002FEF78 string=0x00000000002FEF7C "?"
 *   insn=0x00000000002FEF7C string=0x00000000002FEF80 "\n"
 *   insn=0x00000000002FEF80 string=0x00000000002FEF84 ""
 *   insn=0x00000000002FEF84 string=0x00000000002FEF88 "\n"
 *   insn=0x00000000002FEF88 string=0x00000000002FEF8C "?"
 *   insn=0x00000000002FEF94 string=0x00000000002FEF98 "I"
 *   insn=0x00000000002FEF94 string=0x00000000002FEFE4 "?"
 *   insn=0x00000000002FEF98 string=0x00000000002FEF9C "h:@"
 *   insn=0x00000000002FEF9C string=0x00000000002FEFA0 ")"
 *   insn=0x00000000002FEFA4 string=0x00000000002FEFA8 ")"
 *   insn=0x00000000002FEFA8 string=0x00000000002FEFAC "("
 *   insn=0x00000000002FEFBC string=0x00000000002FEFC0 "b"
 *   insn=0x00000000002FEFC8 string=0x00000000002FEFD4 "i"
 *   insn=0x00000000002FEFD8 string=0x00000000002FEFDC ""
 *   insn=0x00000000002FEFEC string=0x00000000002FEFF0 "?"
 *   insn=0x00000000002FEFF4 string=0x00000000002FEFF8 "i"
 *   insn=0x00000000002FEFF8 string=0x00000000002FEFFC "I"
 *   insn=0x00000000002FEFFC string=0x00000000002FF000 "hB@"
 *   insn=0x00000000002FF000 string=0x00000000002FF004 ","
 *   insn=0x00000000002FF004 string=0x00000000002FF0B4 ")"
 *   insn=0x00000000002FF008 string=0x00000000002FF00C ")"
 *   insn=0x00000000002FF00C string=0x00000000002FF010 "("
 *   insn=0x00000000002FF014 string=0x00000000002FF018 "."
 *   insn=0x00000000002FF018 string=0x00000000001F34D0 "P'"
 *   insn=0x00000000002FF020 string=0x00000000002FF024 "b"
 *   insn=0x00000000002FF030 string=0x00000000002FF034 "g"
 *   insn=0x00000000002FF038 string=0x00000000002FF03C ""
 *   insn=0x00000000002FF04C string=0x00000000002FF050 "K"
 *   insn=0x00000000002FF050 string=0x00000000002FF098 "t\n"
 *   insn=0x00000000002FF054 string=0x00000000002FF058 "h"
 *   insn=0x00000000002FF05C string=0x00000000002FF060 " "
 *   insn=0x00000000002FF068 string=0x00000000002FF06C "b"
 *   insn=0x00000000002FF074 string=0x00000000002FF080 "h*"
 *   insn=0x00000000002FF078 string=0x00000000002FF07C "U"
 *   insn=0x00000000002FF088 string=0x00000000002FF08C "4"
 *   insn=0x00000000002FF090 string=0x00000000002FF094 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObject::ByteSize(Caver::Proto::SceneObject *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w21
  int v5; // w21
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0
  _QWORD *v10; // x20
  __int64 v11; // x8
  int v12; // w10
  int v13; // w0
  Caver::Proto::SceneObject *v14; // x8
  unsigned int v15; // w1
  unsigned int v16; // w20
  int v17; // w0
  int v18; // w8
  Caver::Proto::SceneObject *v19; // x8
  unsigned int v20; // w1
  unsigned int v21; // w20
  int v22; // w0
  Caver::Proto::SceneObject *v23; // x8
  unsigned int v24; // w1
  unsigned int v25; // w20
  int v26; // w0
  int v27; // w8
  unsigned int v28; // w20
  __int64 v29; // x22
  unsigned int v30; // w1
  unsigned int v31; // w21
  int v32; // w0

  v3 = *((_DWORD *)this + 34);
  if ( !(_BYTE)v3 )
  {
    v5 = 0;
    if ( (v3 & 0xFF00) == 0 )
      goto LABEL_49;
    goto LABEL_39;
  }
  if ( (v3 & 1) == 0 )
  {
    v4 = 0;
    if ( (v3 & 2) == 0 )
      goto LABEL_15;
    goto LABEL_11;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 2);
  v7 = *(_QWORD *)(*v6 - 24LL);
  if ( (unsigned int)v7 >= 0x80 )
  {
    v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
           a2);
    v3 = *((_DWORD *)this + 34);
    v8 = v9;
    v7 = *(_QWORD *)(*v6 - 24LL);
  }
  else
  {
    v8 = 1;
  }
  v4 = v8 + v7 + 1;
  if ( (v3 & 2) != 0 )
  {
LABEL_11:
    v10 = (_QWORD *)*((_QWORD *)this + 3);
    v11 = *(_QWORD *)(*v10 - 24LL);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v11,
              a2);
      v3 = *((_DWORD *)this + 34);
      v12 = v13;
      v11 = *(_QWORD *)(*v10 - 24LL);
    }
    else
    {
      v12 = 1;
    }
    v4 += v12 + v11 + 1;
  }
LABEL_15:
  if ( (v3 & 8) != 0 )
  {
    if ( *((_QWORD *)this + 11) )
      v14 = this;
    else
      v14 = (Caver::Proto::SceneObject *)Caver::Proto::SceneObject::default_instance_;
    v16 = Caver::Proto::Vector2::ByteSize(*((Caver::Proto::Vector2 **)v14 + 11));
    if ( v16 >= 0x80 )
      v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v16,
              v15);
    else
      v17 = 1;
    v3 = *((_DWORD *)this + 34);
    v4 += v16 + v17 + 1;
  }
  v18 = v4 + 5;
  if ( (v3 & 0x10) == 0 )
    v18 = v4;
  if ( (v3 & 0x20) != 0 )
    v18 += 5;
  if ( (v3 & 0x40) != 0 )
    v5 = v18 + 5;
  else
    v5 = v18;
  if ( (v3 & 0x80) != 0 )
  {
    if ( *((_QWORD *)this + 14) )
      v19 = this;
    else
      v19 = (Caver::Proto::SceneObject *)Caver::Proto::SceneObject::default_instance_;
    v21 = Caver::Proto::Rectangle::ByteSize(*((Caver::Proto::Rectangle **)v19 + 14));
    if ( v21 >= 0x80 )
      v22 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v21,
              v20);
    else
      v22 = 1;
    v3 = *((_DWORD *)this + 34);
    v5 += v21 + v22 + 1;
  }
  if ( (v3 & 0xFF00) != 0 )
  {
LABEL_39:
    if ( (v3 & 0x100) != 0 )
      v5 += 2;
    if ( (v3 & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 16) )
        v23 = this;
      else
        v23 = (Caver::Proto::SceneObject *)Caver::Proto::SceneObject::default_instance_;
      v25 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v23 + 16));
      if ( v25 >= 0x80 )
        v26 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v25,
                v24);
      else
        v26 = 1;
      v5 += v25 + v26 + 1;
    }
  }
LABEL_49:
  v27 = *((_DWORD *)this + 10);
  v28 = v27 + v5;
  if ( v27 >= 1 )
  {
    v29 = 0;
    do
    {
      v31 = Caver::Proto::Component::ByteSize(*(Caver::Proto::Component **)(*((_QWORD *)this + 4) + 8 * v29));
      if ( v31 >= 0x80 )
        v32 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v31,
                v30);
      else
        v32 = 1;
      ++v29;
      v28 += v31 + v32;
    }
    while ( v29 < *((int *)this + 10) );
  }
  *((_DWORD *)this + 2) = v28;
  return v28;
}

