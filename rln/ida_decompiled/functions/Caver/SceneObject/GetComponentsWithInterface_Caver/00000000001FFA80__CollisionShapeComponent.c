/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFA80
 * Mangled: ._ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_23CollisionShapeComponentEEEvPSt6vectorIPT_SaIS5_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>(std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>> *)
 *
 * Callers: 1
 *   0x000000000021B980  sub_21B980
 *
 * Callees: 1
 *   0x000000000021BEC4  Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>(std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFA88 string=0x00000000001FFA8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>()
{
  return _ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_23CollisionShapeComponentEEEvPSt6vectorIPT_SaIS5_EE();
}

