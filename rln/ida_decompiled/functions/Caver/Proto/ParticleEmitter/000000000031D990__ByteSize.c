/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031D990
 * Mangled: _ZNK5Caver5Proto15ParticleEmitter8ByteSizeEv
 * Demangled: Caver::Proto::ParticleEmitter::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F9A70  Caver::Proto::ParticleEmitter::ByteSize(void)
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 37
 *   insn=0x000000000031D9A0 string=0x000000000031D9A4 "hBA9h"
 *   insn=0x000000000031D9A4 string=0x000000000031D9A8 "h"
 *   insn=0x000000000031D9A8 string=0x000000000031DAB4 "i:@"
 *   insn=0x000000000031D9AC string=0x000000000031D9BC "`"
 *   insn=0x000000000031D9B0 string=0x000000000031D9B4 ""
 *   insn=0x000000000031D9B4 string=0x000000000031D9B8 """
 *   insn=0x000000000031D9B4 string=0x000000000031D9F4 ")"
 *   insn=0x000000000031D9C0 string=0x000000000031D9D8 "u"
 *   insn=0x000000000031D9CC string=0x000000000031D9D0 "("
 *   insn=0x000000000031D9D0 string=0x000000000031D9D4 ""
 *   insn=0x000000000031D9E4 string=0x000000000031D9E8 "hR@"
 *   insn=0x000000000031D9E4 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000031D9F4 string=0x000000000031D9F8 "h\n@"
 *   insn=0x000000000031D9F8 string=0x000000000031D9FC ")yF"
 *   insn=0x000000000031DA00 string=0x000000000031DA04 ")"
 *   insn=0x000000000031DA04 string=0x000000000031DA08 "("
 *   insn=0x000000000031DA18 string=0x000000000031DA1C "b"
 *   insn=0x000000000031DA24 string=0x000000000031DA30 "hR@"
 *   insn=0x000000000031DA34 string=0x000000000031DA38 ")"
 *   insn=0x000000000031DA38 string=0x000000000031DA3C "5"
 *   insn=0x000000000031DA40 string=0x000000000031DA44 ")"
 *   insn=0x000000000031DA44 string=0x000000000031DA48 "h"
 *   insn=0x000000000031DA48 string=0x000000000031DA4C ")yF"
 *   insn=0x000000000031DA50 string=0x000000000031DA54 ")"
 *   insn=0x000000000031DA54 string=0x000000000031DA58 "("
 *   insn=0x000000000031DA60 string=0x00000000001F9DC0 "0'"
 *   insn=0x000000000031DA68 string=0x000000000031DA6C "b"
 *   insn=0x000000000031DA74 string=0x000000000031DA80 "hR@"
 *   insn=0x000000000031DA84 string=0x000000000031DA88 ")"
 *   insn=0x000000000031DA88 string=0x000000000031DA8C "5"
 *   insn=0x000000000031DA9C string=0x000000000031DAA0 "*"
 *   insn=0x000000000031DAA0 string=0x000000000031DAA4 ")"
 *   insn=0x000000000031DAA4 string=0x000000000031DAA8 "*"
 *   insn=0x000000000031DAAC string=0x000000000031DAB0 "("
 *   insn=0x000000000031DAB4 string=0x000000000031DAB8 ")\t\t "
 *   insn=0x000000000031DAB8 string=0x000000000031DABC " "
 *   insn=0x000000000031DABC string=0x000000000031DAC0 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitter::ByteSize(Caver::Proto::ParticleEmitter *this, unsigned int a2)
{
  int v3; // w8
  int v4; // w21
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w0
  Caver::Proto::ParticleEmitter *v7; // x8
  unsigned int v8; // w1
  unsigned int v9; // w20
  int v10; // w0
  Caver::Proto::ParticleEmitter *v11; // x8
  unsigned int v12; // w1
  unsigned int v13; // w20
  int v14; // w0
  int v15; // w9
  __int64 result; // x0

  v3 = *((unsigned __int8 *)this + 80);
  if ( !*((_BYTE *)this + 80) )
    goto LABEL_34;
  if ( (v3 & 1) == 0 )
  {
    v4 = 0;
    if ( (v3 & 2) == 0 )
      goto LABEL_19;
LABEL_12:
    if ( *((_QWORD *)this + 2) )
      v7 = this;
    else
      v7 = (Caver::Proto::ParticleEmitter *)Caver::Proto::ParticleEmitter::default_instance_;
    v9 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v7 + 2));
    if ( v9 >= 0x80 )
      v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v9,
              v8);
    else
      v10 = 1;
    v3 = *((_DWORD *)this + 20);
    v4 += v9 + v10 + 1;
    goto LABEL_19;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v4 = 11;
    if ( (v3 & 2) == 0 )
      goto LABEL_19;
    goto LABEL_12;
  }
  if ( (unsigned int)v5 < 0x80 )
  {
    v4 = 2;
    if ( (v3 & 2) == 0 )
      goto LABEL_19;
    goto LABEL_12;
  }
  v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
  v3 = *((_DWORD *)this + 20);
  v4 = v6 + 1;
  if ( (v3 & 2) != 0 )
    goto LABEL_12;
LABEL_19:
  if ( (v3 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 3) )
      v11 = this;
    else
      v11 = (Caver::Proto::ParticleEmitter *)Caver::Proto::ParticleEmitter::default_instance_;
    v13 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v11 + 3));
    if ( v13 >= 0x80 )
      v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v13,
              v12);
    else
      v14 = 1;
    v3 = *((_DWORD *)this + 20);
    v4 += v13 + v14 + 1;
  }
  v15 = v4 + 5;
  if ( (v3 & 8) == 0 )
    v15 = v4;
  if ( (v3 & 0x10) != 0 )
    v15 += 5;
  if ( (v3 & 0x20) != 0 )
    v3 = v15 + 5;
  else
    v3 = v15;
LABEL_34:
  result = (unsigned int)(5 * *((_DWORD *)this + 14) + v3);
  *((_DWORD *)this + 2) = result;
  return result;
}

