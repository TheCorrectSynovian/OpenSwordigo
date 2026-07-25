/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA7A0
 * Mangled: ._ZN5Caver26KeyframeAnimationComponent15RegisterLibraryEv
 * Demangled: Caver::KeyframeAnimationComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000021FDFC  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *
 * Callees: 1
 *   0x000000000021FFEC  Caver::KeyframeAnimationComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA7A8 string=0x00000000001FA7AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::KeyframeAnimationComponent::RegisterLibrary(Caver::KeyframeAnimationComponent *this)
{
  return _ZN5Caver26KeyframeAnimationComponent15RegisterLibraryEv(this);
}

