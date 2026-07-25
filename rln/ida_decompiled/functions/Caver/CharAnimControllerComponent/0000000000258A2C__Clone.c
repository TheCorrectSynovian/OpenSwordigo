/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000258A2C
 * Mangled: _ZNK5Caver27CharAnimControllerComponent5CloneEv
 * Demangled: Caver::CharAnimControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000257A28  Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBF40  Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *   0x00000000001FC8A0  Caver::AnimationControllerComponent::InitWithComponent(Caver::AnimationControllerComponent const*)
 *   0x0000000000258AAC  Caver::CharAnimControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000258A40 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000258A44 string=0x0000000000258A48 ">"
 *   insn=0x0000000000258A48 string=0x00000000001FBF40 "0'"
 *   insn=0x0000000000258A54 string=0x0000000000258A58 "h"
 *   insn=0x0000000000258A54 string=0x00000000001FC8A0 "0'"
 *   insn=0x0000000000258A64 string=0x0000000000258A68 "h"
 *   insn=0x0000000000258A6C string=0x0000000000258A70 "h"
 *   insn=0x0000000000258A74 string=0x0000000000258A78 "h\nA"
 *   insn=0x0000000000258A7C string=0x0000000000258A80 "h"A"
 *   insn=0x0000000000258A84 string=0x0000000000258A88 "h:A"
 *   insn=0x0000000000258AA0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::CharAnimControllerComponent *__fastcall Caver::CharAnimControllerComponent::Clone(
        Caver::CharAnimControllerComponent *this)
{
  Caver::CharAnimControllerComponent *v2; // x20
  Caver::CharAnimControllerComponent *result; // x0

  v2 = (Caver::CharAnimControllerComponent *)operator new(0x188u);
  Caver::CharAnimControllerComponent::CharAnimControllerComponent(v2);
  Caver::AnimationControllerComponent::InitWithComponent(v2, this);
  result = v2;
  *((_DWORD *)v2 + 48) = *((_DWORD *)this + 48);
  *((_DWORD *)v2 + 54) = *((_DWORD *)this + 54);
  *((_DWORD *)v2 + 60) = *((_DWORD *)this + 60);
  *((_DWORD *)v2 + 66) = *((_DWORD *)this + 66);
  *((_DWORD *)v2 + 72) = *((_DWORD *)this + 72);
  *((_DWORD *)v2 + 78) = *((_DWORD *)this + 78);
  return result;
}

