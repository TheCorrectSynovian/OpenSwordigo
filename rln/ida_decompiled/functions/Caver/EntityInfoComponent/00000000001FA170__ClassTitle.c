/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA170
 * Mangled: ._ZNK5Caver19EntityInfoComponent10ClassTitleEv
 * Demangled: Caver::EntityInfoComponent::ClassTitle(void)
 *
 * Callers: 1
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *
 * Callees: 1
 *   0x000000000026F42C  Caver::EntityInfoComponent::ClassTitle(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA174 string=0x000000000026F42C "\t@@"
 *   insn=0x00000000001FA178 string=0x00000000001FA17C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityInfoComponent::ClassTitle(Caver::EntityInfoComponent *this)
{
  return _ZNK5Caver19EntityInfoComponent10ClassTitleEv(this);
}

