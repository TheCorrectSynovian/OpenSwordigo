/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F36D0
 * Mangled: ._ZN5Caver19BackgroundComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000002B66CC  Caver::RotatingBackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x000000000021D77C  Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F36D8 string=0x00000000001F36DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BackgroundComponent::LoadFromProtobufMessage(
        Caver::BackgroundComponent *this,
        const Caver::Proto::Component *a2)
{
  return _ZN5Caver19BackgroundComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE(this, a2);
}

