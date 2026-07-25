/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AEB18
 * Mangled: _ZNK5Caver21PortalEffectComponent5CloneEv
 * Demangled: Caver::PortalEffectComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002AE9C8  Caver::PortalEffectComponent::~PortalEffectComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFAE0  Caver::PortalEffectComponent::PortalEffectComponent(void)
 *   0x00000000002032E0  Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*)
 *   0x00000000002AEB90  Caver::PortalEffectComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000002AEB2C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002AEB40 string=0x00000000002AEB44 "h"
 *   insn=0x00000000002AEB50 string=0x00000000002AEB54 "h"
 *   insn=0x00000000002AEB58 string=0x00000000002AEB5C "`"
 *   insn=0x00000000002AEB60 string=0x00000000002AEB64 "hf@"
 *   insn=0x00000000002AEB68 string=0x00000000002AEB6C "h"
 *   insn=0x00000000002AEB84 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002AEB88 string=0x00000000002AEB8C "NK"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::PortalEffectComponent::Clone(Caver::PortalEffectComponent *this)
{
  __int64 v2; // x20
  long double result; // q0

  v2 = operator new(0x100u);
  Caver::PortalEffectComponent::PortalEffectComponent((Caver::PortalEffectComponent *)v2);
  Caver::GlowComponent::InitWithComponent((Caver::GlowComponent *)v2, this);
  *(_DWORD *)(v2 + 144) = *((_DWORD *)this + 36);
  *(_DWORD *)(v2 + 168) = *((_DWORD *)this + 42);
  result = *(long double *)((char *)this + 184);
  *(long double *)(v2 + 184) = result;
  *(_QWORD *)(v2 + 200) = *((_QWORD *)this + 25);
  *(_DWORD *)(v2 + 208) = *((_DWORD *)this + 52);
  return result;
}

