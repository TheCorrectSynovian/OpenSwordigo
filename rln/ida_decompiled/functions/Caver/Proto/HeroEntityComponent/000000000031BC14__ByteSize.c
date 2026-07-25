/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031BC14
 * Mangled: _ZNK5Caver5Proto19HeroEntityComponent8ByteSizeEv
 * Demangled: Caver::Proto::HeroEntityComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 13
 *   insn=0x000000000031BC20 string=0x000000000031BC24 "hb@9h"
 *   insn=0x000000000031BC24 string=0x000000000031BC28 "h"
 *   insn=0x000000000031BC28 string=0x000000000031BC34 "I"
 *   insn=0x000000000031BC30 string=0x000000000031BC78 "`\n"
 *   insn=0x000000000031BC34 string=0x000000000031BC38 "h\n@"
 *   insn=0x000000000031BC38 string=0x000000000031BC3C ")"
 *   insn=0x000000000031BC40 string=0x000000000031BC44 ")"
 *   insn=0x000000000031BC44 string=0x000000000031BC48 "("
 *   insn=0x000000000031BC4C string=0x000000000031BC50 " ^"
 *   insn=0x000000000031BC50 string=0x00000000001F34D0 "P'"
 *   insn=0x000000000031BC58 string=0x000000000031BC5C "b"
 *   insn=0x000000000031BC68 string=0x000000000031BC6C "Yi"
 *   insn=0x000000000031BC6C string=0x00000000001F61D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HeroEntityComponent::ByteSize(Caver::Proto::HeroEntityComponent *this)
{
  __int64 result; // x0
  Caver::Proto::HeroEntityComponent *v3; // x8
  unsigned int v4; // w1
  unsigned int v5; // w20
  int v6; // w0

  if ( (*((_BYTE *)this + 24) & 1) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
      v3 = this;
    else
      v3 = (Caver::Proto::HeroEntityComponent *)Caver::Proto::HeroEntityComponent::default_instance_;
    v5 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v3 + 2));
    if ( v5 >= 0x80 )
      v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)v5,
             v4);
    else
      v6 = 1;
    result = v5 + v6 + 1;
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

