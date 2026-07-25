/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045A2DC
 * Mangled: _ZN5Caver12LightOverlay14SetPointLightsEPKNS_10PointLightEi
 * Demangled: Caver::LightOverlay::SetPointLights(Caver::PointLight const*,int)
 *
 * Callers: 1
 *   0x00000000001FBF20  Caver::LightOverlay::SetPointLights(Caver::PointLight const*,int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 21
 *   insn=0x000000000045A2F4 string=0x000000000045A2F8 "}"
 *   insn=0x000000000045A304 string=0x000000000045A308 "@"
 *   insn=0x000000000045A314 string=0x00000000001F8570 "0'"
 *   insn=0x000000000045A31C string=0x000000000045A320 "h"
 *   insn=0x000000000045A328 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000045A32C string=0x000000000045A330 "k"
 *   insn=0x000000000045A33C string=0x000000000045A340 "k"
 *   insn=0x000000000045A340 string=0x000000000045A344 "l"
 *   insn=0x000000000045A344 string=0x000000000045A348 ")"
 *   insn=0x000000000045A348 string=0x000000000045A34C "J"
 *   insn=0x000000000045A34C string=0x000000000045A350 ""
 *   insn=0x000000000045A350 string=0x000000000045A354 "L"
 *   insn=0x000000000045A354 string=0x000000000045A358 "l\t@"
 *   insn=0x000000000045A358 string=0x000000000045A35C "L\t"
 *   insn=0x000000000045A35C string=0x000000000045A360 "`"
 *   insn=0x000000000045A360 string=0x000000000045A364 "@"
 *   insn=0x000000000045A364 string=0x000000000045A368 "`"
 *   insn=0x000000000045A368 string=0x000000000045A36C "@"
 *   insn=0x000000000045A36C string=0x000000000045A370 "`"
 *   insn=0x000000000045A370 string=0x000000000045A374 "@"
 *   insn=0x000000000045A374 string=0x000000000045A378 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::LightOverlay::SetPointLights(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // x0
  __int64 v7; // x0
  long double result; // q0
  void *v9; // x8
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x11
  __int64 v13; // x12
  __int64 v14; // x10

  if ( is_mul_ok(a3, 0x3Cu) )
    v5 = 60LL * a3;
  else
    v5 = -1;
  *(_DWORD *)(a1 + 148) = a3;
  v7 = operator new[](v5);
  v9 = *(void **)(a1 + 152);
  *(_QWORD *)(a1 + 152) = v7;
  if ( v9 )
    operator delete[](v9);
  if ( a3 >= 1 )
  {
    v10 = 0;
    v11 = (unsigned int)a3;
    do
    {
      v12 = a2 + v10;
      v13 = *(_QWORD *)(a2 + v10);
      --v11;
      v14 = *(_QWORD *)(a1 + 152) + v10;
      v10 += 60;
      *(_QWORD *)v14 = v13;
      *(_DWORD *)(v14 + 8) = *(_DWORD *)(v12 + 8);
      *(_OWORD *)(v14 + 44) = *(_OWORD *)(v12 + 44);
      *(_OWORD *)(v14 + 28) = *(_OWORD *)(v12 + 28);
      result = *(long double *)(v12 + 12);
      *(long double *)(v14 + 12) = result;
    }
    while ( v11 );
  }
  return result;
}

