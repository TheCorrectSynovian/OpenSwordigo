/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC880
 * Mangled: ._ZN5Caver11GuideTarget23LoadFromProtobufMessageERKNS_5Proto11GuideTargetE
 * Demangled: Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003BA46C  Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC888 string=0x00000000001FC88C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GuideTarget::LoadFromProtobufMessage(
        Caver::GuideTarget *this,
        const Caver::Proto::GuideTarget *a2)
{
  return _ZN5Caver11GuideTarget23LoadFromProtobufMessageERKNS_5Proto11GuideTargetE(this, a2);
}

