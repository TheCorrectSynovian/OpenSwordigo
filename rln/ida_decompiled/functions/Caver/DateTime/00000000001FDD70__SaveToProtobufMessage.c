/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDD70
 * Mangled: ._ZN5Caver8DateTime21SaveToProtobufMessageEPNS_5Proto8DateTimeE
 * Demangled: Caver::DateTime::SaveToProtobufMessage(Caver::Proto::DateTime *)
 *
 * Callers: 1
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Callees: 1
 *   0x00000000004CF8F4  Caver::DateTime::SaveToProtobufMessage(Caver::Proto::DateTime *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDD74 string=0x00000000004CF8F4 "("
 *   insn=0x00000000001FDD78 string=0x00000000001FDD7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DateTime::SaveToProtobufMessage(Caver::DateTime *this, Caver::Proto::DateTime *a2)
{
  return _ZN5Caver8DateTime21SaveToProtobufMessageEPNS_5Proto8DateTimeE(this, a2);
}

