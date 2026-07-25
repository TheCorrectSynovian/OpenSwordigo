/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000458A40
 * Mangled: _ZN5Caver16CameraController12FollowObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEERKNS_7Vector3E
 * Demangled: Caver::CameraController::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x0000000000458A64 string=0x0000000000458A68 "@"
 *   insn=0x0000000000458A68 string=0x0000000000458A6C ""
 *   insn=0x0000000000458A6C string=0x0000000000458A70 ""
 *   insn=0x0000000000458A74 string=0x0000000000458A78 ""
 *   insn=0x0000000000458A78 string=0x0000000000458A7C ""
 *   insn=0x0000000000458A8C string=0x0000000000458A90 "@"
 *   insn=0x0000000000458A90 string=0x0000000000458A94 ""
 *   insn=0x0000000000458A94 string=0x0000000000458A98 ""
 *   insn=0x0000000000458A9C string=0x0000000000458AFC ""
 *   insn=0x0000000000458AA4 string=0x0000000000458AA8 "\t\t@"
 *   insn=0x0000000000458AA8 string=0x0000000000458AAC ")"
 *   insn=0x0000000000458AAC string=0x0000000000458AB0 "\t\t"
 *   insn=0x0000000000458ABC string=0x0000000000458AC0 "@"
 *   insn=0x0000000000458ABC string=0x0000000000458ADC "h"
 *   insn=0x0000000000458AC0 string=0x0000000000458AC4 ""
 *   insn=0x0000000000458AC4 string=0x0000000000458AC8 ""
 *   insn=0x0000000000458ACC string=0x0000000000458AD0 ""
 *   insn=0x0000000000458AD0 string=0x0000000000458AD4 ""
 *   insn=0x0000000000458AE0 string=0x0000000000458AE4 "h\n@"
 *   insn=0x0000000000458AFC string=0x0000000000458B00 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::CameraController::FollowObject(__int64 a1, __int64 *a2, __int64 a3)
{
  _DWORD *v4; // x0
  int v7; // w8
  _DWORD *v8; // x0
  int v9; // w8
  __int64 v10; // x8
  _DWORD *result; // x0
  int v12; // w8

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
  result = *(_DWORD **)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v10;
  if ( result )
  {
    v12 = result[2] - 1;
    result[2] = v12;
    if ( !v12 )
      result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  *(_QWORD *)(a1 + 120) = *(_QWORD *)a3;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a3 + 8);
  return result;
}

