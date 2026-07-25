/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052D908
 * Mangled: sub_52D908
 * Demangled: sub_52D908
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000052D354  sub_52D354
 *   0x000000000052D5D4  sub_52D5D4
 *
 * Referenced strings: 20
 *   insn=0x000000000052D98C string=0x000000000052D990 "S|@"
 *   insn=0x000000000052D9A4 string=0x000000000052D9A8 "B"
 *   insn=0x000000000052D9B0 string=0x000000000052D9B4 "B"
 *   insn=0x000000000052D9B0 string=0x000000000052DA6C "B"
 *   insn=0x000000000052D9B8 string=0x000000000052D9BC " "
 *   insn=0x000000000052D9BC string=0x000000000052D9C0 "?"
 *   insn=0x000000000052D9D4 string=0x000000000052D9D8 " "
 *   insn=0x000000000052D9DC string=0x000000000052D9E0 "`"
 *   insn=0x000000000052DA10 string=0x000000000052DA14 "B"
 *   insn=0x000000000052DA20 string=0x000000000052DA24 "7"
 *   insn=0x000000000052DA24 string=0x000000000052DA28 "T"
 *   insn=0x000000000052DA40 string=0x000000000052DA44 "?"
 *   insn=0x000000000052DA58 string=0x000000000052DA5C "?"
 *   insn=0x000000000052DA60 string=0x000000000052DA64 "8"
 *   insn=0x000000000052DA7C string=0x000000000052DA80 "!$@"
 *   insn=0x000000000052DA80 string=0x000000000052DA84 " "
 *   insn=0x000000000052DA88 string=0x000000000052DA8C " "
 *   insn=0x000000000052DA8C string=0x000000000052DA90 "`"
 *   insn=0x000000000052DA9C string=0x000000000052DAA0 "!$@"
 *   insn=0x000000000052DAA0 string=0x000000000052DAA4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_52D908(
        __int64 a1,
        _QWORD *a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8)
{
  _QWORD *v14; // x0
  int v15; // w1
  _QWORD *v16; // x25
  int v17; // w2
  int v18; // w23
  int v19; // w0
  int v23; // [xsp+98h] [xbp+78h] BYREF
  int v24; // [xsp+9Ch] [xbp+7Ch] BYREF

  sub_52D354(a6 + 208);
  v24 = 0;
  v14 = sub_52D5D4(a1, a2, a3, a4, a5, &v23, 0, 9999, 4u, a6, &v24);
  v16 = v14;
  if ( v24 )
  {
    *a7 |= 4u;
  }
  else
  {
    if ( v23 < 0 )
      v17 = v23 + 100;
    else
      v17 = v23 - 1900;
    *(_DWORD *)(a8 + 20) = v17;
  }
  if ( !v14 || v15 == -1 && v14[2] >= v14[3] && (*(unsigned int (__fastcall **)(_QWORD *))(*v14 + 72LL))(v14) == -1 )
  {
    v16 = 0;
    v18 = 1;
    if ( !a4 )
    {
LABEL_13:
      *a7 |= 2u;
      return v16;
    }
  }
  else
  {
    v18 = 0;
    if ( !a4 )
      return v16;
  }
  v19 = 0;
  if ( (_DWORD)a5 == -1 )
    v19 = a4[2] >= a4[3] && (*(__int64 (__fastcall **)(_QWORD *))(*a4 + 72LL))(a4) == -1;
  if ( v18 == v19 )
    goto LABEL_13;
  return v16;
}

