/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028570C
 * Mangled: _ZNK5Caver18MagicBoltComponent5CloneEv
 * Demangled: Caver::MagicBoltComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000028543C  Caver::MagicBoltComponent::~MagicBoltComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9DF0  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *   0x00000000002028B0  Caver::MagicBoltComponent::MagicBoltComponent(void)
 *   0x000000000028578C  Caver::MagicBoltComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000285720 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000285724 string=0x0000000000285728 "b"
 *   insn=0x0000000000285734 string=0x0000000000285738 "h"
 *   insn=0x0000000000285734 string=0x00000000001F9DF0 "0'"
 *   insn=0x0000000000285744 string=0x0000000000285748 "h"
 *   insn=0x000000000028574C string=0x0000000000285750 "h"
 *   insn=0x0000000000285754 string=0x0000000000285758 "h""
 *   insn=0x0000000000285764 string=0x0000000000285768 "h"
 *   insn=0x0000000000285780 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000285784 string=0x0000000000285788 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MagicBoltComponent::Clone(Caver::MagicBoltComponent *this)
{
  __int64 v2; // x20
  long double result; // q0

  v2 = operator new(0x138u);
  Caver::MagicBoltComponent::MagicBoltComponent((Caver::MagicBoltComponent *)v2);
  Caver::SpellComponent::InitWithComponent((Caver::SpellComponent *)v2, this);
  *(_DWORD *)(v2 + 200) = *((_DWORD *)this + 50);
  *(_DWORD *)(v2 + 224) = *((_DWORD *)this + 56);
  *(_DWORD *)(v2 + 248) = *((_DWORD *)this + 62);
  result = *(long double *)((char *)this + 264);
  *(long double *)(v2 + 264) = result;
  *(_DWORD *)(v2 + 280) = *((_DWORD *)this + 70);
  return result;
}

