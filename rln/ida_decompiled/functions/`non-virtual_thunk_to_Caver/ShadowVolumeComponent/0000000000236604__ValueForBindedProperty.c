/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236604
 * Mangled: _ZThn16_N5Caver21ShadowVolumeComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ShadowVolumeComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000236604 string=0x0000000000236608 "2""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ShadowVolumeComponent::ValueForBindedProperty(
        Caver::ShadowVolumeComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::ShadowVolumeComponent *)((char *)this - 16), a2);
}

