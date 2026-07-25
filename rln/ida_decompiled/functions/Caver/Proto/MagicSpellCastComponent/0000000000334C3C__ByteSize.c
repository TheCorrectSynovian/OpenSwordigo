/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334C3C
 * Mangled: _ZNK5Caver5Proto23MagicSpellCastComponent8ByteSizeEv
 * Demangled: Caver::Proto::MagicSpellCastComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 19
 *   insn=0x0000000000334C48 string=0x0000000000334C4C "hR@9H"
 *   insn=0x0000000000334C4C string=0x0000000000334C50 "H"
 *   insn=0x0000000000334C50 string=0x0000000000334C54 "h"
 *   insn=0x0000000000334C54 string=0x0000000000334C80 "`"
 *   insn=0x0000000000334C58 string=0x0000000000334C5C ""
 *   insn=0x0000000000334C5C string=0x0000000000334C60 "`"
 *   insn=0x0000000000334C5C string=0x0000000000334CBC "t\n"
 *   insn=0x0000000000334C64 string=0x0000000000334C9C "h"
 *   insn=0x0000000000334C68 string=0x0000000000334C6C """
 *   insn=0x0000000000334C6C string=0x0000000000334CB0 "H"
 *   insn=0x0000000000334C84 string=0x0000000000334CA4 "t"
 *   insn=0x0000000000334C88 string=0x0000000000334C8C """
 *   insn=0x0000000000334C8C string=0x0000000000334CD0 "@"
 *   insn=0x0000000000334C90 string=0x0000000000334C94 "h"
 *   insn=0x0000000000334C94 string=0x0000000000334C98 "\t"
 *   insn=0x0000000000334CB0 string=0x0000000000334CB4 ""
 *   insn=0x0000000000334CB0 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000334CD0 string=0x0000000000334CD4 "h"
 *   insn=0x0000000000334CD8 string=0x0000000000334CDC "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicSpellCastComponent::ByteSize(
        Caver::Proto::MagicSpellCastComponent *this,
        unsigned int a2)
{
  char v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w8
  google::protobuf::io::CodedOutputStream *v7; // x0

  v3 = *((_BYTE *)this + 20);
  if ( !v3 )
  {
    v4 = 0;
    goto LABEL_17;
  }
  if ( (*((_BYTE *)this + 20) & 1) != 0 )
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
      v4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2) + 1;
      if ( (*((_DWORD *)this + 5) & 2) == 0 )
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
    if ( (*((_BYTE *)this + 20) & 2) == 0 )
      goto LABEL_17;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2) + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

