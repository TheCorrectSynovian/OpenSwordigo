/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003043B4
 * Mangled: _ZNK5Caver5Proto26KeyframeAnimationComponent3NewEv
 * Demangled: Caver::Proto::KeyframeAnimationComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x00000000003043C0 string=0x00000000003043C4 ""
 *   insn=0x00000000003043C0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003043C4 string=0x00000000003043C8 ""
 *   insn=0x00000000003043CC string=0x00000000003043D0 "\t"
 *   insn=0x00000000003043D0 string=0x00000000003043D4 ")ID"
 *   insn=0x00000000003043D4 string=0x00000000003043D8 "A"
 *   insn=0x00000000003043DC string=0x00000000003043E0 ""
 *   insn=0x00000000003043E0 string=0x00000000003043E4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::KeyframeAnimationComponent::New(Caver::Proto::KeyframeAnimationComponent *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_QWORD *)(result + 8) = 0;
  *(_WORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C7650;
  *(_QWORD *)(result + 16) = &Caver::Proto::KeyframeAnimationComponent::_default_name_;
  *(_QWORD *)(result + 28) = 0;
  return result;
}

