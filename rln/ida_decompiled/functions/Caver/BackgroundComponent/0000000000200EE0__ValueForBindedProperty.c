/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200EE0
 * Mangled: ._ZN5Caver19BackgroundComponent22ValueForBindedPropertyEi
 * Demangled: Caver::BackgroundComponent::ValueForBindedProperty(int)
 *
 * Callers: 3
 *   0x000000000021DD08  `non-virtual thunk to'Caver::BackgroundComponent::ValueForBindedProperty(int)
 *   0x00000000002B66E0  Caver::RotatingBackgroundComponent::ValueForBindedProperty(int)
 *   0x00000000002B66E4  `non-virtual thunk to'Caver::RotatingBackgroundComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x000000000021DB94  Caver::BackgroundComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200EE8 string=0x0000000000200EEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BackgroundComponent::ValueForBindedProperty(Caver::BackgroundComponent *this, int a2)
{
  return _ZN5Caver19BackgroundComponent22ValueForBindedPropertyEi(this, a2);
}

