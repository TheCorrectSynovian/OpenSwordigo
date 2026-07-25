/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028F82C
 * Mangled: _ZNK5Caver14SkillComponent5CloneEv
 * Demangled: Caver::SkillComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000028F4C0  Caver::SkillComponent::~SkillComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC520  Caver::SkillComponent::SkillComponent(void)
 *   0x000000000028F8A0  Caver::SkillComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x000000000028F83C string=0x000000000028F840 "h"
 *   insn=0x000000000028F840 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000028F844 string=0x000000000028F848 "6"
 *   insn=0x000000000028F848 string=0x000000000028F84C "h"@"
 *   insn=0x000000000028F848 string=0x00000000001FC520 "0'"
 *   insn=0x000000000028F84C string=0x000000000028F850 "a"
 *   insn=0x000000000028F85C string=0x000000000028F860 "hz@"
 *   insn=0x000000000028F860 string=0x000000000028F864 "a"
 *   insn=0x000000000028F870 string=0x000000000028F874 "hF@"
 *   insn=0x000000000028F894 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028F898 string=0x000000000028F89C "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillComponent::Clone(Caver::SkillComponent *this)
{
  __int64 v2; // x20
  __int64 result; // x0

  v2 = operator new(0xD0u);
  Caver::SkillComponent::SkillComponent((Caver::SkillComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  *(_DWORD *)(v2 + 120) = *((_DWORD *)this + 30);
  sub_56A6A8(v2 + 160);
  result = v2;
  *(_QWORD *)(v2 + 136) = *((_QWORD *)this + 17);
  return result;
}

