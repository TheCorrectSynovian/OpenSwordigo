/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003243B8
 * Mangled: _ZNK5Caver5Proto33WalkingMonsterControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 8
 *   insn=0x00000000003243C4 string=0x00000000003243C8 "hB@9h"
 *   insn=0x00000000003243C8 string=0x00000000003243CC "h"
 *   insn=0x00000000003243CC string=0x00000000003243D8 "`"
 *   insn=0x00000000003243D0 string=0x00000000003243D4 ""
 *   insn=0x00000000003243D4 string=0x0000000000324400 "`\n"
 *   insn=0x00000000003243DC string=0x00000000003243F0 "`"
 *   insn=0x00000000003243E4 string=0x00000000003243F8 "vG"
 *   insn=0x00000000003243F8 string=0x00000000001F61D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WalkingMonsterControllerComponent::ByteSize(
        Caver::Proto::WalkingMonsterControllerComponent *this,
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

