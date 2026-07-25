/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046FD98
 * Mangled: _ZN5Caver11SceneObject18UnlinkFromTemplateEv
 * Demangled: Caver::SceneObject::UnlinkFromTemplate(void)
 *
 * Callers: 1
 *   0x000000000046F83C  Caver::SceneObject::AddComponent(Caver::Component *)
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x000000000046FDA4 string=0x000000000046FDA8 "`&@"
 *   insn=0x000000000046FDB0 string=0x000000000046FDB4 "@"
 *   insn=0x000000000046FDB0 string=0x000000000046FDD0 "l"L"
 *   insn=0x000000000046FDB4 string=0x000000000046FDB8 ""
 *   insn=0x000000000046FDB8 string=0x000000000046FDBC ""
 *   insn=0x000000000046FDC0 string=0x000000000046FDC4 ""
 *   insn=0x000000000046FDC4 string=0x000000000046FDC8 ""
 *   insn=0x000000000046FDD8 string=0x000000000046FDDC "\t!"
 *   insn=0x000000000046FDDC string=0x000000000046FDE0 ")"
 *   insn=0x000000000046FDE0 string=0x000000000046FDE4 ")"
 *   insn=0x000000000046FDE4 string=0x000000000046FDE8 "*"
 *   insn=0x000000000046FDE8 string=0x000000000046FDEC "_\t"
 *   insn=0x000000000046FDF4 string=0x000000000046FDF8 "K"
 *   insn=0x000000000046FDF4 string=0x000000000046FE28 "*"
 *   insn=0x000000000046FE18 string=0x000000000046FE1C "a"
 *   insn=0x000000000046FE1C string=0x000000000046FE20 "_"
 *   insn=0x000000000046FE2C string=0x000000000046FE30 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::SceneObject::UnlinkFromTemplate(Caver::SceneObject *this)
{
  _DWORD *result; // x0
  int v3; // w8
  __int64 *v4; // x8
  __int64 *v5; // x12
  unsigned __int64 v6; // x10
  __int64 *v7; // x9
  __int64 *v8; // x12
  __int64 v9; // x13
  __int64 v10; // x14
  __int64 v11; // x15
  __int64 v12; // t1

  result = (_DWORD *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0;
  if ( result )
  {
    v3 = result[2] - 1;
    result[2] = v3;
    if ( !v3 )
      result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  v5 = (__int64 *)*((_QWORD *)this + 24);
  v4 = (__int64 *)*((_QWORD *)this + 25);
  if ( v5 != v4 )
  {
    v6 = ((unsigned __int64)((char *)(v4 - 1) - (char *)v5) >> 3) + 1;
    v7 = (__int64 *)*((_QWORD *)this + 24);
    if ( v6 < 2 )
      goto LABEL_12;
    v7 = &v5[v6 & 0x3FFFFFFFFFFFFFFELL];
    v8 = v5 + 1;
    v9 = v6 & 0x3FFFFFFFFFFFFFFELL;
    do
    {
      v10 = *(v8 - 1);
      v11 = *v8;
      v9 -= 2;
      v8 += 2;
      *(_BYTE *)(v10 + 48) = 0;
      *(_BYTE *)(v11 + 48) = 0;
    }
    while ( v9 );
    if ( v6 != (v6 & 0x3FFFFFFFFFFFFFFELL) )
    {
LABEL_12:
      do
      {
        v12 = *v7++;
        *(_BYTE *)(v12 + 48) = 0;
      }
      while ( v4 != v7 );
    }
  }
  return result;
}

