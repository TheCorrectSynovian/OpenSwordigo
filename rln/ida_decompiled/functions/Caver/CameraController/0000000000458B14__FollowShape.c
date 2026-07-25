/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000458B14
 * Mangled: _ZN5Caver16CameraController11FollowShapeERKN5boost13intrusive_ptrINS_14ShapeComponentEEERKNS_9RectangleE
 * Demangled: Caver::CameraController::FollowShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,Caver::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x0000000000458B38 string=0x0000000000458B3C "@"
 *   insn=0x0000000000458B3C string=0x0000000000458B40 ""
 *   insn=0x0000000000458B40 string=0x0000000000458B44 ""
 *   insn=0x0000000000458B48 string=0x0000000000458B4C ""
 *   insn=0x0000000000458B4C string=0x0000000000458B50 ""
 *   insn=0x0000000000458B60 string=0x0000000000458B64 "@"
 *   insn=0x0000000000458B64 string=0x0000000000458B68 ""
 *   insn=0x0000000000458B68 string=0x0000000000458B6C ""
 *   insn=0x0000000000458B70 string=0x0000000000458BC8 ""
 *   insn=0x0000000000458B78 string=0x0000000000458B7C "\t\t@"
 *   insn=0x0000000000458B7C string=0x0000000000458B80 ")"
 *   insn=0x0000000000458B80 string=0x0000000000458B84 "\t\t"
 *   insn=0x0000000000458B90 string=0x0000000000458B94 "@"
 *   insn=0x0000000000458B90 string=0x0000000000458BB0 "`"
 *   insn=0x0000000000458B94 string=0x0000000000458B98 ""
 *   insn=0x0000000000458B98 string=0x0000000000458B9C ""
 *   insn=0x0000000000458BA0 string=0x0000000000458BA4 ""
 *   insn=0x0000000000458BA4 string=0x0000000000458BA8 ""
 *   insn=0x0000000000458BC8 string=0x0000000000458BCC ""
 *   insn=0x0000000000458BD4 string=0x0000000000458BD8 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::CameraController::FollowShape(__int64 a1, __int64 *a2, long double *a3)
{
  _DWORD *v4; // x0
  int v7; // w8
  _DWORD *v8; // x0
  int v9; // w8
  __int64 v10; // x8
  _DWORD *v11; // x0
  int v12; // w8
  long double result; // q0

  v4 = *(_DWORD **)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0;
  if ( v4 )
  {
    v7 = v4[2] - 1;
    v4[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v8 = *(_DWORD **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0;
  if ( v8 )
  {
    v9 = v8[2] - 1;
    v8[2] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
      v10 = *a2;
      if ( !*a2 )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
  v10 = *a2;
  if ( *a2 )
LABEL_7:
    ++*(_DWORD *)(v10 + 8);
LABEL_8:
  v11 = *(_DWORD **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v10;
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  result = *a3;
  *(long double *)(a1 + 132) = *a3;
  return result;
}

