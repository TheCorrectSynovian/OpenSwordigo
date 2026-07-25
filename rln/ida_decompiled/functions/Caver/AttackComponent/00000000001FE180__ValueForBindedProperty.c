/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE180
 * Mangled: ._ZN5Caver15AttackComponent22ValueForBindedPropertyEi
 * Demangled: Caver::AttackComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000292154  `non-virtual thunk to'Caver::AttackComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002920E8  Caver::AttackComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE184 string=0x00000000002920E8 ")"
 *   insn=0x00000000001FE188 string=0x00000000001FE18C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AttackComponent::ValueForBindedProperty(Caver::AttackComponent *this, int a2)
{
  return _ZN5Caver15AttackComponent22ValueForBindedPropertyEi(this, a2);
}

