/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314A38
 * Mangled: _ZNK5Caver5Proto15EntityComponent8ByteSizeEv
 * Demangled: Caver::Proto::EntityComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 9
 *   insn=0x0000000000314A44 string=0x0000000000314A48 "hR@9"
 *   insn=0x0000000000314A50 string=0x0000000000314A64 "`"
 *   insn=0x0000000000314A58 string=0x0000000000314A90 "*\t"
 *   insn=0x0000000000314A60 string=0x0000000000314A9C "`\n"
 *   insn=0x0000000000314A68 string=0x0000000000314A7C "i"
 *   insn=0x0000000000314A84 string=0x0000000000314A88 "h"
 *   insn=0x0000000000314A84 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000314A88 string=0x0000000000314A8C "\t"
 *   insn=0x0000000000314A94 string=0x0000000000314A98 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityComponent::ByteSize(Caver::Proto::EntityComponent *this, unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w9
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v6; // x0
  int v7; // w0

  LOBYTE(v3) = *((_BYTE *)this + 20);
  if ( (_BYTE)v3 )
  {
    if ( (*((_BYTE *)this + 20) & 1) != 0 )
    {
      v6 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
      if ( ((unsigned int)v6 & 0x80000000) != 0 )
      {
        v4 = 11;
      }
      else if ( (unsigned int)v6 >= 0x80 )
      {
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, a2);
        v3 = *((_DWORD *)this + 5);
        v4 = v7 + 1;
      }
      else
      {
        v4 = 2;
      }
    }
    else
    {
      v4 = 0;
    }
    if ( (v3 & 2) != 0 )
      result = v4 + 2;
    else
      result = v4;
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

