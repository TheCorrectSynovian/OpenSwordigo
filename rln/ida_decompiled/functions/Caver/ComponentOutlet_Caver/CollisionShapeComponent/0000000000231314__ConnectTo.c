/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000231314
 * Mangled: _ZN5Caver15ComponentOutletINS_23CollisionShapeComponentEE9ConnectToEPNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::CollisionShapeComponent>::ConnectTo(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x0000000000231320 string=0x0000000000231324 "`\n@"
 *   insn=0x0000000000231330 string=0x0000000000231334 "T"
 *   insn=0x0000000000231338 string=0x000000000023133C ""
 *   insn=0x0000000000231340 string=0x0000000000231344 "t\n"
 *   insn=0x0000000000231348 string=0x000000000023134C "@"
 *   insn=0x000000000023134C string=0x0000000000231350 ""
 *   insn=0x0000000000231350 string=0x0000000000231354 ""
 *   insn=0x0000000000231358 string=0x000000000023135C ""
 *   insn=0x000000000023135C string=0x0000000000231360 ""
 *   insn=0x0000000000231368 string=0x000000000023136C "h\n"
 *   insn=0x0000000000231380 string=0x0000000000231384 "@"
 *   insn=0x0000000000231384 string=0x0000000000231388 ""
 *   insn=0x0000000000231388 string=0x000000000023138C ""
 *   insn=0x0000000000231390 string=0x0000000000231394 ""
 *   insn=0x00000000002313A0 string=0x00000000002313A4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ComponentOutlet<Caver::CollisionShapeComponent>::ConnectTo(__int64 a1, _DWORD *a2)
{
  _DWORD *result; // x0
  int v5; // w8
  int v6; // w8

  result = *(_DWORD **)(a1 + 16);
  if ( result != a2 )
  {
    if ( a2 )
    {
      ++a2[2];
      *(_QWORD *)(a1 + 16) = a2;
      if ( result )
      {
        v5 = result[2] - 1;
        result[2] = v5;
        if ( !v5 )
          result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
      }
      *(_DWORD *)(a1 + 8) = a2[8];
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
      if ( result )
      {
        v6 = result[2] - 1;
        result[2] = v6;
        if ( !v6 )
          return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
      }
    }
  }
  return result;
}

