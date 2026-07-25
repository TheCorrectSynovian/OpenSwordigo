/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCF90
 * Mangled: ._ZN5Caver8GameData29EntityHealthMultiplierAtLevelEi
 * Demangled: Caver::GameData::EntityHealthMultiplierAtLevel(int)
 *
 * Callers: 5
 *   0x000000000026F200  Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x00000000003AB174  Caver::CharacterState::LoadFromProtobufMessage(Caver::Proto::CharacterState const&)
 *   0x00000000003AC800  Caver::CharacterState::BaseExperienceForKillingMonster(int,int,int)
 *   0x00000000003AC838  Caver::CharacterState::ExperiencePointsForKillingMonster(int,int)
 *
 * Callees: 1
 *   0x00000000003B16B0  Caver::GameData::EntityHealthMultiplierAtLevel(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FCF94 string=0x00000000003B16B0 "("
 *   insn=0x00000000001FCF98 string=0x00000000001FCF9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameData::EntityHealthMultiplierAtLevel(Caver::GameData *this, int a2)
{
  return _ZN5Caver8GameData29EntityHealthMultiplierAtLevelEi(this, a2);
}

