/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5F50
 * Mangled: ._ZNK5Caver7Vector37IsCloseERKS0_f
 * Demangled: Caver::Vector3::IsClose(Caver::Vector3 const&,float)
 *
 * Callers: 9
 *   0x0000000000223EA0  Caver::ModelComponent::InitWithComponent(Caver::ModelComponent const*)
 *   0x0000000000224688  Caver::ModelComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000225A10  Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000226518  Caver::ModelComponent::Clone(void)
 *   0x0000000000226D64  Caver::ModelTransformControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000228040  Caver::ModelTransformControllerComponent::RegisterLibrary(void)
 *   0x00000000002407D0  Caver::TransformControllerComponent::RegisterLibrary(void)
 *   0x00000000002C5630  Caver::SwingableWeaponComponent::UpdateTransform(Caver::Matrix4 const&)
 *   0x000000000045807C  Caver::CameraController::CameraController(void)
 *
 * Callees: 1
 *   0x00000000004B2C50  Caver::Vector3::IsClose(Caver::Vector3 const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5F58 string=0x00000000001F5F5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Vector3::IsClose(Caver::Vector3 *this, const Caver::Vector3 *a2, float a3)
{
  return _ZNK5Caver7Vector37IsCloseERKS0_f(this, a2, a3);
}

