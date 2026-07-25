/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB5B0
 * Mangled: ._ZN5Caver14ModelComponent13InitWithModelERKN5boost10shared_ptrIKNS_5ModelEEE
 * Demangled: Caver::ModelComponent::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callers: 2
 *   0x0000000000225A10  Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x0000000000223F44  Caver::ModelComponent::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB5B8 string=0x00000000001FB5BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ModelComponent::InitWithModel()
{
  return _ZN5Caver14ModelComponent13InitWithModelERKN5boost10shared_ptrIKNS_5ModelEEE();
}

