/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000332638
 * Mangled: _ZNK5Caver5Proto21PortalEffectComponent8ByteSizeEv
 * Demangled: Caver::Proto::PortalEffectComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 38
 *   insn=0x0000000000332648 string=0x000000000033264C "h"
 *   insn=0x000000000033264C string=0x0000000000332650 "H"
 *   insn=0x0000000000332650 string=0x0000000000332654 "h"
 *   insn=0x0000000000332654 string=0x0000000000332680 "`"
 *   insn=0x0000000000332658 string=0x000000000033265C "("
 *   insn=0x000000000033265C string=0x0000000000332660 "`"
 *   insn=0x000000000033265C string=0x00000000003326C0 "h"
 *   insn=0x0000000000332664 string=0x000000000033269C "i"
 *   insn=0x0000000000332668 string=0x000000000033266C """
 *   insn=0x0000000000332674 string=0x00000000003326BC "4"
 *   insn=0x0000000000332678 string=0x000000000033267C ":"
 *   insn=0x000000000033267C string=0x0000000000332764 "t\n"
 *   insn=0x0000000000332684 string=0x00000000003326A4 "t"
 *   insn=0x0000000000332690 string=0x0000000000332694 "h"
 *   insn=0x0000000000332694 string=0x0000000000332698 "\n"
 *   insn=0x000000000033269C string=0x00000000003326A0 ""
 *   insn=0x00000000003326B0 string=0x00000000003326B4 "h*@"
 *   insn=0x00000000003326B0 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000003326B4 string=0x00000000003326B8 "\t"
 *   insn=0x00000000003326C4 string=0x00000000003326C8 "'"
 *   insn=0x00000000003326CC string=0x00000000003326D0 "h"
 *   insn=0x00000000003326D0 string=0x00000000003326D4 ")"
 *   insn=0x00000000003326D8 string=0x00000000003326DC ")"
 *   insn=0x00000000003326DC string=0x00000000003326E0 "("
 *   insn=0x00000000003326E8 string=0x00000000001F9DC0 "0'"
 *   insn=0x00000000003326F0 string=0x00000000003326F4 "b"
 *   insn=0x00000000003326FC string=0x0000000000332708 "h*@"
 *   insn=0x000000000033270C string=0x0000000000332710 ")"
 *   insn=0x0000000000332710 string=0x0000000000332714 "4"
 *   insn=0x0000000000332714 string=0x0000000000332718 "h"
 *   insn=0x000000000033271C string=0x0000000000332720 "h"
 *   insn=0x0000000000332720 string=0x0000000000332724 ")"
 *   insn=0x0000000000332728 string=0x000000000033272C ")"
 *   insn=0x000000000033272C string=0x0000000000332730 "("
 *   insn=0x0000000000332734 string=0x0000000000332738 "~0"
 *   insn=0x0000000000332740 string=0x0000000000332744 "b"
 *   insn=0x0000000000332758 string=0x000000000033275C ""
 *   insn=0x000000000033277C string=0x0000000000332780 "h*@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalEffectComponent::ByteSize(
        Caver::Proto::PortalEffectComponent *this,
        unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  google::protobuf::io::CodedOutputStream *v7; // x0
  int v8; // w0
  Caver::Proto::PortalEffectComponent *v9; // x8
  unsigned int v10; // w1
  unsigned int v11; // w21
  int v12; // w0
  Caver::Proto::PortalEffectComponent *v13; // x8
  unsigned int v14; // w1
  unsigned int v15; // w21
  int v16; // w0
  int v18; // w0

  LOBYTE(v3) = *((_BYTE *)this + 40);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_34;
  }
  if ( (*((_BYTE *)this + 40) & 1) != 0 )
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
      v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2);
      v3 = *((_DWORD *)this + 10);
      v4 = v18 + 1;
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
    if ( (*((_BYTE *)this + 40) & 2) == 0 )
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
    v3 = *((_DWORD *)this + 10);
    v6 = v8 + 1;
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
      goto LABEL_34;
    goto LABEL_27;
  }
  if ( *((_QWORD *)this + 3) )
    v9 = this;
  else
    v9 = (Caver::Proto::PortalEffectComponent *)Caver::Proto::PortalEffectComponent::default_instance_;
  v11 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v9 + 3));
  if ( v11 >= 0x80 )
    v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v11,
            v10);
  else
    v12 = 1;
  v4 += v11 + v12 + 1;
  if ( (*((_DWORD *)this + 10) & 8) != 0 )
  {
LABEL_27:
    if ( *((_QWORD *)this + 4) )
      v13 = this;
    else
      v13 = (Caver::Proto::PortalEffectComponent *)Caver::Proto::PortalEffectComponent::default_instance_;
    v15 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v13 + 4));
    if ( v15 >= 0x80 )
      v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v15,
              v14);
    else
      v16 = 1;
    v4 += v15 + v16 + 1;
  }
LABEL_34:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

