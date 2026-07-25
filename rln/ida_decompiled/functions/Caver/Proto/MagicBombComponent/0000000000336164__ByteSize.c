/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336164
 * Mangled: _ZNK5Caver5Proto18MagicBombComponent8ByteSizeEv
 * Demangled: Caver::Proto::MagicBombComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *
 * Referenced strings: 11
 *   insn=0x0000000000336170 string=0x0000000000336174 "hb@9h"
 *   insn=0x0000000000336174 string=0x0000000000336178 "h"
 *   insn=0x0000000000336180 string=0x00000000003361C8 "`\n"
 *   insn=0x0000000000336184 string=0x0000000000336188 "h\n@"
 *   insn=0x0000000000336188 string=0x000000000033618C ")"
 *   insn=0x0000000000336190 string=0x0000000000336194 ")"
 *   insn=0x0000000000336194 string=0x0000000000336198 "("
 *   insn=0x000000000033619C string=0x00000000003361A0 ""
 *   insn=0x00000000003361A0 string=0x00000000001F9DC0 "0'"
 *   insn=0x00000000003361A8 string=0x00000000003361AC "b"
 *   insn=0x00000000003361BC string=0x00000000001F61D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBombComponent::ByteSize(Caver::Proto::MagicBombComponent *this)
{
  __int64 result; // x0
  Caver::Proto::MagicBombComponent *v3; // x8
  unsigned int v4; // w1
  unsigned int v5; // w20
  int v6; // w0

  if ( (*((_BYTE *)this + 24) & 1) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
      v3 = this;
    else
      v3 = (Caver::Proto::MagicBombComponent *)Caver::Proto::MagicBombComponent::default_instance_;
    v5 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v3 + 2));
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

