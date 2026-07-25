/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000489E14
 * Mangled: _ZN5Caver30LoadPolygonFromProtobufMessageEPNS_7PolygonERKNS_5Proto7PolygonE
 * Demangled: Caver::LoadPolygonFromProtobufMessage(Caver::Polygon *,Caver::Proto::Polygon const&)
 *
 * Callers: 1
 *   0x00000000001FD6B0  Caver::LoadPolygonFromProtobufMessage(Caver::Polygon *,Caver::Proto::Polygon const&)
 *
 * Callees: 1
 *   0x00000000001FEFD0  Caver::Polygon::SetVertices(int,Caver::Vector2 const*)
 *
 * Referenced strings: 13
 *   insn=0x0000000000489E20 string=0x0000000000489E24 "a"
 *   insn=0x0000000000489E2C string=0x0000000000489E30 "h"
 *   insn=0x0000000000489E30 string=0x0000000000489E34 "h"
 *   insn=0x0000000000489E30 string=0x00000000001FEFD0 "0'"
 *   insn=0x0000000000489E38 string=0x0000000000489E3C ""
 *   insn=0x0000000000489E3C string=0x0000000000489E7C "h"A9"
 *   insn=0x0000000000489E40 string=0x0000000000489E44 "k\n@"
 *   insn=0x0000000000489E48 string=0x0000000000489E4C "L"
 *   insn=0x0000000000489E4C string=0x0000000000489E50 "nyi"
 *   insn=0x0000000000489E5C string=0x0000000000489E6C ")"
 *   insn=0x0000000000489E60 string=0x0000000000489E64 "O"
 *   insn=0x0000000000489E6C string=0x0000000000489E70 "?"
 *   insn=0x0000000000489E80 string=0x0000000000489E84 "h&A9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LoadPolygonFromProtobufMessage(
        Caver *this,
        Caver::Polygon *a2,
        const Caver::Proto::Polygon *a3)
{
  __int64 result; // x0
  __int64 v6; // x8
  __int64 v7; // x10
  __int64 v8; // x11
  __int64 v9; // x9
  _DWORD *v10; // x12
  __int64 v11; // x14
  int v12; // w13
  int v13; // w14
  _DWORD *v14; // x15

  result = Caver::Polygon::SetVertices(this, *((_DWORD *)a2 + 6), 0);
  v6 = *((int *)a2 + 6);
  if ( (int)v6 >= 1 )
  {
    v7 = *((_QWORD *)this + 1);
    v8 = *((_QWORD *)a2 + 2);
    v9 = 0;
    v10 = (_DWORD *)(v7 + 4);
    do
    {
      v11 = *(_QWORD *)(v8 + 8 * v9);
      v12 = *(_DWORD *)(v11 + 12);
      v13 = *(_DWORD *)(v11 + 16);
      *(v10 - 1) = v12;
      *v10 = v13;
      if ( !v9 )
      {
        v14 = (_DWORD *)(v7 + 8LL * *(int *)this);
        *v14 = v12;
        v14[1] = v13;
      }
      ++v9;
      v10 += 2;
    }
    while ( v9 < v6 );
  }
  *((_BYTE *)this + 32) = *((_BYTE *)a2 + 72);
  *((_BYTE *)this + 33) = *((_BYTE *)a2 + 73);
  return result;
}

