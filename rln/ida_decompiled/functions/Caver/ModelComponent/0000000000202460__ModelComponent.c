/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202460
 * Mangled: ._ZN5Caver14ModelComponentC2Ev
 * Demangled: Caver::ModelComponent::ModelComponent(void)
 *
 * Callers: 2
 *   0x000000000024F504  Caver::ModelComponent::Create(void)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x0000000000223DF0  Caver::ModelComponent::ModelComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202468 string=0x000000000020246C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelComponent::ModelComponent(Caver::ModelComponent *this)
{
  return _ZN5Caver14ModelComponentC2Ev(this);
}

