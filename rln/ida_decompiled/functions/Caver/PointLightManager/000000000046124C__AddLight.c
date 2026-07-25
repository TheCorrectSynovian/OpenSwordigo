/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046124C
 * Mangled: _ZN5Caver17PointLightManager8AddLightERKNS_10PointLightE
 * Demangled: Caver::PointLightManager::AddLight(Caver::PointLight const&)
 *
 * Callers: 1
 *   0x00000000001F7FC0  Caver::PointLightManager::AddLight(Caver::PointLight const&)
 *
 * Callees: 1
 *   0x0000000000200650  Caver::FastVector<Caver::PointLight>::Resize(int)
 *
 * Referenced strings: 12
 *   insn=0x0000000000461258 string=0x000000000046125C "h&@)"
 *   insn=0x0000000000461264 string=0x0000000000461268 ""
 *   insn=0x0000000000461268 string=0x000000000046126C "(y"
 *   insn=0x0000000000461268 string=0x0000000000461288 "i"
 *   insn=0x0000000000461270 string=0x0000000000461274 "I"
 *   insn=0x0000000000461280 string=0x0000000000461284 "h"
 *   insn=0x0000000000461290 string=0x0000000000461294 "%+"
 *   insn=0x0000000000461294 string=0x0000000000461298 "\n"
 *   insn=0x000000000046129C string=0x00000000004612A0 "\t\t"
 *   insn=0x00000000004612B8 string=0x00000000004612BC "h"
 *   insn=0x00000000004612BC string=0x00000000004612C0 ""
 *   insn=0x00000000004612C0 string=0x00000000004612C4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::PointLightManager::AddLight(int *a1, __int64 a2)
{
  int v3; // w8
  __int64 v5; // x8
  long double result; // q0

  v3 = *a1;
  if ( *a1 >= a1[1] )
  {
    Caver::FastVector<Caver::PointLight>::Resize();
    v3 = *a1;
  }
  v5 = *((_QWORD *)a1 + 1) + 60LL * v3;
  *(_QWORD *)v5 = *(_QWORD *)a2;
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(a2 + 8);
  *(_OWORD *)(v5 + 44) = *(_OWORD *)(a2 + 44);
  *(_OWORD *)(v5 + 28) = *(_OWORD *)(a2 + 28);
  result = *(long double *)(a2 + 12);
  *(long double *)(v5 + 12) = result;
  ++*a1;
  return result;
}

