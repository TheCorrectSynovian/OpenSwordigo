/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031038C
 * Mangled: _ZNK5Caver5Proto14LightComponent8ByteSizeEv
 * Demangled: Caver::Proto::LightComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 35
 *   insn=0x000000000031039C string=0x00000000003103A0 "h"
 *   insn=0x00000000003103A8 string=0x00000000003103BC "`"
 *   insn=0x00000000003103B0 string=0x00000000003103E8 "*"
 *   insn=0x00000000003103B4 string=0x00000000003103B8 "?"
 *   insn=0x00000000003103B8 string=0x00000000003104B4 "t\n"
 *   insn=0x00000000003103C0 string=0x00000000003103D4 "i"
 *   insn=0x00000000003103C8 string=0x00000000003103DC "}"
 *   insn=0x00000000003103DC string=0x00000000003103E0 "h:@"
 *   insn=0x00000000003103DC string=0x00000000001F61D0 "0'"
 *   insn=0x00000000003103E0 string=0x00000000003103E4 "\t"
 *   insn=0x00000000003103EC string=0x00000000003103F0 "5"
 *   insn=0x00000000003103F8 string=0x00000000003103FC "h"
 *   insn=0x00000000003103FC string=0x0000000000310400 ")eF"
 *   insn=0x0000000000310404 string=0x0000000000310408 ")"
 *   insn=0x0000000000310408 string=0x000000000031040C "("
 *   insn=0x0000000000310410 string=0x0000000000310414 "k"
 *   insn=0x0000000000310414 string=0x00000000001F9DC0 "0'"
 *   insn=0x000000000031041C string=0x0000000000310420 "b"
 *   insn=0x0000000000310428 string=0x0000000000310434 "h:@"
 *   insn=0x000000000031042C string=0x0000000000310430 "h"
 *   insn=0x0000000000310438 string=0x000000000031043C ")"
 *   insn=0x000000000031043C string=0x0000000000310440 "5"
 *   insn=0x0000000000310450 string=0x0000000000310454 "*"
 *   insn=0x0000000000310454 string=0x0000000000310458 ")"
 *   insn=0x0000000000310458 string=0x000000000031045C "*"
 *   insn=0x0000000000310460 string=0x0000000000310464 "4"
 *   insn=0x0000000000310464 string=0x0000000000310468 "h"
 *   insn=0x000000000031046C string=0x0000000000310470 "h"
 *   insn=0x0000000000310470 string=0x0000000000310474 ")eF"
 *   insn=0x0000000000310478 string=0x000000000031047C ")"
 *   insn=0x000000000031047C string=0x0000000000310480 "("
 *   insn=0x0000000000310484 string=0x0000000000310488 "*"
 *   insn=0x0000000000310490 string=0x0000000000310494 "b"
 *   insn=0x00000000003104A0 string=0x00000000003104A4 "K"
 *   insn=0x00000000003104A8 string=0x00000000003104AC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LightComponent::ByteSize(Caver::Proto::LightComponent *this, unsigned int a2)
{
  int v3; // w8
  int v4; // w9
  unsigned int v5; // w20
  google::protobuf::io::CodedOutputStream *v6; // x0
  int v7; // w0
  int v8; // w21
  Caver::Proto::LightComponent *v9; // x8
  unsigned int v10; // w1
  unsigned int v11; // w20
  int v12; // w0
  int v13; // w9
  Caver::Proto::LightComponent *v14; // x8
  unsigned int v15; // w1
  unsigned int v16; // w21
  int v17; // w0

  LOBYTE(v3) = *((_BYTE *)this + 56);
  if ( (_BYTE)v3 )
  {
    if ( (*((_BYTE *)this + 56) & 1) != 0 )
    {
      v6 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
      if ( ((unsigned int)v6 & 0x80000000) != 0 )
      {
        v4 = 11;
      }
      else if ( (unsigned int)v6 >= 0x80 )
      {
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, a2);
        v3 = *((_DWORD *)this + 14);
        v4 = v7 + 1;
      }
      else
      {
        v4 = 2;
      }
    }
    else
    {
      v4 = 0;
    }
    if ( (v3 & 2) != 0 )
      v8 = v4 + 5;
    else
      v8 = v4;
    if ( (v3 & 4) != 0 )
    {
      if ( *((_QWORD *)this + 3) )
        v9 = this;
      else
        v9 = (Caver::Proto::LightComponent *)Caver::Proto::LightComponent::default_instance_;
      v11 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v9 + 3));
      if ( v11 >= 0x80 )
        v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v11,
                v10);
      else
        v12 = 1;
      v3 = *((_DWORD *)this + 14);
      v8 += v11 + v12 + 1;
    }
    v13 = v8 + 5;
    if ( (v3 & 8) == 0 )
      v13 = v8;
    if ( (v3 & 0x10) != 0 )
      v13 += 5;
    if ( (v3 & 0x20) != 0 )
      v5 = v13 + 5;
    else
      v5 = v13;
    if ( (v3 & 0x40) != 0 )
    {
      if ( *((_QWORD *)this + 6) )
        v14 = this;
      else
        v14 = (Caver::Proto::LightComponent *)Caver::Proto::LightComponent::default_instance_;
      v16 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v14 + 6));
      if ( v16 >= 0x80 )
        v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v16,
                v15);
      else
        v17 = 1;
      v5 += v16 + v17 + 1;
    }
  }
  else
  {
    v5 = 0;
  }
  *((_DWORD *)this + 2) = v5;
  return v5;
}

