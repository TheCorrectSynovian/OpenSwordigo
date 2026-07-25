/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025B4E0
 * Mangled: _ZThn16_N5Caver23CharControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::CharControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5210  Caver::CharControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x000000000025B4E0 string=0x000000000025B4E4 "Kg"
 *   insn=0x000000000025B4E4 string=0x00000000001F5210 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::CharControllerComponent::ValueForBindedProperty(
        Caver::CharControllerComponent *this,
        int a2)
{
  return Caver::CharControllerComponent::ValueForBindedProperty(
           (Caver::CharControllerComponent *)((char *)this - 16),
           a2);
}

