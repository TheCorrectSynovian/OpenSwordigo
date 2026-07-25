/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003330D8
 * Mangled: _ZNK5Caver5Proto18MagicBoltComponent8ByteSizeEv
 * Demangled: Caver::Proto::MagicBoltComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *
 * Referenced strings: 43
 *   insn=0x00000000003330E8 string=0x00000000003330EC "h"
 *   insn=0x00000000003330EC string=0x00000000003330F0 "H"
 *   insn=0x00000000003330F0 string=0x00000000003330F4 "h"
 *   insn=0x00000000003330F4 string=0x0000000000333120 "`"
 *   insn=0x00000000003330F8 string=0x00000000003330FC "("
 *   insn=0x00000000003330FC string=0x0000000000333100 "`"
 *   insn=0x00000000003330FC string=0x0000000000333160 "h"
 *   insn=0x0000000000333104 string=0x000000000033313C "i"
 *   insn=0x0000000000333108 string=0x000000000033310C """
 *   insn=0x000000000033310C string=0x0000000000333150 " "
 *   insn=0x0000000000333114 string=0x000000000033315C "5"
 *   insn=0x0000000000333118 string=0x000000000033311C "@"
 *   insn=0x000000000033311C string=0x000000000033321C "`\n"
 *   insn=0x0000000000333124 string=0x0000000000333144 "u"
 *   insn=0x000000000033312C string=0x000000000033319C ""
 *   insn=0x0000000000333130 string=0x0000000000333134 "h"
 *   insn=0x0000000000333134 string=0x0000000000333138 "\n"
 *   insn=0x000000000033313C string=0x0000000000333140 ""
 *   insn=0x0000000000333150 string=0x0000000000333154 "h&@"
 *   insn=0x0000000000333150 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000333154 string=0x0000000000333158 "\t"
 *   insn=0x0000000000333160 string=0x0000000000333164 ""
 *   insn=0x0000000000333160 string=0x000000000033316C "`"
 *   insn=0x0000000000333164 string=0x0000000000333168 "*"
 *   insn=0x0000000000333170 string=0x000000000033318C "i"
 *   insn=0x0000000000333178 string=0x00000000003331B0 ""
 *   insn=0x000000000033317C string=0x0000000000333180 "5"
 *   insn=0x0000000000333180 string=0x0000000000333184 ""
 *   insn=0x0000000000333184 string=0x0000000000333188 """
 *   insn=0x000000000033318C string=0x0000000000333190 "5"
 *   insn=0x000000000033319C string=0x00000000003331A0 "h&@"
 *   insn=0x00000000003331B0 string=0x00000000003331B4 "h&@"
 *   insn=0x00000000003331B4 string=0x00000000003331B8 "\t"
 *   insn=0x00000000003331B8 string=0x00000000003331BC "5"
 *   insn=0x00000000003331C4 string=0x00000000003331C8 "h"
 *   insn=0x00000000003331C8 string=0x00000000003331CC ")"
 *   insn=0x00000000003331D0 string=0x00000000003331D4 ")"
 *   insn=0x00000000003331D4 string=0x00000000003331D8 "("
 *   insn=0x00000000003331E0 string=0x00000000001F9DC0 "0'"
 *   insn=0x00000000003331E8 string=0x00000000003331EC "b"
 *   insn=0x00000000003331F4 string=0x0000000000333200 "h&@"
 *   insn=0x0000000000333204 string=0x0000000000333208 ")"
 *   insn=0x0000000000333208 string=0x000000000033320C "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBoltComponent::ByteSize(Caver::Proto::MagicBoltComponent *this, unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w21
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w0
  int v12; // w0
  Caver::Proto::MagicBoltComponent *v13; // x8
  unsigned int v14; // w1
  unsigned int v15; // w20
  int v16; // w0

  LOBYTE(v3) = *((_BYTE *)this + 36);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_39;
  }
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
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
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 9);
      v4 = v11 + 1;
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
    if ( (*((_BYTE *)this + 36) & 2) == 0 )
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
    v3 = *((_DWORD *)this + 9);
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
      goto LABEL_36;
LABEL_29:
    if ( *((_QWORD *)this + 3) )
      v13 = this;
    else
      v13 = (Caver::Proto::MagicBoltComponent *)Caver::Proto::MagicBoltComponent::default_instance_;
    v15 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v13 + 3));
    if ( v15 >= 0x80 )
      v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v15,
              v14);
    else
      v16 = 1;
    v3 = *((_DWORD *)this + 9);
    v4 += v15 + v16 + 1;
    goto LABEL_36;
  }
  v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
  if ( ((unsigned int)v10 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 8) != 0 )
      goto LABEL_29;
  }
  else
  {
    if ( (unsigned int)v10 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2);
      v3 = *((_DWORD *)this + 9);
      v4 += v12 + 1;
      if ( (v3 & 8) == 0 )
        goto LABEL_36;
      goto LABEL_29;
    }
    v4 += 2;
    if ( (v3 & 8) != 0 )
      goto LABEL_29;
  }
LABEL_36:
  if ( (v3 & 0x10) != 0 )
    result = v4 + 5;
  else
    result = v4;
LABEL_39:
  *((_DWORD *)this + 2) = result;
  return result;
}

