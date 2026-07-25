/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033731C
 * Mangled: _ZNK5Caver5Proto14SpellComponent8ByteSizeEv
 * Demangled: Caver::Proto::SpellComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 12
 *   insn=0x0000000000337328 string=0x000000000033732C "hb@9h"
 *   insn=0x000000000033732C string=0x0000000000337330 "h"
 *   insn=0x0000000000337330 string=0x000000000033733C "i"
 *   insn=0x0000000000337338 string=0x0000000000337380 "`\n"
 *   insn=0x000000000033733C string=0x0000000000337340 "h\n@"
 *   insn=0x0000000000337340 string=0x0000000000337344 ")]C"
 *   insn=0x0000000000337348 string=0x000000000033734C ")"
 *   insn=0x000000000033734C string=0x0000000000337350 "("
 *   insn=0x0000000000337354 string=0x0000000000337358 "^"
 *   insn=0x0000000000337358 string=0x00000000001F34D0 "P'"
 *   insn=0x0000000000337360 string=0x0000000000337364 "b"
 *   insn=0x0000000000337374 string=0x00000000001F61D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpellComponent::ByteSize(Caver::Proto::SpellComponent *this)
{
  __int64 result; // x0
  Caver::Proto::SpellComponent *v3; // x8
  unsigned int v4; // w1
  unsigned int v5; // w20
  int v6; // w0

  if ( (*((_BYTE *)this + 24) & 1) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
      v3 = this;
    else
      v3 = (Caver::Proto::SpellComponent *)Caver::Proto::SpellComponent::default_instance_;
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

