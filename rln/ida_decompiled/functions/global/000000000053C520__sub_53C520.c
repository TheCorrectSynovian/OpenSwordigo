/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053C520
 * Mangled: sub_53C520
 * Demangled: sub_53C520
 *
 * Callers: 3
 *   0x000000000053C874  sub_53C874
 *   0x000000000053C900  sub_53C900
 *   0x000000000053CB20  sub_53CB20
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 73
 *   insn=0x000000000053C55C string=0x000000000053C560 "V"
 *   insn=0x000000000053C564 string=0x000000000053C568 "@"
 *   insn=0x000000000053C570 string=0x000000000053C574 "!"
 *   insn=0x000000000053C58C string=0x000000000053C590 "@"
 *   insn=0x000000000053C590 string=0x000000000053C594 "A"
 *   insn=0x000000000053C594 string=0x000000000053C598 "#"
 *   insn=0x000000000053C598 string=0x000000000053C59C "C"
 *   insn=0x000000000053C5A0 string=0x000000000053C5A4 "?"
 *   insn=0x000000000053C5AC string=0x000000000053C5B0 "!"
 *   insn=0x000000000053C5B0 string=0x000000000053C5B4 " "
 *   insn=0x000000000053C5B8 string=0x000000000053C5BC "u"
 *   insn=0x000000000053C5C4 string=0x000000000053C5C8 ""
 *   insn=0x000000000053C5D4 string=0x000000000053C5D8 "s"
 *   insn=0x000000000053C5D8 string=0x000000000053C5DC "?"
 *   insn=0x000000000053C5E4 string=0x000000000053C5E8 "u"
 *   insn=0x000000000053C5EC string=0x000000000053C5F0 "@"
 *   insn=0x000000000053C5FC string=0x000000000053C600 "A"
 *   insn=0x000000000053C600 string=0x000000000053C604 "#"
 *   insn=0x000000000053C604 string=0x000000000053C608 "C"
 *   insn=0x000000000053C60C string=0x000000000053C610 "?"
 *   insn=0x000000000053C618 string=0x000000000053C61C "!"
 *   insn=0x000000000053C61C string=0x000000000053C620 " "
 *   insn=0x000000000053C628 string=0x000000000053C62C """
 *   insn=0x000000000053C668 string=0x00000000001F8570 "0'"
 *   insn=0x000000000053C670 string=0x000000000053C674 """
 *   insn=0x000000000053C674 string=0x000000000053C678 "C"
 *   insn=0x000000000053C680 string=0x000000000053C684 "!h`"
 *   insn=0x000000000053C684 string=0x000000000053C688 "aj "
 *   insn=0x000000000053C690 string=0x000000000053C694 "a"
 *   insn=0x000000000053C698 string=0x000000000053C69C "\t"
 *   insn=0x000000000053C6A4 string=0x000000000053C6A8 "`"
 *   insn=0x000000000053C6A8 string=0x000000000053C6AC "!"
 *   insn=0x000000000053C6B0 string=0x000000000053C6B4 "?"
 *   insn=0x000000000053C6BC string=0x000000000053C6C0 "i"
 *   insn=0x000000000053C6C0 string=0x000000000053C6EC "@"
 *   insn=0x000000000053C6C4 string=0x000000000053C6C8 "d"
 *   insn=0x000000000053C6D0 string=0x000000000053C6D4 "!"
 *   insn=0x000000000053C6D4 string=0x000000000053C6D8 "?"
 *   insn=0x000000000053C6E0 string=0x000000000053C6E4 "B"
 *   insn=0x000000000053C6F4 string=0x000000000053C6F8 "("
 *   insn=0x000000000053C6F8 string=0x000000000053C7FC "B"
 *   insn=0x000000000053C714 string=0x000000000053C718 """
 *   insn=0x000000000053C718 string=0x000000000053C71C "C"
 *   insn=0x000000000053C718 string=0x000000000053C73C "_"
 *   insn=0x000000000053C72C string=0x000000000053C730 "! "
 *   insn=0x000000000053C730 string=0x000000000053C734 "?"
 *   insn=0x000000000053C734 string=0x000000000053C738 "a"
 *   insn=0x000000000053C74C string=0x000000000053C750 "c"
 *   insn=0x000000000053C750 string=0x000000000053C754 "!"
 *   insn=0x000000000053C758 string=0x000000000053C75C "!"
 *   insn=0x000000000053C75C string=0x000000000053C760 "&"
 *   insn=0x000000000053C760 string=0x000000000053C764 "i"
 *   insn=0x000000000053C764 string=0x000000000053C790 "A"
 *   insn=0x000000000053C774 string=0x000000000053C778 "c"
 *   insn=0x000000000053C784 string=0x000000000053C788 "B"
 *   insn=0x000000000053C79C string=0x000000000053C814 "B"
 *   insn=0x000000000053C7A8 string=0x000000000053C7AC "y"
 *   insn=0x000000000053C7AC string=0x000000000053C7B8 "Z"
 *   insn=0x000000000053C7B4 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000053C7BC string=0x000000000053C7C0 "V"
 *   insn=0x000000000053C7DC string=0x000000000053C7E0 "!"
 *   insn=0x000000000053C7EC string=0x000000000053C7F0 """
 *   insn=0x000000000053C7F4 string=0x000000000053C7F8 "k"
 *   insn=0x000000000053C81C string=0x000000000053C820 "\t"
 *   insn=0x000000000053C82C string=0x00000000001F45E0 "P'"
 *   insn=0x000000000053C83C string=0x000000000053C840 "T"
 *   insn=0x000000000053C840 string=0x000000000053C844 "b"
 *   insn=0x000000000053C840 string=0x00000000001FD590 "0'"
 *   insn=0x000000000053C848 string=0x000000000053C84C "Q"
 *   insn=0x000000000053C84C string=0x000000000053C850 "Z"
 *   insn=0x000000000053C854 string=0x000000000053C858 "N"
 *   insn=0x000000000053C860 string=0x000000000053C864 "?"
 *   insn=0x000000000053C86C string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall sub_53C520(_DWORD *result, __int64 *a2, _DWORD *a3)
{
  _QWORD *v3; // x20
  unsigned __int64 v5; // x24
  unsigned int *v6; // x0
  unsigned int v7; // w1
  _DWORD **v8; // x19
  unsigned int *v9; // x2
  unsigned int v10; // w1
  unsigned __int64 v11; // x1
  unsigned __int64 i; // x19
  unsigned int *v13; // x2
  unsigned int v14; // w1
  unsigned __int64 v15; // x23
  unsigned __int64 v16; // x0
  void *v17; // x25
  __int64 v18; // x19
  unsigned __int64 v19; // x2
  __int64 v20; // x0
  __int64 v21; // x3
  unsigned __int64 v22; // x0
  __int64 v23; // x5
  _OWORD *v24; // x4
  unsigned __int64 v25; // x1
  __int64 v26; // x0
  unsigned __int64 v27; // x0
  void *v28; // x26
  __int64 v29; // x0
  unsigned __int64 v30; // x2
  __int64 v31; // x1
  unsigned __int64 v32; // x4
  unsigned __int64 v33; // x1
  __int64 v34; // x6
  _OWORD *v35; // x5
  unsigned __int64 v36; // x3
  unsigned __int64 v37; // x1
  unsigned __int64 v38; // x2
  unsigned __int64 v39; // x2

  if ( !a3 )
    return result;
  v3 = result;
  v5 = sub_53C4D0(a2);
  if ( v5 <= v3[2] - 1LL )
    goto LABEL_3;
  v15 = v5 + 4;
  v16 = 8 * (v5 + 4);
  if ( v5 + 4 > 0xFE0000000000000LL )
    v16 = -1;
  v17 = (void *)v3[1];
  v18 = operator new[](v16);
  v19 = v3[2];
  if ( v19 )
  {
    v20 = 0;
    do
    {
      *(_QWORD *)(v18 + v20) = *(_QWORD *)(v3[1] + v20);
      v20 += 8;
    }
    while ( v20 != 8 * v19 );
  }
  if ( v15 > v19 )
  {
    v21 = v15 - v19;
    v22 = ((v15 - v19 - 2) >> 1) + 1;
    v23 = 2 * v22;
    if ( v5 + 3 - v19 <= 2 )
      goto LABEL_56;
    v24 = (_OWORD *)(v18 + 8 * v19);
    v25 = 0;
    do
    {
      *v24++ = 0u;
      ++v25;
    }
    while ( v25 < v22 );
    v19 += v23;
    if ( v21 != v23 )
    {
LABEL_56:
      v26 = v19 + 1;
      *(_QWORD *)(v18 + 8 * v19) = 0;
      if ( v15 > v19 + 1 )
      {
        v38 = v19 + 2;
        *(_QWORD *)(v18 + 8 * v26) = 0;
        if ( v15 > v38 )
          *(_QWORD *)(v18 + 8 * v38) = 0;
      }
    }
  }
  v27 = 8 * v15;
  v28 = (void *)v3[3];
  if ( v15 > 0xFE0000000000000LL )
    v27 = -1;
  v29 = operator new[](v27);
  v30 = v3[2];
  if ( v30 )
  {
    v31 = 0;
    do
    {
      *(_QWORD *)(v29 + v31) = *(_QWORD *)(v3[3] + v31);
      v31 += 8;
    }
    while ( v31 != 8 * v30 );
  }
  if ( v30 < v15 )
  {
    v32 = v15 - v30;
    v33 = ((v15 - v30 - 2) >> 1) + 1;
    v34 = 2 * v33;
    if ( v5 + 3 - v30 <= 2 )
      goto LABEL_57;
    v35 = (_OWORD *)(v29 + 8 * v30);
    v36 = 0;
    do
    {
      *v35++ = 0u;
      ++v36;
    }
    while ( v36 < v33 );
    v30 += v34;
    if ( v34 != v32 )
    {
LABEL_57:
      v37 = v30 + 1;
      *(_QWORD *)(v29 + 8 * v30) = 0;
      if ( v15 > v30 + 1 )
      {
        v39 = v30 + 2;
        *(_QWORD *)(v29 + 8 * v37) = 0;
        if ( v15 > v39 )
          *(_QWORD *)(v29 + 8 * v39) = 0;
      }
    }
  }
  v3[2] = v15;
  v3[1] = v18;
  v3[3] = v29;
  if ( v17 )
    operator delete[](v17);
  if ( v28 )
  {
    operator delete[](v28);
    if ( !&pthread_create )
    {
LABEL_48:
      v8 = (_DWORD **)(v3[1] + 8 * v5);
      result = *v8;
      ++a3[2];
      if ( result )
      {
        v10 = result[2];
        result[2] = v10 - 1;
        goto LABEL_8;
      }
      goto LABEL_10;
    }
  }
  else
  {
LABEL_3:
    if ( !&pthread_create )
      goto LABEL_48;
  }
  v6 = a3 + 2;
  do
    v7 = __ldaxr(v6);
  while ( __stlxr(v7 + 1, v6) );
  v8 = (_DWORD **)(v3[1] + 8 * v5);
  result = *v8;
  v9 = *v8 + 2;
  if ( *v8 )
  {
    do
      v10 = __ldaxr(v9);
    while ( __stlxr(v10 - 1, v9) );
LABEL_8:
    if ( v10 == 1 )
      result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
LABEL_10:
  v11 = v3[2];
  *v8 = a3;
  if ( v11 )
  {
    for ( i = 0; i < v11; ++i )
    {
      result = *(_DWORD **)(v3[3] + 8 * i);
      if ( result )
      {
        if ( &pthread_create )
        {
          v13 = result + 2;
          do
            v14 = __ldaxr(v13);
          while ( __stlxr(v14 - 1, v13) );
        }
        else
        {
          v14 = result[2];
          result[2] = v14 - 1;
        }
        if ( v14 == 1 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
        result = (_DWORD *)v3[3];
        v11 = v3[2];
        *(_QWORD *)&result[2 * i] = 0;
      }
    }
  }
  return result;
}

