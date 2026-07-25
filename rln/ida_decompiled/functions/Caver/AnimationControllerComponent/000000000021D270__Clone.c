/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021D270
 * Mangled: _ZNK5Caver28AnimationControllerComponent5CloneEv
 * Demangled: Caver::AnimationControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000021CCB8  Caver::AnimationControllerComponent::BlendToAnimationNode(boost::intrusive_ptr<Caver::AnimNode> const&,float)
 *
 * Callees: 6
 *   0x00000000001F50B0  Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000021D2E0  Caver::AnimationControllerComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x000000000021D284 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021D28C string=0x000000000021D290 "h"@"
 *   insn=0x000000000021D28C string=0x00000000001F50B0 "P'"
 *   insn=0x000000000021D290 string=0x000000000021D294 "a"
 *   insn=0x000000000021D2A0 string=0x000000000021D2A4 "hz@"
 *   insn=0x000000000021D2B0 string=0x000000000021D2B4 "h"
 *   insn=0x000000000021D2B8 string=0x000000000021D2BC "h"
 *   insn=0x000000000021D2D4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021D2D8 string=0x000000000021D2DC "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimationControllerComponent::Clone(Caver::AnimationControllerComponent *this)
{
  __int64 v2; // x20
  __int64 result; // x0

  v2 = operator new(0xB8u);
  Caver::AnimationControllerComponent::AnimationControllerComponent((Caver::AnimationControllerComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56, (char *)this + 56);
  result = v2;
  *(_DWORD *)(v2 + 120) = *((_DWORD *)this + 30);
  *(_DWORD *)(v2 + 144) = *((_DWORD *)this + 36);
  *(_BYTE *)(v2 + 168) = *((_BYTE *)this + 168);
  return result;
}

