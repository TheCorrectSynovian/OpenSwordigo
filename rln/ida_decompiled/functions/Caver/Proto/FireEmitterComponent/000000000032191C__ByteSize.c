/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032191C
 * Mangled: _ZNK5Caver5Proto20FireEmitterComponent8ByteSizeEv
 * Demangled: Caver::Proto::FireEmitterComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *   0x00000000001FCDD0  Caver::Proto::Vector2::ByteSize(void)
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 62
 *   insn=0x000000000032192C string=0x0000000000321930 "h"
 *   insn=0x0000000000321930 string=0x0000000000321934 "H"
 *   insn=0x0000000000321934 string=0x0000000000321938 "h"
 *   insn=0x0000000000321938 string=0x0000000000321964 "`"
 *   insn=0x000000000032193C string=0x0000000000321940 "("
 *   insn=0x0000000000321940 string=0x0000000000321944 "`"
 *   insn=0x0000000000321948 string=0x0000000000321980 "i"
 *   insn=0x000000000032194C string=0x0000000000321950 """
 *   insn=0x0000000000321958 string=0x00000000003219A0 "5"
 *   insn=0x000000000032195C string=0x0000000000321960 "i"
 *   insn=0x0000000000321960 string=0x0000000000321B04 "t\n"
 *   insn=0x0000000000321968 string=0x0000000000321988 "u"
 *   insn=0x000000000032196C string=0x0000000000321970 "b"
 *   insn=0x0000000000321974 string=0x0000000000321978 "h"
 *   insn=0x0000000000321978 string=0x000000000032197C "\n"
 *   insn=0x0000000000321980 string=0x0000000000321984 ""
 *   insn=0x0000000000321994 string=0x0000000000321998 "hB@"
 *   insn=0x0000000000321994 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000321998 string=0x000000000032199C "\t"
 *   insn=0x00000000003219A4 string=0x00000000003219B4 ")"
 *   insn=0x00000000003219A8 string=0x00000000003219AC "H"
 *   insn=0x00000000003219A8 string=0x0000000000321A04 ")"
 *   insn=0x00000000003219AC string=0x00000000003219B0 "<"
 *   insn=0x00000000003219AC string=0x0000000000321A54 ")"
 *   insn=0x00000000003219B4 string=0x00000000003219B8 "h"
 *   insn=0x00000000003219B8 string=0x00000000003219BC ")"
 *   insn=0x00000000003219C0 string=0x00000000003219C4 ")"
 *   insn=0x00000000003219C4 string=0x00000000003219C8 "("
 *   insn=0x00000000003219D0 string=0x00000000001FCDD0 "0'"
 *   insn=0x00000000003219D8 string=0x00000000003219DC "b"
 *   insn=0x00000000003219E4 string=0x00000000003219F0 "hB@"
 *   insn=0x00000000003219F4 string=0x00000000003219F8 ")"
 *   insn=0x00000000003219F8 string=0x00000000003219FC "5"
 *   insn=0x00000000003219FC string=0x0000000000321A00 "h"
 *   insn=0x0000000000321A04 string=0x0000000000321A08 "h"
 *   insn=0x0000000000321A08 string=0x0000000000321A0C ")"
 *   insn=0x0000000000321A10 string=0x0000000000321A14 ")"
 *   insn=0x0000000000321A14 string=0x0000000000321A18 "("
 *   insn=0x0000000000321A28 string=0x0000000000321A2C "b"
 *   insn=0x0000000000321A34 string=0x0000000000321A40 "hB@"
 *   insn=0x0000000000321A44 string=0x0000000000321A48 ")"
 *   insn=0x0000000000321A48 string=0x0000000000321A4C "5"
 *   insn=0x0000000000321A54 string=0x0000000000321A58 "h"
 *   insn=0x0000000000321A58 string=0x0000000000321A5C ")"
 *   insn=0x0000000000321A60 string=0x0000000000321A64 ")"
 *   insn=0x0000000000321A64 string=0x0000000000321A68 "("
 *   insn=0x0000000000321A70 string=0x00000000001F9DC0 "0'"
 *   insn=0x0000000000321A78 string=0x0000000000321A7C "b"
 *   insn=0x0000000000321A84 string=0x0000000000321A90 "hB@"
 *   insn=0x0000000000321A94 string=0x0000000000321A98 ")"
 *   insn=0x0000000000321A98 string=0x0000000000321A9C "5"
 *   insn=0x0000000000321AA8 string=0x0000000000321AAC "*"
 *   insn=0x0000000000321AB0 string=0x0000000000321AB4 "4"
 *   insn=0x0000000000321AB4 string=0x0000000000321AB8 "h"
 *   insn=0x0000000000321AB8 string=0x0000000000321ABC ")"
 *   insn=0x0000000000321ABC string=0x0000000000321AC0 "h"
 *   insn=0x0000000000321AC0 string=0x0000000000321AC4 ")"
 *   insn=0x0000000000321AC8 string=0x0000000000321ACC ")"
 *   insn=0x0000000000321ACC string=0x0000000000321AD0 "("
 *   insn=0x0000000000321AE0 string=0x0000000000321AE4 "b"
 *   insn=0x0000000000321AF8 string=0x0000000000321AFC ""
 *   insn=0x0000000000321B1C string=0x0000000000321B20 "hB@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireEmitterComponent::ByteSize(
        Caver::Proto::FireEmitterComponent *this,
        unsigned int a2)
{
  int v3; // w8
  int v4; // w21
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  unsigned int v7; // w20
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  Caver::Proto::FireEmitterComponent *v10; // x8
  unsigned int v11; // w1
  unsigned int v12; // w20
  int v13; // w0
  Caver::Proto::FireEmitterComponent *v14; // x8
  unsigned int v15; // w1
  unsigned int v16; // w20
  int v17; // w0
  Caver::Proto::FireEmitterComponent *v18; // x8
  unsigned int v19; // w1
  unsigned int v20; // w20
  int v21; // w0
  int v22; // w9
  Caver::Proto::FireEmitterComponent *v23; // x8
  unsigned int v24; // w1
  unsigned int v25; // w21
  int v26; // w0
  int v28; // w0

  LOBYTE(v3) = *((_BYTE *)this + 64);
  if ( !(_BYTE)v3 )
  {
    v7 = 0;
    goto LABEL_55;
  }
  if ( (*((_BYTE *)this + 64) & 1) != 0 )
  {
    v8 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v8 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v8 >= 0x80 )
    {
      v28 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 16);
      v4 = v28 + 1;
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
    if ( (*((_BYTE *)this + 64) & 2) == 0 )
      goto LABEL_17;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 16);
    v6 = v9 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  if ( (v3 & 4) == 0 )
  {
    if ( (v3 & 8) == 0 )
      goto LABEL_19;
LABEL_28:
    if ( *((_QWORD *)this + 4) )
      v14 = this;
    else
      v14 = (Caver::Proto::FireEmitterComponent *)Caver::Proto::FireEmitterComponent::default_instance_;
    v16 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v14 + 4));
    if ( v16 >= 0x80 )
      v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v16,
              v15);
    else
      v17 = 1;
    v3 = *((_DWORD *)this + 16);
    v4 += v16 + v17 + 1;
    if ( (v3 & 0x10) == 0 )
      goto LABEL_42;
    goto LABEL_35;
  }
  if ( *((_QWORD *)this + 3) )
    v10 = this;
  else
    v10 = (Caver::Proto::FireEmitterComponent *)Caver::Proto::FireEmitterComponent::default_instance_;
  v12 = Caver::Proto::Vector2::ByteSize(*((Caver::Proto::Vector2 **)v10 + 3));
  if ( v12 >= 0x80 )
    v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v12,
            v11);
  else
    v13 = 1;
  v3 = *((_DWORD *)this + 16);
  v4 += v12 + v13 + 1;
  if ( (v3 & 8) != 0 )
    goto LABEL_28;
LABEL_19:
  if ( (v3 & 0x10) != 0 )
  {
LABEL_35:
    if ( *((_QWORD *)this + 5) )
      v18 = this;
    else
      v18 = (Caver::Proto::FireEmitterComponent *)Caver::Proto::FireEmitterComponent::default_instance_;
    v20 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v18 + 5));
    if ( v20 >= 0x80 )
      v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v20,
              v19);
    else
      v21 = 1;
    v3 = *((_DWORD *)this + 16);
    v4 += v20 + v21 + 1;
  }
LABEL_42:
  v22 = v4 + 5;
  if ( (v3 & 0x20) == 0 )
    v22 = v4;
  if ( (v3 & 0x40) != 0 )
    v7 = v22 + 5;
  else
    v7 = v22;
  if ( (v3 & 0x80) != 0 )
  {
    if ( *((_QWORD *)this + 7) )
      v23 = this;
    else
      v23 = (Caver::Proto::FireEmitterComponent *)Caver::Proto::FireEmitterComponent::default_instance_;
    v25 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v23 + 7));
    if ( v25 >= 0x80 )
      v26 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v25,
              v24);
    else
      v26 = 1;
    v7 += v25 + v26 + 1;
  }
LABEL_55:
  *((_DWORD *)this + 2) = v7;
  return v7;
}

