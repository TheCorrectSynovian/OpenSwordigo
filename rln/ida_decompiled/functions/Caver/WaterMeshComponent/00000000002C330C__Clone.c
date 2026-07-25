/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C330C
 * Mangled: _ZNK5Caver18WaterMeshComponent5CloneEv
 * Demangled: Caver::WaterMeshComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002C3190  Caver::WaterMeshComponent::~WaterMeshComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD360  Caver::WaterMeshComponent::WaterMeshComponent(void)
 *   0x00000000002C3384  Caver::WaterMeshComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000002C3320 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C3328 string=0x00000000002C332C "h"@"
 *   insn=0x00000000002C3328 string=0x00000000001FD360 "0'"
 *   insn=0x00000000002C332C string=0x00000000002C3330 "a"
 *   insn=0x00000000002C333C string=0x00000000002C3340 "hz@"
 *   insn=0x00000000002C334C string=0x00000000002C3350 "h"
 *   insn=0x00000000002C3354 string=0x00000000002C3358 "`."
 *   insn=0x00000000002C335C string=0x00000000002C3360 "`2"
 *   insn=0x00000000002C3378 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C337C string=0x00000000002C3380 "Q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::WaterMeshComponent::Clone(Caver::WaterMeshComponent *this)
{
  __int64 v2; // x20
  long double result; // q0

  v2 = operator new(0x158u);
  Caver::WaterMeshComponent::WaterMeshComponent((Caver::WaterMeshComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  *(_DWORD *)(v2 + 120) = *((_DWORD *)this + 30);
  *(_DWORD *)(v2 + 160) = *((_DWORD *)this + 40);
  *(_OWORD *)(v2 + 176) = *((_OWORD *)this + 11);
  result = *((long double *)this + 12);
  *(long double *)(v2 + 192) = result;
  return result;
}

