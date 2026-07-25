/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221910
 * Mangled: _ZNK5Caver26KeyframeAnimationComponent5CloneEv
 * Demangled: Caver::KeyframeAnimationComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002216FC  Caver::KeyframeAnimationComponent::~KeyframeAnimationComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7670  Caver::KeyframeAnimationComponent::InitWithComponent(Caver::KeyframeAnimationComponent const*)
 *   0x00000000001FB1F0  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *   0x0000000000221960  Caver::KeyframeAnimationComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000221920 string=0x0000000000221924 "/O"
 *   insn=0x0000000000221924 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000221928 string=0x000000000022192C "1f"
 *   insn=0x000000000022192C string=0x00000000001FB1F0 "0'"
 *   insn=0x0000000000221934 string=0x0000000000221938 "NW"
 *   insn=0x0000000000221938 string=0x00000000001F7670 "0'"
 *   insn=0x0000000000221950 string=0x0000000000221954 "WV"
 *   insn=0x0000000000221954 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::KeyframeAnimationComponent *__fastcall Caver::KeyframeAnimationComponent::Clone(
        Caver::KeyframeAnimationComponent *this)
{
  Caver::KeyframeAnimationComponent *v1; // x19

  v1 = (Caver::KeyframeAnimationComponent *)operator new(0x98u);
  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(v1);
  Caver::KeyframeAnimationComponent::InitWithComponent();
  return v1;
}

