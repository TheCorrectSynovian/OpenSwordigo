/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B66E0
 * Mangled: _ZN5Caver27RotatingBackgroundComponent22ValueForBindedPropertyEi
 * Demangled: Caver::RotatingBackgroundComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200EE0  Caver::BackgroundComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RotatingBackgroundComponent::ValueForBindedProperty(
        Caver::RotatingBackgroundComponent *this,
        int a2)
{
  return Caver::BackgroundComponent::ValueForBindedProperty(this, a2);
}

