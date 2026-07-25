/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334610
 * Mangled: _ZNK5Caver5Proto14SkillComponent8ByteSizeEv
 * Demangled: Caver::Proto::SkillComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FCDD0  Caver::Proto::Vector2::ByteSize(void)
 *
 * Referenced strings: 26
 *   insn=0x0000000000334620 string=0x0000000000334624 "i"
 *   insn=0x000000000033462C string=0x0000000000334644 "`"
 *   insn=0x0000000000334630 string=0x0000000000334634 "I"
 *   insn=0x0000000000334634 string=0x0000000000334638 "!"
 *   insn=0x0000000000334634 string=0x000000000033467C "u\n@"
 *   insn=0x0000000000334638 string=0x00000000003346BC "i"
 *   insn=0x000000000033463C string=0x0000000000334640 "2"
 *   insn=0x0000000000334640 string=0x0000000000334708 "t\n"
 *   insn=0x0000000000334648 string=0x0000000000334660 "t"
 *   insn=0x0000000000334654 string=0x0000000000334658 ")"
 *   insn=0x000000000033466C string=0x0000000000334670 "i"@"
 *   insn=0x000000000033466C string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000334674 string=0x0000000000334678 ")"
 *   insn=0x0000000000334680 string=0x0000000000334684 ""
 *   insn=0x0000000000334688 string=0x000000000033468C "b"
 *   insn=0x0000000000334690 string=0x0000000000334694 ""
 *   insn=0x0000000000334694 string=0x00000000003346B0 "H"
 *   insn=0x00000000003346A0 string=0x00000000003346A4 "i"@"
 *   insn=0x00000000003346A8 string=0x00000000003346AC ""
 *   insn=0x00000000003346C0 string=0x00000000003346C4 "h"
 *   insn=0x00000000003346C4 string=0x00000000003346C8 ")"
 *   insn=0x00000000003346CC string=0x00000000003346D0 ")"
 *   insn=0x00000000003346D0 string=0x00000000003346D4 "("
 *   insn=0x00000000003346DC string=0x00000000001FCDD0 "0'"
 *   insn=0x00000000003346E4 string=0x00000000003346E8 "b"
 *   insn=0x00000000003346FC string=0x0000000000334700 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkillComponent::ByteSize(Caver::Proto::SkillComponent *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w0
  _QWORD *v7; // x21
  __int64 v8; // x8
  int v9; // w10
  int v10; // w0
  Caver::Proto::SkillComponent *v11; // x8
  unsigned int v12; // w1
  unsigned int v13; // w21
  int v14; // w0

  LOBYTE(v3) = *((_BYTE *)this + 32);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_25;
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v5 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v5 >= 0x80 )
    {
      v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
      v3 = *((_DWORD *)this + 8);
      v4 = v6 + 1;
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
  v7 = (_QWORD *)*((_QWORD *)this + 2);
  v8 = *(_QWORD *)(*v7 - 24LL);
  if ( (unsigned int)v8 >= 0x80 )
  {
    v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v8,
            a2);
    v3 = *((_DWORD *)this + 8);
    v9 = v10;
    v8 = *(_QWORD *)(*v7 - 24LL);
  }
  else
  {
    v9 = 1;
  }
  v4 += v9 + v8 + 1;
LABEL_17:
  if ( (v3 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 3) )
      v11 = this;
    else
      v11 = (Caver::Proto::SkillComponent *)Caver::Proto::SkillComponent::default_instance_;
    v13 = Caver::Proto::Vector2::ByteSize(*((Caver::Proto::Vector2 **)v11 + 3));
    if ( v13 >= 0x80 )
      v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v13,
              v12);
    else
      v14 = 1;
    v4 += v13 + v14 + 1;
  }
LABEL_25:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

