/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329594
 * Mangled: _ZNK5Caver5Proto33GenericMonsterControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 7
 *   insn=0x00000000003295A0 string=0x00000000003295A4 "hB@9h"
 *   insn=0x00000000003295A4 string=0x00000000003295A8 "h"
 *   insn=0x00000000003295A8 string=0x00000000003295B4 "`"
 *   insn=0x00000000003295AC string=0x00000000003295B0 ""
 *   insn=0x00000000003295B0 string=0x00000000003295DC "`\n"
 *   insn=0x00000000003295B8 string=0x00000000003295CC "`"
 *   insn=0x00000000003295D4 string=0x00000000001F61D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GenericMonsterControllerComponent::ByteSize(
        Caver::Proto::GenericMonsterControllerComponent *this,
        unsigned int a2)
{
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v4; // x0

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    v4 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v4 & 0x80000000) != 0 )
    {
      result = 11;
    }
    else if ( (unsigned int)v4 >= 0x80 )
    {
      result = (unsigned int)google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v4, a2) + 1;
    }
    else
    {
      result = 2;
    }
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

