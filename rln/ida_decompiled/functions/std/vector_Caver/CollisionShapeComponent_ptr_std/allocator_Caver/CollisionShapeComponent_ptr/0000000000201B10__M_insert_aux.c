/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201B10
 * Mangled: ._ZNSt6vectorIPN5Caver23CollisionShapeComponentESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::CollisionShapeComponent **,std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>>>,Caver::CollisionShapeComponent * const&)
 *
 * Callers: 1
 *   0x000000000021BEC4  Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>(std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>> *)
 *
 * Callees: 1
 *   0x000000000021BEC4  Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>(std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>> *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201B18 string=0x0000000000201B1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<Caver::CollisionShapeComponent *>::_M_insert_aux()
{
  JUMPOUT(0x21BFE8);
}

