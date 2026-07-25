/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC920
 * Mangled: ._ZN5Caver14ModelComponent9LoadModelEv
 * Demangled: Caver::ModelComponent::LoadModel(void)
 *
 * Callers: 3
 *   0x000000000021FDFC  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *   0x0000000000221048  Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000224274  Caver::ModelComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002240E4  Caver::ModelComponent::LoadModel(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC928 string=0x00000000001FC92C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelComponent::LoadModel(Caver::ModelComponent *this)
{
  return _ZN5Caver14ModelComponent9LoadModelEv(this);
}

