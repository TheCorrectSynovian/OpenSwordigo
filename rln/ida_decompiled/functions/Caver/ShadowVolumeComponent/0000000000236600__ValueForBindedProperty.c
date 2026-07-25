/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236600
 * Mangled: _ZN5Caver21ShadowVolumeComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ShadowVolumeComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShadowVolumeComponent::ValueForBindedProperty(Caver::ShadowVolumeComponent *this, int a2)
{
  return Caver::Component::ValueForBindedProperty(this, a2);
}

