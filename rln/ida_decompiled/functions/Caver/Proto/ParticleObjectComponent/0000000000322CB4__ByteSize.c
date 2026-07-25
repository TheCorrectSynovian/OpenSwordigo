/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322CB4
 * Mangled: _ZNK5Caver5Proto23ParticleObjectComponent8ByteSizeEv
 * Demangled: Caver::Proto::ParticleObjectComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 8
 *   insn=0x0000000000322CC0 string=0x0000000000322CC4 "hB@9h"
 *   insn=0x0000000000322CC4 string=0x0000000000322CC8 "h"
 *   insn=0x0000000000322CC8 string=0x0000000000322CD4 "`"
 *   insn=0x0000000000322CCC string=0x0000000000322CD0 ""
 *   insn=0x0000000000322CD0 string=0x0000000000322CFC "`\n"
 *   insn=0x0000000000322CD8 string=0x0000000000322CEC "`"
 *   insn=0x0000000000322CE0 string=0x0000000000322CF4 "7M"
 *   insn=0x0000000000322CF4 string=0x00000000001F61D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleObjectComponent::ByteSize(
        Caver::Proto::ParticleObjectComponent *this,
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

