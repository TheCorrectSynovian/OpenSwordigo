/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048ACC0
 * Mangled: _ZN5Caver13GradientColorC2EiPfPNS_5ColorE
 * Demangled: Caver::GradientColor::GradientColor(int,float *,Caver::Color *)
 *
 * Callers: 1
 *   0x0000000000200ED0  Caver::GradientColor::GradientColor(int,float *,Caver::Color *)
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x000000000048AD94  Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x000000000048ACDC string=0x000000000048ACE0 "}"
 *   insn=0x000000000048ACE8 string=0x000000000048ACEC "8"
 *   insn=0x000000000048AD08 string=0x00000000001F8570 "0'"
 *   insn=0x000000000048AD20 string=0x000000000048AD24 "K"
 *   insn=0x000000000048AD30 string=0x000000000048AD34 "h"
 *   insn=0x000000000048AD34 string=0x000000000048AD38 ""
 *   insn=0x000000000048AD44 string=0x000000000048AD48 "*"
 *   insn=0x000000000048AD50 string=0x000000000048AD54 ")"
 *   insn=0x000000000048AD5C string=0x000000000048AD60 "kjj"
 *   insn=0x000000000048AD84 string=0x000000000048AD88 "v"
 *   insn=0x000000000048AD88 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::GradientColor::GradientColor(Caver::GradientColor *this, int a2, float *a3, Caver::Color *a4)
{
  unsigned __int64 v5; // x24
  float *v9; // x23
  _DWORD *result; // x0
  __int64 v11; // x9
  __int64 v12; // x10
  float v13; // w11
  __int64 v14; // x13

  if ( is_mul_ok(a2, 4u) )
    v5 = 4LL * a2;
  else
    v5 = -1;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_DWORD *)this = a2;
  v9 = (float *)operator new[](v5);
  *((_QWORD *)this + 1) = v9;
  result = (_DWORD *)operator new[](v5);
  *((_QWORD *)this + 2) = result;
  if ( a2 >= 1 )
  {
    *v9 = *a3;
    *result = *(_DWORD *)a4;
    if ( a2 != 1 )
    {
      v11 = 1;
      do
      {
        v12 = 4 * v11;
        v13 = a3[v11];
        v14 = *((_QWORD *)this + 2);
        ++v11;
        *(float *)(*((_QWORD *)this + 1) + v12) = v13;
        *(_DWORD *)(v14 + v12) = *(_DWORD *)((char *)a4 + v12);
      }
      while ( a2 != v11 );
    }
  }
  return result;
}

