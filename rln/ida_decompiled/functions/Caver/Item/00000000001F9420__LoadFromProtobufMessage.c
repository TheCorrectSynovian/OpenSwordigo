/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9420
 * Mangled: ._ZN5Caver4Item23LoadFromProtobufMessageERKNS_5Proto4ItemE
 * Demangled: Caver::Item::LoadFromProtobufMessage(Caver::Proto::Item const&)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003BA870  Caver::Item::LoadFromProtobufMessage(Caver::Proto::Item const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9428 string=0x00000000001F942C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Item::LoadFromProtobufMessage(Caver::Item *this, const Caver::Proto::Item *a2)
{
  return _ZN5Caver4Item23LoadFromProtobufMessageERKNS_5Proto4ItemE(this, a2);
}

