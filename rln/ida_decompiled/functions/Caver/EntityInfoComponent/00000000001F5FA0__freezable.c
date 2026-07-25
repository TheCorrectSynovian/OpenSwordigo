/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5FA0
 * Mangled: ._ZNK5Caver19EntityInfoComponent9freezableEv
 * Demangled: Caver::EntityInfoComponent::freezable(void)
 *
 * Callers: 1
 *   0x000000000028C260  Caver::ObjectModifierComponent::ApplyModifier(Caver::ObjectModifierType,float,float)
 *
 * Callees: 1
 *   0x000000000026F44C  Caver::EntityInfoComponent::freezable(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5FA4 string=0x000000000026F44C "@@"
 *   insn=0x00000000001F5FA8 string=0x00000000001F5FAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityInfoComponent::freezable(Caver::EntityInfoComponent *this)
{
  return _ZNK5Caver19EntityInfoComponent9freezableEv(this);
}

