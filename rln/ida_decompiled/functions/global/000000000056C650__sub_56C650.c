/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C650
 * Mangled: sub_56C650
 * Demangled: sub_56C650
 *
 * Callers: 33
 *   0x0000000000528E58  sub_528E58
 *   0x000000000053E27C  sub_53E27C
 *   0x0000000000547FBC  sub_547FBC
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *   0x000000000056C84C  sub_56C84C
 *   0x000000000056C8A8  sub_56C8A8
 *   0x000000000056C904  sub_56C904
 *   0x000000000056C918  sub_56C918
 *   0x000000000056C978  sub_56C978
 *   0x000000000056C9BC  sub_56C9BC
 *   0x000000000056CA1C  sub_56CA1C
 *   0x000000000056CAB8  sub_56CAB8
 *   0x000000000056CB34  sub_56CB34
 *   0x000000000056CD30  sub_56CD30
 *   0x000000000056CFC0  sub_56CFC0
 *   0x000000000056D004  sub_56D004
 *   0x000000000056D064  sub_56D064
 *   0x000000000056D0D0  sub_56D0D0
 *   0x000000000056D130  sub_56D130
 *   0x000000000056D194  sub_56D194
 *   0x000000000056D1F8  sub_56D1F8
 *   0x000000000056D26C  sub_56D26C
 *   0x000000000056D2D4  sub_56D2D4
 *   0x000000000056D350  sub_56D350
 *   0x000000000056D390  sub_56D390
 *   0x000000000056D400  sub_56D400
 *   0x000000000056D490  sub_56D490
 *   0x000000000056D54C  sub_56D54C
 *   0x000000000056D5F4  sub_56D5F4
 *   0x000000000056D6C0  sub_56D6C0
 *   0x000000000056DA58  sub_56DA58
 *   0x000000000056E994  sub_56E994
 *
 * Callees: 5
 *   0x00000000001F68E0  .wmemmove
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000056C5B8  sub_56C5B8
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 29
 *   insn=0x000000000056C660 string=0x000000000056C664 "u"
 *   insn=0x000000000056C684 string=0x000000000056C688 "S"
 *   insn=0x000000000056C68C string=0x000000000056C690 "s"
 *   insn=0x000000000056C6CC string=0x000000000056C6D0 "A"
 *   insn=0x000000000056C6D8 string=0x000000000056C6DC "s"
 *   insn=0x000000000056C6DC string=0x000000000056C6E0 "c"
 *   insn=0x000000000056C6E8 string=0x000000000056C6EC "c"
 *   insn=0x000000000056C6EC string=0x000000000056C6F0 "c`"
 *   insn=0x000000000056C6F0 string=0x000000000056C6F4 "A"
 *   insn=0x000000000056C6FC string=0x000000000056C700 "@xt"
 *   insn=0x000000000056C708 string=0x000000000056C70C "@`"
 *   insn=0x000000000056C72C string=0x000000000056C730 " "
 *   insn=0x000000000056C758 string=0x000000000056C75C " "
 *   insn=0x000000000056C760 string=0x000000000056C764 "c"
 *   insn=0x000000000056C780 string=0x000000000056C784 "W("
 *   insn=0x000000000056C784 string=0x00000000001F68E0 "0'"
 *   insn=0x000000000056C7AC string=0x000000000056C7B0 "!"
 *   insn=0x000000000056C80C string=0x000000000056C810 "!<G"
 *   insn=0x000000000056C810 string=0x000000000056C814 "A"
 *   insn=0x000000000056C814 string=0x000000000056C818 "B "
 *   insn=0x000000000056C814 string=0x000000000056C83C "A"
 *   insn=0x000000000056C818 string=0x000000000056C81C "A"
 *   insn=0x000000000056C81C string=0x000000000056C820 "#"
 *   insn=0x000000000056C820 string=0x000000000056C824 "C"
 *   insn=0x000000000056C828 string=0x000000000056C82C "?"
 *   insn=0x000000000056C82C string=0x000000000056C830 "l"
 *   insn=0x000000000056C834 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000056C83C string=0x000000000056C840 "#"
 *   insn=0x000000000056C840 string=0x000000000056C844 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t *__fastcall sub_56C650(const wchar_t **a1, size_t a2, __int64 a3, __int64 a4)
{
  const wchar_t *v4; // x4
  __int64 v6; // x21
  __int64 v7; // x2
  unsigned __int64 v9; // x1
  unsigned __int64 v10; // x21
  size_t v12; // x19
  __int64 v13; // x0
  __int64 v14; // x24
  __int64 v15; // x3
  wchar_t *v16; // x0
  const wchar_t *v17; // x2
  const wchar_t *v18; // x25
  size_t v19; // x3
  size_t v20; // x20
  __int64 v21; // x3
  wchar_t *v22; // x0
  const wchar_t *result; // x0
  size_t v24; // x3
  unsigned int *v25; // x2
  int v26; // w1

  v4 = *a1;
  v6 = a4 - a3;
  v7 = *((_QWORD *)*a1 - 3);
  v9 = *((_QWORD *)*a1 - 2);
  v10 = v6 + v7;
  v12 = v7 - a2 - a3;
  if ( v10 <= v9 && *(v4 - 2) <= 0 )
  {
    if ( a3 != a4 && v12 )
    {
      v24 = a4 + a2;
      if ( v12 == 1 )
      {
        v4[v24] = v4[a3 + a2];
      }
      else
      {
        wmemmove((wchar_t *)&v4[v24], &v4[a3 + a2], v12);
        v4 = *a1;
      }
    }
    result = v4 - 6;
    if ( v4 - 6 != (const wchar_t *)&qword_6FD300 )
      goto LABEL_11;
    return result;
  }
  v13 = sub_56C5B8(v10, v9);
  v14 = v13;
  v15 = a4;
  if ( !a2 )
  {
    v18 = (const wchar_t *)(v13 + 24);
    v17 = *a1;
    if ( !v12 )
      goto LABEL_9;
    goto LABEL_7;
  }
  v16 = (wchar_t *)(v13 + 24);
  v17 = *a1;
  v18 = (const wchar_t *)(v14 + 24);
  if ( a2 == 1 )
  {
    *(_DWORD *)(v14 + 24) = *v17;
  }
  else
  {
    wmemcpy(v16, *a1, a2);
    v17 = *a1;
    v15 = a4;
  }
  if ( v12 )
  {
LABEL_7:
    v19 = v15 + a2;
    v20 = a3 + a2;
    v21 = 4 * v19 + 24;
    if ( v12 == 1 )
    {
      *(_DWORD *)(v14 + v21) = v17[v20];
    }
    else
    {
      wmemcpy((wchar_t *)(v14 + v21), &v17[v20], v12);
      v17 = *a1;
    }
  }
LABEL_9:
  v22 = (wchar_t *)(v17 - 6);
  if ( v17 - 6 != (const wchar_t *)&qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v25 = (unsigned int *)(v17 - 2);
      do
        v26 = __ldaxr(v25);
      while ( __stlxr(v26 - 1, v25) );
    }
    else
    {
      v26 = *(v17 - 2);
      *((_DWORD *)v17 - 2) = v26 - 1;
    }
    if ( v26 <= 0 )
      operator delete(v22);
  }
  v4 = v18;
  result = v18 - 6;
  *a1 = v18;
  if ( v18 - 6 != (const wchar_t *)&qword_6FD300 )
  {
LABEL_11:
    *((_QWORD *)v4 - 3) = v10;
    *((_DWORD *)v4 - 2) = 0;
    v4[v10] = 0;
  }
  return result;
}

