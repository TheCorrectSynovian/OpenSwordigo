/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031EE30
 * Mangled: _ZNK5Caver5Proto24ParticleEmitterComponent8ByteSizeEv
 * Demangled: Caver::Proto::ParticleEmitterComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9A70  Caver::Proto::ParticleEmitter::ByteSize(void)
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 67
 *   insn=0x000000000031EE40 string=0x000000000031EE44 "h"
 *   insn=0x000000000031EE48 string=0x000000000031EE4C "@"
 *   insn=0x000000000031EE50 string=0x000000000031EE80 "`"
 *   insn=0x000000000031EE54 string=0x000000000031EE58 "H"
 *   insn=0x000000000031EE58 string=0x000000000031EE5C "`"
 *   insn=0x000000000031EE60 string=0x000000000031EE9C "i"
 *   insn=0x000000000031EE64 string=0x000000000031EE68 "B"
 *   insn=0x000000000031EE70 string=0x000000000031EEBC "4"
 *   insn=0x000000000031EE78 string=0x000000000031EE7C "P"
 *   insn=0x000000000031EE78 string=0x000000000031EF74 ")"
 *   insn=0x000000000031EE7C string=0x000000000031EFBC "h*@"
 *   insn=0x000000000031EE84 string=0x000000000031EEA4 "t"
 *   insn=0x000000000031EE88 string=0x000000000031EE8C """
 *   insn=0x000000000031EE90 string=0x000000000031EE94 "H"
 *   insn=0x000000000031EE94 string=0x000000000031EE98 "\n"
 *   insn=0x000000000031EE9C string=0x000000000031EEA0 ""
 *   insn=0x000000000031EEB0 string=0x000000000031EEB4 "h"
 *   insn=0x000000000031EEB0 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000031EEB4 string=0x000000000031EEB8 "\t"
 *   insn=0x000000000031EEC8 string=0x000000000031EECC "H"
 *   insn=0x000000000031EECC string=0x000000000031EED0 "`"
 *   insn=0x000000000031EED4 string=0x000000000031EEE8 "i"
 *   insn=0x000000000031EED8 string=0x000000000031EEDC "B"
 *   insn=0x000000000031EEE0 string=0x000000000031EEE4 ""
 *   insn=0x000000000031EEE4 string=0x000000000031EF10 "4"
 *   insn=0x000000000031EEE8 string=0x000000000031EEEC "\t"
 *   insn=0x000000000031EEF0 string=0x000000000031EEF4 "h"
 *   insn=0x000000000031EEF8 string=0x000000000031EEFC ""
 *   insn=0x000000000031EF04 string=0x000000000031EF08 "h"
 *   insn=0x000000000031EF08 string=0x000000000031EF0C "\t"
 *   insn=0x000000000031EF20 string=0x000000000031EF24 ")"
 *   insn=0x000000000031EF20 string=0x000000000031EF70 "h"
 *   insn=0x000000000031EF24 string=0x000000000031EF28 "h>@"
 *   insn=0x000000000031EF28 string=0x000000000031EF2C ")"
 *   insn=0x000000000031EF30 string=0x000000000031EF34 ")"
 *   insn=0x000000000031EF34 string=0x000000000031EF38 "("
 *   insn=0x000000000031EF3C string=0x000000000031EF40 "|~"
 *   insn=0x000000000031EF48 string=0x000000000031EF4C "b"
 *   insn=0x000000000031EF54 string=0x000000000031EF60 "h"
 *   insn=0x000000000031EF64 string=0x000000000031EF68 ")"
 *   insn=0x000000000031EF68 string=0x000000000031EF6C "5"
 *   insn=0x000000000031EF74 string=0x000000000031EF78 "hB@"
 *   insn=0x000000000031EF78 string=0x000000000031EF7C ")"
 *   insn=0x000000000031EF80 string=0x000000000031EF84 ")"
 *   insn=0x000000000031EF84 string=0x000000000031EF88 "("
 *   insn=0x000000000031EF8C string=0x000000000031EF90 "h~"
 *   insn=0x000000000031EF98 string=0x000000000031EF9C "b"
 *   insn=0x000000000031EFB0 string=0x000000000031EFB4 ""
 *   insn=0x000000000031EFC0 string=0x000000000031EFC4 "k"
 *   insn=0x000000000031EFCC string=0x000000000031EFD0 "i"
 *   insn=0x000000000031EFD0 string=0x000000000031EFD4 " yv"
 *   insn=0x000000000031EFD8 string=0x000000000031EFEC "@"
 *   insn=0x000000000031EFE0 string=0x000000000031EFF4 "w\"
 *   insn=0x000000000031EFF4 string=0x000000000031EFF8 "h*@"
 *   insn=0x000000000031F004 string=0x000000000031F008 "K"
 *   insn=0x000000000031F00C string=0x000000000031F014 "iJ@"
 *   insn=0x000000000031F018 string=0x000000000031F01C "H"
 *   insn=0x000000000031F01C string=0x000000000031F020 "?"
 *   insn=0x000000000031F024 string=0x000000000031F028 "K"
 *   insn=0x000000000031F028 string=0x000000000031F070 "t\n"
 *   insn=0x000000000031F02C string=0x000000000031F030 "h"@"
 *   insn=0x000000000031F038 string=0x00000000001F9A70 "0'"
 *   insn=0x000000000031F040 string=0x000000000031F044 "b"
 *   insn=0x000000000031F04C string=0x000000000031F058 "hJ"
 *   insn=0x000000000031F050 string=0x000000000031F054 "_\"
 *   insn=0x000000000031F060 string=0x000000000031F064 "4"
 *   insn=0x000000000031F068 string=0x000000000031F06C "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitterComponent::ByteSize(
        Caver::Proto::ParticleEmitterComponent *this,
        unsigned int a2)
{
  int v3; // w8
  int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  int v7; // w21
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w9
  int v12; // w0
  int v13; // w0
  Caver::Proto::ParticleEmitterComponent *v14; // x8
  unsigned int v15; // w20
  int v16; // w0
  Caver::Proto::ParticleEmitterComponent *v17; // x8
  unsigned int v18; // w20
  int v19; // w0
  int v20; // w8
  __int64 v21; // x22
  int v22; // w20
  google::protobuf::io::CodedOutputStream *v23; // x0
  int v24; // w0
  int v25; // w9
  unsigned int v26; // w20
  __int64 v27; // x22
  unsigned int v28; // w1
  unsigned int v29; // w21
  int v30; // w0

  v3 = *((_DWORD *)this + 34);
  if ( !(_BYTE)v3 )
  {
    v7 = 0;
    if ( (v3 & 0x100) == 0 )
      goto LABEL_48;
    goto LABEL_41;
  }
  if ( (v3 & 1) != 0 )
  {
    v8 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v8 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    else if ( (unsigned int)v8 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 34);
      v4 = v12 + 1;
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
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 34);
    v6 = v9 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_18:
  if ( (v3 & 4) != 0 )
    v4 += 2;
  if ( (v3 & 8) != 0 )
  {
    v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
    if ( ((unsigned int)v10 & 0x80000000) != 0 )
    {
      v11 = 11;
    }
    else if ( (unsigned int)v10 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2);
      v3 = *((_DWORD *)this + 34);
      v11 = v13 + 1;
    }
    else
    {
      v11 = 2;
    }
    v4 += v11;
  }
  if ( (v3 & 0x10) != 0 )
    v7 = v4 + 2;
  else
    v7 = v4;
  if ( (v3 & 0x80) != 0 )
  {
    if ( *((_QWORD *)this + 15) )
      v14 = this;
    else
      v14 = (Caver::Proto::ParticleEmitterComponent *)Caver::Proto::ParticleEmitterComponent::default_instance_;
    v15 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v14 + 15));
    if ( v15 >= 0x80 )
      v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v15,
              a2);
    else
      v16 = 1;
    v3 = *((_DWORD *)this + 34);
    v7 += v15 + v16 + 1;
  }
  if ( (v3 & 0x100) != 0 )
  {
LABEL_41:
    if ( *((_QWORD *)this + 16) )
      v17 = this;
    else
      v17 = (Caver::Proto::ParticleEmitterComponent *)Caver::Proto::ParticleEmitterComponent::default_instance_;
    v18 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v17 + 16));
    if ( v18 >= 0x80 )
      v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v18,
              a2);
    else
      v19 = 1;
    v7 += v18 + v19 + 1;
  }
LABEL_48:
  v20 = *((_DWORD *)this + 10);
  if ( v20 < 1 )
  {
    v22 = 0;
  }
  else
  {
    v21 = 0;
    v22 = 0;
    do
    {
      v23 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)(*((_QWORD *)this + 4) + 4 * v21);
      if ( ((unsigned int)v23 & 0x80000000) != 0 )
      {
        v24 = 10;
      }
      else if ( (unsigned int)v23 >= 0x80 )
      {
        v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v23, a2);
        v20 = *((_DWORD *)this + 10);
      }
      else
      {
        v24 = 1;
      }
      ++v21;
      v22 += v24;
    }
    while ( v21 < v20 );
  }
  v25 = *((_DWORD *)this + 18);
  v26 = v22 + v7 + v20 + v25;
  if ( v25 >= 1 )
  {
    v27 = 0;
    do
    {
      v29 = Caver::Proto::ParticleEmitter::ByteSize(*(Caver::Proto::ParticleEmitter **)(*((_QWORD *)this + 8) + 8 * v27));
      if ( v29 >= 0x80 )
        v30 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v29,
                v28);
      else
        v30 = 1;
      ++v27;
      v26 += v29 + v30;
    }
    while ( v27 < *((int *)this + 18) );
  }
  *((_DWORD *)this + 2) = v26;
  return v26;
}

