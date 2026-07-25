/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCE60
 * Mangled: ._ZN5Caver12ModelLibrary13sharedLibraryEv
 * Demangled: Caver::ModelLibrary::sharedLibrary(void)
 *
 * Callers: 6
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x000000000021FDFC  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *   0x0000000000221048  Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002240E4  Caver::ModelComponent::LoadModel(void)
 *   0x0000000000225A10  Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *
 * Callees: 1
 *   0x000000000044B44C  Caver::ModelLibrary::sharedLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCE68 string=0x00000000001FCE6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelLibrary::sharedLibrary(Caver::ModelLibrary *this)
{
  return _ZN5Caver12ModelLibrary13sharedLibraryEv(this);
}

