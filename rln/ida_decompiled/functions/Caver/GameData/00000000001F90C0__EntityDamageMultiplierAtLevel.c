/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F90C0
 * Mangled: ._ZN5Caver8GameData29EntityDamageMultiplierAtLevelEi
 * Demangled: Caver::GameData::EntityDamageMultiplierAtLevel(int)
 *
 * Callers: 1
 *   0x000000000026F200  Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *
 * Callees: 1
 *   0x00000000003B16FC  Caver::GameData::EntityDamageMultiplierAtLevel(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F90C4 string=0x00000000003B16FC "?,"
 *   insn=0x00000000001F90C8 string=0x00000000001F90CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameData::EntityDamageMultiplierAtLevel(Caver::GameData *this, int a2)
{
  return _ZN5Caver8GameData29EntityDamageMultiplierAtLevelEi(this, a2);
}

