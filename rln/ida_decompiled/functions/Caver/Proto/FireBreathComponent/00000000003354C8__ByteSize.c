/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003354C8
 * Mangled: _ZNK5Caver5Proto19FireBreathComponent8ByteSizeEv
 * Demangled: Caver::Proto::FireBreathComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *
 * Referenced strings: 29
 *   insn=0x00000000003354D8 string=0x00000000003354DC "h"
 *   insn=0x00000000003354DC string=0x00000000003354E0 "H"
 *   insn=0x00000000003354E0 string=0x00000000003354E4 "h"
 *   insn=0x00000000003354E4 string=0x0000000000335510 "`"
 *   insn=0x00000000003354E8 string=0x00000000003354EC "("
 *   insn=0x00000000003354EC string=0x00000000003354F0 "`"
 *   insn=0x00000000003354EC string=0x0000000000335550 "h"
 *   insn=0x00000000003354F4 string=0x000000000033552C "i"
 *   insn=0x00000000003354F8 string=0x00000000003354FC """
 *   insn=0x00000000003354FC string=0x0000000000335540 "$"
 *   insn=0x0000000000335504 string=0x000000000033554C "4"
 *   insn=0x0000000000335508 string=0x000000000033550C "$"
 *   insn=0x000000000033550C string=0x000000000033559C "t\n"
 *   insn=0x0000000000335514 string=0x0000000000335534 "t"
 *   insn=0x000000000033551C string=0x00000000003355B4 ""
 *   insn=0x0000000000335520 string=0x0000000000335524 "h"
 *   insn=0x0000000000335524 string=0x0000000000335528 "\n"
 *   insn=0x000000000033552C string=0x0000000000335530 ""
 *   insn=0x0000000000335540 string=0x0000000000335544 "h"@"
 *   insn=0x0000000000335540 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000335544 string=0x0000000000335548 "\t"
 *   insn=0x0000000000335554 string=0x0000000000335558 "h"
 *   insn=0x0000000000335558 string=0x000000000033555C ")"
 *   insn=0x0000000000335560 string=0x0000000000335564 ")"
 *   insn=0x0000000000335564 string=0x0000000000335568 "("
 *   insn=0x0000000000335570 string=0x00000000001F9DC0 "0'"
 *   insn=0x0000000000335578 string=0x000000000033557C "b"
 *   insn=0x0000000000335590 string=0x0000000000335594 ""
 *   insn=0x00000000003355B4 string=0x00000000003355B8 "h"@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireBreathComponent::ByteSize(
        Caver::Proto::FireBreathComponent *this,
        unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  google::protobuf::io::CodedOutputStream *v7; // x0
  int v8; // w0
  Caver::Proto::FireBreathComponent *v9; // x8
  unsigned int v10; // w1
  unsigned int v11; // w21
  int v12; // w0
  int v14; // w0

  LOBYTE(v3) = *((_BYTE *)this + 32);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_25;
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    v7 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v7 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v7 >= 0x80 )
    {
      v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2);
      v3 = *((_DWORD *)this + 8);
      v4 = v14 + 1;
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
    if ( (*((_BYTE *)this + 32) & 2) == 0 )
      goto LABEL_17;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 8);
    v6 = v8 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  if ( (v3 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 3) )
      v9 = this;
    else
      v9 = (Caver::Proto::FireBreathComponent *)Caver::Proto::FireBreathComponent::default_instance_;
    v11 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v9 + 3));
    if ( v11 >= 0x80 )
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v11,
              v10);
    else
      v12 = 1;
    v4 += v11 + v12 + 1;
  }
LABEL_25:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

