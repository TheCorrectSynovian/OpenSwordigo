/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002033F0
 * Mangled: ._ZN5Caver14ModelComponent12UpdateBoundsEv
 * Demangled: Caver::ModelComponent::UpdateBounds(void)
 *
 * Callers: 2
 *   0x0000000000224274  Caver::ModelComponent::Prepare(void)
 *   0x0000000000225A10  Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000224388  Caver::ModelComponent::UpdateBounds(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002033F8 string=0x00000000002033FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelComponent::UpdateBounds(Caver::ModelComponent *this)
{
  return _ZN5Caver14ModelComponent12UpdateBoundsEv(this);
}

