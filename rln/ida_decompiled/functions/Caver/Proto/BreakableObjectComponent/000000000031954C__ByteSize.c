/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031954C
 * Mangled: _ZNK5Caver5Proto24BreakableObjectComponent8ByteSizeEv
 * Demangled: Caver::Proto::BreakableObjectComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 33
 *   insn=0x000000000031955C string=0x0000000000319560 "h"@"
 *   insn=0x0000000000319570 string=0x0000000000319588 "`"
 *   insn=0x0000000000319574 string=0x00000000003195A4 "`"
 *   insn=0x0000000000319578 string=0x000000000031957C "7"
 *   insn=0x0000000000319578 string=0x0000000000319610 "i"
 *   insn=0x000000000031957C string=0x0000000000319658 "t\n"
 *   insn=0x0000000000319580 string=0x0000000000319584 "5"
 *   insn=0x000000000031958C string=0x00000000003195C4 "i"
 *   insn=0x0000000000319598 string=0x000000000031959C "4"
 *   insn=0x00000000003195A4 string=0x00000000003195A8 "`"
 *   insn=0x00000000003195A8 string=0x00000000003195D4 "i"
 *   insn=0x00000000003195AC string=0x00000000003195B0 "b"
 *   insn=0x00000000003195B4 string=0x00000000003195B8 "4"
 *   insn=0x00000000003195BC string=0x00000000003195C0 "&"
 *   insn=0x00000000003195C4 string=0x00000000003195C8 "4"
 *   insn=0x00000000003195C8 string=0x00000000003195CC "h"
 *   insn=0x00000000003195D4 string=0x00000000003195D8 "4"
 *   insn=0x00000000003195E4 string=0x00000000003195E8 "h"@"
 *   insn=0x00000000003195E4 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000003195E8 string=0x00000000003195EC "\t"
 *   insn=0x00000000003195EC string=0x00000000003195F0 "4"
 *   insn=0x00000000003195F0 string=0x00000000003195F4 "("
 *   insn=0x00000000003195FC string=0x0000000000319600 "h"@"
 *   insn=0x0000000000319600 string=0x0000000000319604 "\t"
 *   insn=0x0000000000319604 string=0x0000000000319608 "4"
 *   insn=0x0000000000319608 string=0x000000000031960C "h"
 *   insn=0x0000000000319610 string=0x0000000000319614 "h"
 *   insn=0x0000000000319614 string=0x0000000000319618 ")"
 *   insn=0x000000000031961C string=0x0000000000319620 ")"
 *   insn=0x0000000000319620 string=0x0000000000319624 "("
 *   insn=0x000000000031962C string=0x00000000001F34D0 "P'"
 *   insn=0x0000000000319634 string=0x0000000000319638 "b"
 *   insn=0x000000000031964C string=0x0000000000319650 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BreakableObjectComponent::ByteSize(
        Caver::Proto::BreakableObjectComponent *this,
        unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  google::protobuf::io::CodedOutputStream *v6; // x0
  int v7; // w0
  Caver::Proto::BreakableObjectComponent *v8; // x8
  unsigned int v9; // w1
  unsigned int v10; // w21
  int v11; // w0

  v3 = *((_DWORD *)this + 8);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_28;
  }
  v4 = 2 * (v3 & 1);
  if ( (v3 & 2) == 0 )
  {
    if ( (v3 & 4) == 0 )
      goto LABEL_4;
LABEL_10:
    v6 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v6 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 8) == 0 )
        goto LABEL_28;
    }
    else if ( (unsigned int)v6 >= 0x80 )
    {
      v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, a2) + 1;
      if ( (*((_DWORD *)this + 8) & 8) == 0 )
        goto LABEL_28;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 8) == 0 )
        goto LABEL_28;
    }
    goto LABEL_21;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 4) != 0 )
      goto LABEL_10;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 8);
    v4 += v7 + 1;
    if ( (v3 & 4) != 0 )
      goto LABEL_10;
  }
  else
  {
    v4 += 2;
    if ( (v3 & 4) != 0 )
      goto LABEL_10;
  }
LABEL_4:
  if ( (v3 & 8) == 0 )
    goto LABEL_28;
LABEL_21:
  if ( *((_QWORD *)this + 3) )
    v8 = this;
  else
    v8 = (Caver::Proto::BreakableObjectComponent *)Caver::Proto::BreakableObjectComponent::default_instance_;
  v10 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v8 + 3));
  if ( v10 >= 0x80 )
    v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v10,
            v9);
  else
    v11 = 1;
  v4 += v10 + v11 + 1;
LABEL_28:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

