/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF840
 * Mangled: ._ZN5Caver19BackgroundComponentC2Ev_0
 * Demangled: Caver::BackgroundComponent::BackgroundComponent(void)
 *
 * Callers: 3
 *   0x000000000021E228  Caver::BackgroundComponent::Clone(void)
 *   0x00000000002B6680  Caver::RotatingBackgroundComponent::RotatingBackgroundComponent(void)
 *   0x00000000002B6A74  Caver::RotatingBackgroundComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000021D4A8  Caver::BackgroundComponent::BackgroundComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF848 string=0x00000000001FF84C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BackgroundComponent::BackgroundComponent(Caver::BackgroundComponent *this)
{
  return _ZN5Caver19BackgroundComponentC2Ev(this);
}

