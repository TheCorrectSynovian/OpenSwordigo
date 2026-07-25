/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDC80
 * Mangled: ._ZN5Caver11EntityClass23LoadFromProtobufMessageERKNS_5Proto11EntityClassE
 * Demangled: Caver::EntityClass::LoadFromProtobufMessage(Caver::Proto::EntityClass const&)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003AF6C4  Caver::EntityClass::LoadFromProtobufMessage(Caver::Proto::EntityClass const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDC88 string=0x00000000001FDC8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityClass::LoadFromProtobufMessage(
        Caver::EntityClass *this,
        const Caver::Proto::EntityClass *a2)
{
  return _ZN5Caver11EntityClass23LoadFromProtobufMessageERKNS_5Proto11EntityClassE(this, a2);
}

