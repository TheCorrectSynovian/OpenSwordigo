/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000215A9C
 * Mangled: _ZN5Caver14ShapeComponent9InterfaceEv
 * Demangled: Caver::ShapeComponent::Interface(void)
 *
 * Callers: 11
 *   0x0000000000215454  Caver::BoneControlledCollisionShapeComponent::ImplementsInterface(long)
 *   0x0000000000215494  Caver::BoneControlledCollisionShapeComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000215A9C  Caver::ShapeComponent::Interface(void)
 *   0x000000000021BBB0  Caver::CollisionShapeComponent::ImplementsInterface(long)
 *   0x000000000021BBD8  Caver::CollisionShapeComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002395F4  Caver::ShapeComponent::ImplementsInterface(long)
 *   0x0000000000239608  Caver::ShapeComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000250BB8  Caver::UtilityShapeComponent::ImplementsInterface(long)
 *   0x0000000000250BE0  Caver::UtilityShapeComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000026E464  Caver::EntityControllerComponent::className(void)
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::ShapeComponent::Interface(
        Caver::ShapeComponent *this))(Caver::ShapeComponent *__hidden this)
{
  return Caver::ShapeComponent::Interface;
}

