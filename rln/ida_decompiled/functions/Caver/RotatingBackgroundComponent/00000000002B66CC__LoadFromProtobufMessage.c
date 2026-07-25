/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B66CC
 * Mangled: _ZN5Caver27RotatingBackgroundComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::RotatingBackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F36D0  Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002B66CC string=0x00000000001F36D0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RotatingBackgroundComponent::LoadFromProtobufMessage(
        Caver::RotatingBackgroundComponent *this,
        const Caver::Proto::Component *a2)
{
  return Caver::BackgroundComponent::LoadFromProtobufMessage(this, a2);
}

