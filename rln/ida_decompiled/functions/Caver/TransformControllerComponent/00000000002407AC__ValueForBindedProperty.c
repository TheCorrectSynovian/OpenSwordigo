/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002407AC
 * Mangled: _ZN5Caver28TransformControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::TransformControllerComponent::ValueForBindedProperty(int)
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
__int64 __fastcall Caver::TransformControllerComponent::ValueForBindedProperty(
        Caver::TransformControllerComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty(this, a2);
}

