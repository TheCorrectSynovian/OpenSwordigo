/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202610
 * Mangled: ._ZN5Caver15EntityComponent22ValueForBindedPropertyEi
 * Demangled: Caver::EntityComponent::ValueForBindedProperty(int)
 *
 * Callers: 4
 *   0x0000000000268B68  `non-virtual thunk to'Caver::EntityComponent::ValueForBindedProperty(int)
 *   0x00000000002724E4  Caver::HeroEntityComponent::ValueForBindedProperty(int)
 *   0x00000000002724F8  `non-virtual thunk to'Caver::HeroEntityComponent::ValueForBindedProperty(int)
 *   0x000000000027BADC  Caver::MonsterEntityComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002688A4  Caver::EntityComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202618 string=0x000000000020261C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityComponent::ValueForBindedProperty(Caver::EntityComponent *this, int a2)
{
  return _ZN5Caver15EntityComponent22ValueForBindedPropertyEi(this, a2);
}

