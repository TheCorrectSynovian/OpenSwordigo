/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283254
 * Mangled: _ZN5Caver22HookshotTrailComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::HookshotTrailComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F64B0  Caver::GlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000283254 string=0x00000000001F64B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HookshotTrailComponent::LoadFromProtobufMessage(
        Caver::HookshotTrailComponent *this,
        const Caver::Proto::Component *a2)
{
  return Caver::GlowComponent::LoadFromProtobufMessage(this, a2);
}

