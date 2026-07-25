/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C9F0
 * Mangled: _ZNK5Caver5Proto19PropertiesComponent8ByteSizeEv
 * Demangled: Caver::Proto::PropertiesComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 11
 *   insn=0x000000000031C9FC string=0x000000000031CA00 "hb@9h"
 *   insn=0x000000000031CA00 string=0x000000000031CA04 "h"
 *   insn=0x000000000031CA04 string=0x000000000031CA10 "I"
 *   insn=0x000000000031CA0C string=0x000000000031CA54 "`\n"
 *   insn=0x000000000031CA10 string=0x000000000031CA14 "h\n@"
 *   insn=0x000000000031CA14 string=0x000000000031CA18 ")"
 *   insn=0x000000000031CA1C string=0x000000000031CA20 ")"
 *   insn=0x000000000031CA20 string=0x000000000031CA24 "("
 *   insn=0x000000000031CA2C string=0x00000000001F34D0 "P'"
 *   insn=0x000000000031CA34 string=0x000000000031CA38 "b"
 *   insn=0x000000000031CA48 string=0x00000000001F61D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PropertiesComponent::ByteSize(Caver::Proto::PropertiesComponent *this)
{
  __int64 result; // x0
  Caver::Proto::PropertiesComponent *v3; // x8
  unsigned int v4; // w1
  unsigned int v5; // w20
  int v6; // w0

  if ( (*((_BYTE *)this + 24) & 1) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
      v3 = this;
    else
      v3 = (Caver::Proto::PropertiesComponent *)Caver::Proto::PropertiesComponent::default_instance_;
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

