/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032CB30
 * Mangled: _ZNK5Caver5Proto20WeaponTrailComponent8ByteSizeEv
 * Demangled: Caver::Proto::WeaponTrailComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *
 * Referenced strings: 10
 *   insn=0x000000000032CB3C string=0x000000000032CB40 "hb@9h"
 *   insn=0x000000000032CB40 string=0x000000000032CB44 "h"
 *   insn=0x000000000032CB4C string=0x000000000032CB94 "`\n"
 *   insn=0x000000000032CB50 string=0x000000000032CB54 "h\n@"
 *   insn=0x000000000032CB54 string=0x000000000032CB58 ")"
 *   insn=0x000000000032CB5C string=0x000000000032CB60 ")"
 *   insn=0x000000000032CB60 string=0x000000000032CB64 "("
 *   insn=0x000000000032CB6C string=0x00000000001F9DC0 "0'"
 *   insn=0x000000000032CB74 string=0x000000000032CB78 "b"
 *   insn=0x000000000032CB88 string=0x00000000001F61D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponTrailComponent::ByteSize(Caver::Proto::WeaponTrailComponent *this)
{
  __int64 result; // x0
  Caver::Proto::WeaponTrailComponent *v3; // x8
  unsigned int v4; // w1
  unsigned int v5; // w20
  int v6; // w0

  if ( (*((_BYTE *)this + 24) & 1) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
      v3 = this;
    else
      v3 = (Caver::Proto::WeaponTrailComponent *)Caver::Proto::WeaponTrailComponent::default_instance_;
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

