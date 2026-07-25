/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5210
 * Mangled: ._ZN5Caver23CharControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::CharControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x000000000025B4E0  `non-virtual thunk to'Caver::CharControllerComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x000000000025B494  Caver::CharControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5214 string=0x000000000025B494 ")D"
 *   insn=0x00000000001F5218 string=0x00000000001F521C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::ValueForBindedProperty(Caver::CharControllerComponent *this, int a2)
{
  return _ZN5Caver23CharControllerComponent22ValueForBindedPropertyEi(this, a2);
}

