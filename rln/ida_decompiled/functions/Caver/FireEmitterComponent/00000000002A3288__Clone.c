/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3288
 * Mangled: _ZNK5Caver20FireEmitterComponent5CloneEv
 * Demangled: Caver::FireEmitterComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002A3150  Caver::FireEmitterComponent::~FireEmitterComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6FB0  Caver::FireEmitterComponent::FireEmitterComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002A3320  Caver::FireEmitterComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x00000000002A329C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002A32A0 string=0x00000000002A32A4 "CO"
 *   insn=0x00000000002A32A4 string=0x00000000002A32A8 "h"@"
 *   insn=0x00000000002A32A4 string=0x00000000001F6FB0 "P'"
 *   insn=0x00000000002A32A8 string=0x00000000002A32AC "a"
 *   insn=0x00000000002A32B8 string=0x00000000002A32BC "hz@"
 *   insn=0x00000000002A32C8 string=0x00000000002A32CC "h"
 *   insn=0x00000000002A32D0 string=0x00000000002A32D4 "h"
 *   insn=0x00000000002A32D8 string=0x00000000002A32DC "h"
 *   insn=0x00000000002A32E0 string=0x00000000002A32E4 "h"
 *   insn=0x00000000002A32E8 string=0x00000000002A32EC "`2"
 *   insn=0x00000000002A32F0 string=0x00000000002A32F4 "`*"
 *   insn=0x00000000002A32F8 string=0x00000000002A32FC "h"
 *   insn=0x00000000002A3314 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002A3318 string=0x00000000002A331C "jy"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::FireEmitterComponent::Clone(Caver::FireEmitterComponent *this)
{
  __int64 v2; // x20
  long double result; // q0

  v2 = operator new(0xF0u);
  Caver::FireEmitterComponent::FireEmitterComponent((Caver::FireEmitterComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  *(_DWORD *)(v2 + 120) = *((_DWORD *)this + 30);
  *(_DWORD *)(v2 + 144) = *((_DWORD *)this + 36);
  *(_DWORD *)(v2 + 180) = *((_DWORD *)this + 45);
  *(_DWORD *)(v2 + 184) = *((_DWORD *)this + 46);
  *(_DWORD *)(v2 + 188) = *((_DWORD *)this + 47);
  *(_OWORD *)(v2 + 192) = *((_OWORD *)this + 12);
  result = *((long double *)this + 10);
  *(long double *)(v2 + 160) = result;
  *(_DWORD *)(v2 + 176) = *((_DWORD *)this + 44);
  return result;
}

