/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B66E4
 * Mangled: _ZThn16_N5Caver27RotatingBackgroundComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::RotatingBackgroundComponent::ValueForBindedProperty(int)
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

__int64 __fastcall `non-virtual thunk to'Caver::RotatingBackgroundComponent::ValueForBindedProperty(
        Caver::RotatingBackgroundComponent *this,
        int a2)
{
  return Caver::BackgroundComponent::ValueForBindedProperty(
           (Caver::RotatingBackgroundComponent *)((char *)this - 16),
           a2);
}

