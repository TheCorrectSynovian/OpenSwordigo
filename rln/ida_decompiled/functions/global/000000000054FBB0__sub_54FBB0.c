/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054FBB0
 * Mangled: sub_54FBB0
 * Demangled: sub_54FBB0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000054F6AC  sub_54F6AC
 *   0x000000000054F8CC  sub_54F8CC
 *
 * Referenced strings: 18
 *   insn=0x000000000054FC2C string=0x000000000054FC30 "'"
 *   insn=0x000000000054FC34 string=0x000000000054FC38 "T|@"
 *   insn=0x000000000054FC58 string=0x000000000054FC5C "B"
 *   insn=0x000000000054FC58 string=0x000000000054FD30 "B"
 *   insn=0x000000000054FC60 string=0x000000000054FC64 "`"
 *   insn=0x000000000054FC64 string=0x000000000054FC68 "?"
 *   insn=0x000000000054FC7C string=0x000000000054FC80 "`"
 *   insn=0x000000000054FC8C string=0x000000000054FC90 "`"
 *   insn=0x000000000054FC94 string=0x000000000054FC98 "4"
 *   insn=0x000000000054FCC0 string=0x000000000054FCC4 "B"
 *   insn=0x000000000054FCD0 string=0x000000000054FCD4 "7"
 *   insn=0x000000000054FD08 string=0x000000000054FD0C "?"
 *   insn=0x000000000054FD0C string=0x000000000054FD10 "b"
 *   insn=0x000000000054FD10 string=0x000000000054FD14 " "
 *   insn=0x000000000054FD3C string=0x000000000054FD40 "!$@"
 *   insn=0x000000000054FD40 string=0x000000000054FD44 " "
 *   insn=0x000000000054FD50 string=0x000000000054FD54 "!$@"
 *   insn=0x000000000054FD54 string=0x000000000054FD58 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_54FBB0(__int64 a1, _QWORD *a2, int a3, _QWORD *a4, int a5, __int64 a6, _DWORD *a7, __int64 a8)
{
  _QWORD *v14; // x0
  int v15; // w1
  _QWORD *v16; // x24
  int v17; // w2
  int v18; // w23
  int v19; // w0
  int *v21; // x0
  int *v22; // x1
  int v23; // w0
  int v26; // [xsp+98h] [xbp+78h] BYREF
  int v27; // [xsp+9Ch] [xbp+7Ch] BYREF

  sub_54F6AC(a6 + 208);
  v27 = 0;
  v14 = sub_54F8CC(a1, a2, a3, a4, a5, &v26, 0, 9999, 4u, a6, &v27);
  v16 = v14;
  if ( v27 )
  {
    *a7 |= 4u;
    if ( !v14 )
      goto LABEL_11;
  }
  else
  {
    if ( v26 < 0 )
      v17 = v26 + 100;
    else
      v17 = v26 - 1900;
    *(_DWORD *)(a8 + 20) = v17;
    if ( !v14 )
      goto LABEL_11;
  }
  if ( v15 != -1 )
  {
    v18 = 0;
    if ( !a4 )
      return v16;
    goto LABEL_7;
  }
  v22 = (int *)v14[2];
  if ( (unsigned __int64)v22 >= v14[3] )
    v23 = (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 72LL))(v14);
  else
    v23 = *v22;
  if ( v23 != -1 )
  {
    v18 = 0;
    if ( !a4 )
      return v16;
    goto LABEL_7;
  }
LABEL_11:
  v16 = 0;
  v18 = 1;
  if ( !a4 )
  {
LABEL_12:
    *a7 |= 2u;
    return v16;
  }
LABEL_7:
  v19 = a5;
  if ( a5 == -1 )
  {
    v21 = (int *)a4[2];
    if ( (unsigned __int64)v21 >= a4[3] )
      v19 = (*(__int64 (__fastcall **)(_QWORD *))(*a4 + 72LL))(a4);
    else
      v19 = *v21;
  }
  if ( (v19 == -1) == v18 )
    goto LABEL_12;
  return v16;
}

