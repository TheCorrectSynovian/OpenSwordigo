/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311C94
 * Mangled: _ZNK5Caver5Proto28AnimationControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::AnimationControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 20
 *   insn=0x0000000000311CA0 string=0x0000000000311CA4 "hb@9H"
 *   insn=0x0000000000311CA4 string=0x0000000000311CA8 "H"
 *   insn=0x0000000000311CA8 string=0x0000000000311CAC "h"
 *   insn=0x0000000000311CAC string=0x0000000000311CD8 "`"
 *   insn=0x0000000000311CB0 string=0x0000000000311CB4 "("
 *   insn=0x0000000000311CB4 string=0x0000000000311CB8 "`"
 *   insn=0x0000000000311CBC string=0x0000000000311CF4 "i"
 *   insn=0x0000000000311CC0 string=0x0000000000311CC4 """
 *   insn=0x0000000000311CC4 string=0x0000000000311D08 "2"
 *   insn=0x0000000000311CCC string=0x0000000000311D14 "4"
 *   insn=0x0000000000311CD4 string=0x0000000000311D24 "`\n"
 *   insn=0x0000000000311CDC string=0x0000000000311CFC "t"
 *   insn=0x0000000000311CE4 string=0x0000000000311D34 "'"
 *   insn=0x0000000000311CE8 string=0x0000000000311CEC "h"
 *   insn=0x0000000000311CEC string=0x0000000000311CF0 "\n"
 *   insn=0x0000000000311CF4 string=0x0000000000311CF8 ""
 *   insn=0x0000000000311D08 string=0x0000000000311D0C "h"
 *   insn=0x0000000000311D08 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000311D0C string=0x0000000000311D10 "\t"
 *   insn=0x0000000000311D34 string=0x0000000000311D38 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AnimationControllerComponent::ByteSize(
        Caver::Proto::AnimationControllerComponent *this,
        unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  int v10; // w0

  LOBYTE(v3) = *((_BYTE *)this + 24);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_20;
  }
  if ( (*((_BYTE *)this + 24) & 1) != 0 )
  {
    v8 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v8 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) != 0 )
        goto LABEL_4;
    }
    else if ( (unsigned int)v8 >= 0x80 )
    {
      v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 6);
      v4 = v10 + 1;
      if ( (v3 & 2) != 0 )
        goto LABEL_4;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) != 0 )
        goto LABEL_4;
    }
  }
  else
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 24) & 2) != 0 )
    {
LABEL_4:
      v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
      if ( ((unsigned int)v5 & 0x80000000) != 0 )
      {
        v6 = 11;
      }
      else if ( (unsigned int)v5 >= 0x80 )
      {
        v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
        v3 = *((_DWORD *)this + 6);
        v6 = v9 + 1;
      }
      else
      {
        v6 = 2;
      }
      v4 += v6;
    }
  }
  if ( (v3 & 4) != 0 )
    result = v4 + 2;
  else
    result = v4;
LABEL_20:
  *((_DWORD *)this + 2) = result;
  return result;
}

