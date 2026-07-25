/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5C40
 * Mangled: ._ZN5Caver19BackgroundComponentC2Ev
 * Demangled: Caver::BackgroundComponent::BackgroundComponent(void)
 *
 * Callers: 1
 *   0x000000000024FA84  Caver::BackgroundComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000021D4A8  Caver::BackgroundComponent::BackgroundComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5C48 string=0x00000000001F5C4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BackgroundComponent::BackgroundComponent(Caver::BackgroundComponent *this)
{
  return _ZN5Caver19BackgroundComponentC2Ev(this);
}

