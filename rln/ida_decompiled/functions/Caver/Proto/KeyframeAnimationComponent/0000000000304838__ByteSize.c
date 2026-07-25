/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000304838
 * Mangled: _ZNK5Caver5Proto26KeyframeAnimationComponent8ByteSizeEv
 * Demangled: Caver::Proto::KeyframeAnimationComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 26
 *   insn=0x0000000000304848 string=0x000000000030484C "i"
 *   insn=0x0000000000304854 string=0x000000000030486C "`"
 *   insn=0x0000000000304858 string=0x000000000030485C "I"
 *   insn=0x000000000030485C string=0x0000000000304860 "!"
 *   insn=0x000000000030485C string=0x00000000003048A4 "u\n@"
 *   insn=0x0000000000304864 string=0x0000000000304868 "("
 *   insn=0x0000000000304868 string=0x0000000000304908 "`\n"
 *   insn=0x0000000000304870 string=0x0000000000304888 "t"
 *   insn=0x0000000000304878 string=0x0000000000304894 "O"
 *   insn=0x000000000030487C string=0x0000000000304880 ")"
 *   insn=0x0000000000304894 string=0x0000000000304898 "i"@"
 *   insn=0x0000000000304894 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000030489C string=0x00000000003048A0 ")"
 *   insn=0x00000000003048A8 string=0x00000000003048AC ""
 *   insn=0x00000000003048B0 string=0x00000000003048B4 "b"
 *   insn=0x00000000003048B8 string=0x00000000003048BC ""
 *   insn=0x00000000003048BC string=0x00000000003048D8 "H"
 *   insn=0x00000000003048C0 string=0x00000000003048C4 "C"
 *   insn=0x00000000003048C8 string=0x00000000003048CC "i"@"
 *   insn=0x00000000003048D0 string=0x00000000003048D4 ""
 *   insn=0x00000000003048E4 string=0x00000000003048E8 "?"
 *   insn=0x00000000003048EC string=0x00000000003048F0 "?"
 *   insn=0x00000000003048F0 string=0x00000000003048F4 "\n\t"
 *   insn=0x00000000003048F4 string=0x00000000003048F8 ""
 *   insn=0x00000000003048F8 string=0x00000000003048FC "\n"
 *   insn=0x00000000003048FC string=0x0000000000304900 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::KeyframeAnimationComponent::ByteSize(
        Caver::Proto::KeyframeAnimationComponent *this,
        unsigned int a2)
{
  int v3; // w9
  int v4; // w20
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v6; // x0
  int v7; // w0
  _QWORD *v8; // x21
  __int64 v9; // x8
  int v10; // w10
  int v11; // w0
  unsigned int v12; // w8

  LOBYTE(v3) = *((_BYTE *)this + 32);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_24;
  }
  if ( (*((_BYTE *)this + 32) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 32) & 2) == 0 )
      goto LABEL_17;
LABEL_13:
    v8 = (_QWORD *)*((_QWORD *)this + 2);
    v9 = *(_QWORD *)(*v8 - 24LL);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v9,
              a2);
      v3 = *((_DWORD *)this + 8);
      v10 = v11;
      v9 = *(_QWORD *)(*v8 - 24LL);
    }
    else
    {
      v10 = 1;
    }
    v4 += v10 + v9 + 1;
    goto LABEL_17;
  }
  v6 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
  if ( ((unsigned int)v6 & 0x80000000) != 0 )
  {
    v4 = 11;
    if ( (v3 & 2) == 0 )
      goto LABEL_17;
    goto LABEL_13;
  }
  if ( (unsigned int)v6 < 0x80 )
  {
    v4 = 2;
    if ( (v3 & 2) == 0 )
      goto LABEL_17;
    goto LABEL_13;
  }
  v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, a2);
  v3 = *((_DWORD *)this + 8);
  v4 = v7 + 1;
  if ( (v3 & 2) != 0 )
    goto LABEL_13;
LABEL_17:
  v12 = v4 + 2;
  if ( (v3 & 4) == 0 )
    v12 = v4;
  if ( (v3 & 8) != 0 )
    v12 += 2;
  if ( (v3 & 0x10) != 0 )
    result = v12 + 5;
  else
    result = v12;
LABEL_24:
  *((_DWORD *)this + 2) = result;
  return result;
}

