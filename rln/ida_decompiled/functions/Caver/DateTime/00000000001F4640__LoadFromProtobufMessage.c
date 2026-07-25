/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4640
 * Mangled: ._ZN5Caver8DateTime23LoadFromProtobufMessageERKNS_5Proto8DateTimeE
 * Demangled: Caver::DateTime::LoadFromProtobufMessage(Caver::Proto::DateTime const&)
 *
 * Callers: 1
 *   0x00000000003C173C  Caver::PlayerProfile::LoadFromProtobufMessage(Caver::Proto::PlayerProfile const&,bool)
 *
 * Callees: 1
 *   0x00000000004CF8E8  Caver::DateTime::LoadFromProtobufMessage(Caver::Proto::DateTime const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4644 string=0x00000000004CF8E8 "(@"
 *   insn=0x00000000001F4648 string=0x00000000001F464C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DateTime::LoadFromProtobufMessage(Caver::DateTime *this, const Caver::Proto::DateTime *a2)
{
  return _ZN5Caver8DateTime23LoadFromProtobufMessageERKNS_5Proto8DateTimeE(this, a2);
}

