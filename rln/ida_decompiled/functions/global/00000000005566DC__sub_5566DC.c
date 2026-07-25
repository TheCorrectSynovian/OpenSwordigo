/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005566DC
 * Mangled: sub_5566DC
 * Demangled: sub_5566DC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005513A0  sub_5513A0
 *   0x0000000000555830  sub_555830
 *
 * Referenced strings: 14
 *   insn=0x0000000000556718 string=0x000000000055671C "!"
 *   insn=0x0000000000556748 string=0x000000000055674C "9"
 *   insn=0x0000000000556760 string=0x0000000000556764 "U|@"
 *   insn=0x0000000000556768 string=0x000000000055676C "?"
 *   insn=0x000000000055676C string=0x0000000000556770 "@"
 *   insn=0x00000000005567F8 string=0x00000000005567FC "b"
 *   insn=0x00000000005567FC string=0x0000000000556800 "?"
 *   insn=0x0000000000556804 string=0x0000000000556808 " "
 *   insn=0x0000000000556804 string=0x0000000000556840 "a"
 *   insn=0x0000000000556824 string=0x0000000000556828 "9"
 *   insn=0x0000000000556840 string=0x0000000000556844 "!$@"
 *   insn=0x0000000000556844 string=0x0000000000556848 " "
 *   insn=0x0000000000556854 string=0x0000000000556858 "!$@"
 *   insn=0x0000000000556858 string=0x000000000055685C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5566DC(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        int *a8)
{
  _QWORD *v13; // x0
  _QWORD *v14; // x0
  int v15; // w1
  _QWORD *v16; // x19
  int v17; // w25
  int v18; // w0
  _DWORD *v20; // x0
  int *v21; // x1
  int v22; // w0

  v13 = sub_5513A0(a6 + 208);
  v14 = sub_555830(a1, a2, a3, a4, a5, a6, a7, a8, *(const wchar_t **)(v13[2] + 32LL));
  v16 = v14;
  if ( !v14 )
    goto LABEL_15;
  if ( v15 == -1 )
  {
    v21 = (int *)v14[2];
    if ( (unsigned __int64)v21 >= v14[3] )
      v22 = (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 72LL))(v14);
    else
      v22 = *v21;
    if ( v22 != -1 )
    {
      v17 = 0;
      if ( !a4 )
        return v16;
LABEL_4:
      v18 = a5;
      if ( (_DWORD)a5 != -1 )
        goto LABEL_5;
      goto LABEL_7;
    }
LABEL_15:
    v16 = 0;
    v17 = 1;
    if ( !a4 )
      goto LABEL_9;
    v18 = a5;
    if ( (_DWORD)a5 != -1 )
      goto LABEL_5;
LABEL_7:
    v20 = (_DWORD *)a4[2];
    if ( (unsigned __int64)v20 < a4[3] )
    {
      if ( (*v20 == -1) != v17 )
        return v16;
      goto LABEL_9;
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD *))(*a4 + 72LL))(a4);
LABEL_5:
    if ( (v18 == -1) != v17 )
      return v16;
LABEL_9:
    *a7 |= 2u;
    return v16;
  }
  v17 = 0;
  if ( a4 )
    goto LABEL_4;
  return v16;
}

