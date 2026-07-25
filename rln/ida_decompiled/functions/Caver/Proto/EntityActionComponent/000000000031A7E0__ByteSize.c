/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A7E0
 * Mangled: _ZNK5Caver5Proto21EntityActionComponent8ByteSizeEv
 * Demangled: Caver::Proto::EntityActionComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 13
 *   insn=0x000000000031A7EC string=0x000000000031A7F0 "hb@9h"
 *   insn=0x000000000031A7F0 string=0x000000000031A7F4 "h"
 *   insn=0x000000000031A7F4 string=0x000000000031A800 "I"
 *   insn=0x000000000031A7FC string=0x000000000031A844 "`\n"
 *   insn=0x000000000031A800 string=0x000000000031A804 "h\n@"
 *   insn=0x000000000031A804 string=0x000000000031A808 ")"
 *   insn=0x000000000031A80C string=0x000000000031A810 ")"
 *   insn=0x000000000031A810 string=0x000000000031A814 "("
 *   insn=0x000000000031A818 string=0x000000000031A81C "-c"
 *   insn=0x000000000031A81C string=0x00000000001F34D0 "P'"
 *   insn=0x000000000031A824 string=0x000000000031A828 "b"
 *   insn=0x000000000031A834 string=0x000000000031A838 "fn"
 *   insn=0x000000000031A838 string=0x00000000001F61D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityActionComponent::ByteSize(Caver::Proto::EntityActionComponent *this)
{
  __int64 result; // x0
  Caver::Proto::EntityActionComponent *v3; // x8
  unsigned int v4; // w1
  unsigned int v5; // w20
  int v6; // w0

  if ( (*((_BYTE *)this + 24) & 1) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
      v3 = this;
    else
      v3 = (Caver::Proto::EntityActionComponent *)Caver::Proto::EntityActionComponent::default_instance_;
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

