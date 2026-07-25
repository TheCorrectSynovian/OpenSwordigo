/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021E228
 * Mangled: _ZNK5Caver19BackgroundComponent5CloneEv
 * Demangled: Caver::BackgroundComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000021E0C8  Caver::BackgroundComponent::~BackgroundComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA190  Caver::BackgroundComponent::InitWithComponent(Caver::BackgroundComponent const*)
 *   0x00000000001FF840  Caver::BackgroundComponent::BackgroundComponent(void)
 *   0x000000000021E278  Caver::BackgroundComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000021E23C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021E250 string=0x00000000001FA190 "0'"
 *   insn=0x000000000021E26C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::BackgroundComponent *__fastcall Caver::BackgroundComponent::Clone(Caver::BackgroundComponent *this)
{
  Caver::BackgroundComponent *v1; // x19

  v1 = (Caver::BackgroundComponent *)operator new(0x90u);
  Caver::BackgroundComponent::BackgroundComponent(v1);
  Caver::BackgroundComponent::InitWithComponent();
  return v1;
}

