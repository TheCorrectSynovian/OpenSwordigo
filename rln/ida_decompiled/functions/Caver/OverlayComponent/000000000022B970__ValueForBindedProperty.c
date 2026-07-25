/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B970
 * Mangled: _ZN5Caver16OverlayComponent22ValueForBindedPropertyEi
 * Demangled: Caver::OverlayComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F6780  Caver::OverlayComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayComponent::ValueForBindedProperty(Caver::OverlayComponent *this, int a2)
{
  return Caver::Component::ValueForBindedProperty(this, a2);
}

