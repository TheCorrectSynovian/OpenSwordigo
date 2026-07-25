/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B2210
 * Mangled: _ZNK5Caver23BushControllerComponent5CloneEv
 * Demangled: Caver::BushControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA2C0  Caver::BushControllerComponent::BushControllerComponent(void)
 *   0x00000000002B2280  Caver::BushControllerComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000002B2224 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B2228 string=0x00000000002B222C "% "
 *   insn=0x00000000002B222C string=0x00000000002B2230 "h"@"
 *   insn=0x00000000002B222C string=0x00000000001FA2C0 "0'"
 *   insn=0x00000000002B2230 string=0x00000000002B2234 "a"
 *   insn=0x00000000002B2240 string=0x00000000002B2244 "hz@"
 *   insn=0x00000000002B2250 string=0x00000000002B2254 "h"
 *   insn=0x00000000002B2258 string=0x00000000002B225C "h"
 *   insn=0x00000000002B2274 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::BushControllerComponent *__fastcall Caver::BushControllerComponent::Clone(Caver::BushControllerComponent *this)
{
  Caver::BushControllerComponent *v2; // x20
  Caver::BushControllerComponent *result; // x0

  v2 = (Caver::BushControllerComponent *)operator new(0xC0u);
  Caver::BushControllerComponent::BushControllerComponent(v2);
  *((_DWORD *)v2 + 8) = *((_DWORD *)this + 8);
  sub_56A6A8((char *)v2 + 56);
  result = v2;
  *((_DWORD *)v2 + 30) = *((_DWORD *)this + 30);
  *((_DWORD *)v2 + 36) = *((_DWORD *)this + 36);
  *((_DWORD *)v2 + 42) = *((_DWORD *)this + 42);
  return result;
}

