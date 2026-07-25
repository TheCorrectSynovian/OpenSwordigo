/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329118
 * Mangled: _ZNK5Caver5Proto31MonsterDeathControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 7
 *   insn=0x0000000000329124 string=0x0000000000329128 "hB@9h"
 *   insn=0x0000000000329128 string=0x000000000032912C "h"
 *   insn=0x000000000032912C string=0x0000000000329138 "`"
 *   insn=0x0000000000329130 string=0x0000000000329134 ""
 *   insn=0x0000000000329134 string=0x0000000000329160 "`\n"
 *   insn=0x000000000032913C string=0x0000000000329150 "`"
 *   insn=0x0000000000329158 string=0x00000000001F61D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterDeathControllerComponent::ByteSize(
        Caver::Proto::MonsterDeathControllerComponent *this,
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

