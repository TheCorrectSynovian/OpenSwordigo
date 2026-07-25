/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334204
 * Mangled: _ZNK5Caver5Proto14SkillComponent3NewEv
 * Demangled: Caver::Proto::SkillComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x0000000000334210 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000334214 string=0x0000000000334218 "eD"
 *   insn=0x0000000000334220 string=0x0000000000334224 ")"
 *   insn=0x0000000000334224 string=0x0000000000334228 "A"
 *   insn=0x0000000000334228 string=0x000000000033422C ""
 *   insn=0x0000000000334230 string=0x0000000000334234 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkillComponent::New(Caver::Proto::SkillComponent *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)result = off_6C9810;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = &Caver::Proto::SkillComponent::_default_cast_object_template_name_;
  *(_QWORD *)(result + 24) = 0;
  return result;
}

