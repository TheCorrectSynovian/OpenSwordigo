/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000371DD0
 * Mangled: _ZN5Caver13SceneEdgeFadeC2Ev
 * Demangled: Caver::SceneEdgeFade::SceneEdgeFade(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000371EE4  Caver::SceneEdgeFade::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x0000000000371DE8 string=0x0000000000371DEC "h"
 *   insn=0x0000000000371DF4 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000371E10 string=0x0000000000371E14 "`"
 *   insn=0x0000000000371E2C string=0x0000000000371E30 " I"
 *   insn=0x0000000000371E30 string=0x0000000000371E34 "h"
 *   insn=0x0000000000371E3C string=0x0000000000371E40 " M"
 *   insn=0x0000000000371E40 string=0x0000000000371E44 "h"
 *   insn=0x0000000000371E4C string=0x0000000000371E50 "i"
 *   insn=0x0000000000371E58 string=0x0000000000371E5C "h"
 *   insn=0x0000000000371E5C string=0x0000000000371E60 "`"
 *   insn=0x0000000000371E68 string=0x0000000000371E6C "="
 *   insn=0x0000000000371E6C string=0x0000000000371E70 "`"
 *   insn=0x0000000000371E6C string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000371E88 string=0x0000000000371E8C ""
 *   insn=0x0000000000371EA4 string=0x0000000000371EA8 "`"
 *   insn=0x0000000000371EA8 string=0x0000000000371EAC "`"
 *   insn=0x0000000000371EAC string=0x0000000000371ED8 """
 *   insn=0x0000000000371EB8 string=0x0000000000371EBC ")"
 *   insn=0x0000000000371EBC string=0x0000000000371EC0 "`"
 *   insn=0x0000000000371EC0 string=0x0000000000371EC4 "`"
 *   insn=0x0000000000371ECC string=0x0000000000371ED0 "`"
 *   insn=0x0000000000371EDC string=0x0000000000371EE0 "y>"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::SceneEdgeFade::SceneEdgeFade(Caver::SceneEdgeFade *this)
{
  _OWORD *v2; // x0
  __int64 v3; // x0
  void *v4; // x8
  long double result; // q0

  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_DWORD *)this = 6;
  v2 = (_OWORD *)operator new[](0x60u);
  *((_QWORD *)this + 1) = v2;
  *v2 = xmmword_5900E0;
  v2[1] = xmmword_5900F0;
  v2[2] = xmmword_590100;
  v2[3] = xmmword_590110;
  *(_OWORD *)(*((_QWORD *)this + 1) + 64LL) = xmmword_590120;
  *(_OWORD *)(*((_QWORD *)this + 1) + 80LL) = xmmword_590130;
  *((_DWORD *)this + 4) = 4;
  v3 = operator new[](0x18u);
  v4 = (void *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v3;
  if ( v4 )
  {
    operator delete[](v4);
    v3 = *((_QWORD *)this + 3);
  }
  result = *(long double *)&xmmword_590140;
  *(_OWORD *)v3 = xmmword_590140;
  *(_QWORD *)(v3 + 16) = 0x4000500030004LL;
  return result;
}

