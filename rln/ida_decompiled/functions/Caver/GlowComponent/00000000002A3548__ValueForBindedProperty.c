/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3548
 * Mangled: _ZN5Caver13GlowComponent22ValueForBindedPropertyEi
 * Demangled: Caver::GlowComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001FD7D0  Caver::GlowComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GlowComponent::ValueForBindedProperty(Caver::GlowComponent *this, int a2)
{
  return Caver::Component::ValueForBindedProperty(this, a2);
}

