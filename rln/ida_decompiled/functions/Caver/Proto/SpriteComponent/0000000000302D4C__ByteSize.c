/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302D4C
 * Mangled: _ZNK5Caver5Proto15SpriteComponent8ByteSizeEv
 * Demangled: Caver::Proto::SpriteComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 9
 *   insn=0x0000000000302D58 string=0x0000000000302D5C "hb@9h"
 *   insn=0x0000000000302D5C string=0x0000000000302D60 "h"
 *   insn=0x0000000000302D60 string=0x0000000000302D6C "t\n@"
 *   insn=0x0000000000302D68 string=0x0000000000302DA4 "`\n"
 *   insn=0x0000000000302D70 string=0x0000000000302D74 ""
 *   insn=0x0000000000302D78 string=0x0000000000302D7C "b"
 *   insn=0x0000000000302D84 string=0x0000000000302D9C "("
 *   insn=0x0000000000302D8C string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000302D94 string=0x0000000000302D98 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpriteComponent::ByteSize(Caver::Proto::SpriteComponent *this, unsigned int a2)
{
  __int64 result; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  int v6; // w9

  if ( (*((_BYTE *)this + 24) & 1) != 0 )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 2);
    v5 = *(_QWORD *)(*v4 - 24LL);
    if ( (unsigned int)v5 >= 0x80 )
    {
      v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v5,
             a2);
      v5 = *(_QWORD *)(*v4 - 24LL);
    }
    else
    {
      v6 = 1;
    }
    result = (unsigned int)(v6 + v5 + 1);
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

