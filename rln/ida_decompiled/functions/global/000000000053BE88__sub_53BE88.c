/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053BE88
 * Mangled: sub_53BE88
 * Demangled: sub_53BE88
 *
 * Callers: 3
 *   0x000000000053C028  sub_53C028
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053C134  sub_53C134
 *
 * Callees: 4
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 37
 *   insn=0x000000000053BE9C string=0x000000000053BEA0 """
 *   insn=0x000000000053BEAC string=0x000000000053BEB0 "U"
 *   insn=0x000000000053BEB4 string=0x000000000053BECC "@xs"
 *   insn=0x000000000053BEBC string=0x000000000053BEC0 "s"
 *   insn=0x000000000053BEC0 string=0x000000000053BEC4 "?"
 *   insn=0x000000000053BEC8 string=0x000000000053BF18 "b"
 *   insn=0x000000000053BEDC string=0x000000000053BEE0 "A"
 *   insn=0x000000000053BEE0 string=0x000000000053BEE4 "#"
 *   insn=0x000000000053BEE4 string=0x000000000053BEE8 "C"
 *   insn=0x000000000053BEEC string=0x000000000053BEF0 "?"
 *   insn=0x000000000053BEF0 string=0x000000000053BEF4 "!"
 *   insn=0x000000000053BEF8 string=0x000000000053BEFC "!"
 *   insn=0x000000000053BEFC string=0x000000000053BF00 " "
 *   insn=0x000000000053BF08 string=0x000000000053BF0C """
 *   insn=0x000000000053BF20 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000053BF24 string=0x000000000053BF28 """
 *   insn=0x000000000053BF34 string=0x000000000053BF38 "U"
 *   insn=0x000000000053BF3C string=0x000000000053BF54 "@xs"
 *   insn=0x000000000053BF44 string=0x000000000053BF48 "s"
 *   insn=0x000000000053BF48 string=0x000000000053BF4C "?"
 *   insn=0x000000000053BF50 string=0x000000000053BFA0 "b"
 *   insn=0x000000000053BF64 string=0x000000000053BF68 "A"
 *   insn=0x000000000053BF68 string=0x000000000053BF6C "#"
 *   insn=0x000000000053BF6C string=0x000000000053BF70 "C"
 *   insn=0x000000000053BF74 string=0x000000000053BF78 "?"
 *   insn=0x000000000053BF78 string=0x000000000053BF7C "!"
 *   insn=0x000000000053BF80 string=0x000000000053BF84 "!"
 *   insn=0x000000000053BF84 string=0x000000000053BF88 " "
 *   insn=0x000000000053BF90 string=0x000000000053BF94 """
 *   insn=0x000000000053BFB4 string=0x000000000053BFB8 " hs"
 *   insn=0x000000000053BFB8 string=0x000000000053BFBC "`"
 *   insn=0x000000000053BFBC string=0x000000000053BFC8 "s""
 *   insn=0x000000000053BFCC string=0x000000000053BFD0 "A"
 *   insn=0x000000000053BFFC string=0x000000000053C000 "d"
 *   insn=0x000000000053BFFC string=0x00000000001F45E0 "P'"
 *   insn=0x000000000053C000 string=0x00000000001FD590 "0'"
 *   insn=0x000000000053C008 string=0x000000000053C00C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53BE88(_QWORD *a1)
{
  _QWORD *v1; // x2
  unsigned __int64 v3; // x1
  unsigned __int64 i; // x19
  unsigned int *v5; // x0
  unsigned int *v6; // x2
  unsigned int v7; // w1
  _QWORD *v8; // x2
  unsigned __int64 v9; // x1
  unsigned __int64 j; // x19
  unsigned int *v11; // x0
  unsigned int *v12; // x2
  unsigned int v13; // w1
  char *v14; // x1
  __int64 v15; // x19
  void *v16; // x0

  v1 = (_QWORD *)a1[1];
  if ( v1 )
  {
    v3 = a1[2];
    if ( !v3 )
      goto LABEL_14;
    for ( i = 0; i < v3; ++i )
    {
      v5 = (unsigned int *)v1[i];
      if ( v5 )
      {
        if ( &pthread_create )
        {
          v6 = v5 + 2;
          do
            v7 = __ldaxr(v6);
          while ( __stlxr(v7 - 1, v6) );
        }
        else
        {
          v7 = v5[2];
          v5[2] = v7 - 1;
        }
        if ( v7 == 1 )
          (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v5 + 8LL))(v5);
        v1 = (_QWORD *)a1[1];
        v3 = a1[2];
      }
    }
    if ( v1 )
LABEL_14:
      operator delete[](v1);
  }
  v8 = (_QWORD *)a1[3];
  if ( v8 )
  {
    v9 = a1[2];
    if ( !v9 )
      goto LABEL_28;
    for ( j = 0; j < v9; ++j )
    {
      v11 = (unsigned int *)v8[j];
      if ( v11 )
      {
        if ( &pthread_create )
        {
          v12 = v11 + 2;
          do
            v13 = __ldaxr(v12);
          while ( __stlxr(v13 - 1, v12) );
        }
        else
        {
          v13 = v11[2];
          v11[2] = v13 - 1;
        }
        if ( v13 == 1 )
          (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v11 + 8LL))(v11);
        v8 = (_QWORD *)a1[3];
        v9 = a1[2];
      }
    }
    if ( v8 )
LABEL_28:
      operator delete[](v8);
  }
  v14 = (char *)a1[4];
  v15 = 0;
  if ( v14 )
  {
    do
    {
      v16 = *(void **)&v14[v15];
      if ( v16 )
      {
        operator delete[](v16);
        v14 = (char *)a1[4];
      }
      v15 += 8;
    }
    while ( v15 != 48 );
    if ( v14 )
      operator delete[](v14);
  }
}

