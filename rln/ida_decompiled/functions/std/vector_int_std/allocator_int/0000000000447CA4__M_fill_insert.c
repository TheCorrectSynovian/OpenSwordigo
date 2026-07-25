/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000447CA4
 * Mangled: _ZNSt6vectorIiSaIiEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPiS1_EEmRKi
 * Demangled: std::vector<int,std::allocator<int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,ulong,int const&)
 *
 * Callers: 1
 *   0x00000000001F57C0  std::vector<int,std::allocator<int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,ulong,int const&)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 72
 *   insn=0x0000000000447CD0 string=0x0000000000447CD4 ""
 *   insn=0x0000000000447CD4 string=0x0000000000447CD8 ""
 *   insn=0x0000000000447CDC string=0x0000000000447CE0 """
 *   insn=0x0000000000447CE8 string=0x0000000000447CEC "\t"
 *   insn=0x0000000000447CF0 string=0x0000000000447CF4 "\n"
 *   insn=0x0000000000447CF4 string=0x0000000000447CF8 "_"
 *   insn=0x0000000000447CFC string=0x0000000000447D00 "?"
 *   insn=0x0000000000447CFC string=0x0000000000447F9C "@\n"
 *   insn=0x0000000000447D04 string=0x0000000000447D08 "I"
 *   insn=0x0000000000447D08 string=0x0000000000447D0C "+"
 *   insn=0x0000000000447D18 string=0x0000000000447D1C "J"
 *   insn=0x0000000000447D1C string=0x0000000000447D20 "_"
 *   insn=0x0000000000447D28 string=0x0000000000447D2C ""
 *   insn=0x0000000000447D34 string=0x0000000000447D38 "*"
 *   insn=0x0000000000447D38 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000447D40 string=0x0000000000447D9C "i"
 *   insn=0x0000000000447D48 string=0x0000000000447D4C "W"
 *   insn=0x0000000000447D50 string=0x0000000000447D54 "I"
 *   insn=0x0000000000447D70 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000447D74 string=0x0000000000447D78 "9"
 *   insn=0x0000000000447D78 string=0x0000000000447E5C "\t"
 *   insn=0x0000000000447D7C string=0x0000000000447D80 "`"
 *   insn=0x0000000000447D84 string=0x0000000000447D88 "B\n"
 *   insn=0x0000000000447D88 string=0x0000000000447ED0 ""
 *   insn=0x0000000000447D90 string=0x0000000000447D94 "["
 *   insn=0x0000000000447D94 string=0x0000000000447F00 ")"
 *   insn=0x0000000000447DA0 string=0x0000000000447DA4 ")"
 *   insn=0x0000000000447DB8 string=0x0000000000447DEC ")"
 *   insn=0x0000000000447DEC string=0x0000000000447DF0 "HE"
 *   insn=0x0000000000447DF8 string=0x0000000000447DFC "b"
 *   insn=0x0000000000447DFC string=0x0000000000447E00 "Y"
 *   insn=0x0000000000447E0C string=0x0000000000447E10 "h"
 *   insn=0x0000000000447E18 string=0x0000000000447E1C "6\t"
 *   insn=0x0000000000447E20 string=0x0000000000447E24 "Y"
 *   insn=0x0000000000447E30 string=0x0000000000447E34 "_"
 *   insn=0x0000000000447E38 string=0x0000000000447E3C "w"
 *   insn=0x0000000000447E40 string=0x0000000000447E44 ""
 *   insn=0x0000000000447E44 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000447E50 string=0x0000000000447E54 "L"
 *   insn=0x0000000000447E70 string=0x0000000000447E74 "O"
 *   insn=0x0000000000447E78 string=0x0000000000447E7C ""
 *   insn=0x0000000000447E7C string=0x0000000000447E80 "\t"
 *   insn=0x0000000000447E80 string=0x0000000000447E84 "?!"
 *   insn=0x0000000000447E8C string=0x0000000000447E90 "*"
 *   insn=0x0000000000447E8C string=0x0000000000447EBC "i"
 *   insn=0x0000000000447E90 string=0x0000000000447E94 " "
 *   insn=0x0000000000447E94 string=0x0000000000447E98 "h\n\n"
 *   insn=0x0000000000447E98 string=0x0000000000447E9C "kB"
 *   insn=0x0000000000447EA0 string=0x0000000000447EA4 "`"
 *   insn=0x0000000000447EA8 string=0x0000000000447EAC "k"
 *   insn=0x0000000000447EB0 string=0x0000000000447EB4 "?"
 *   insn=0x0000000000447EB4 string=0x0000000000447EB8 "`"
 *   insn=0x0000000000447EC0 string=0x0000000000447EC4 "?"
 *   insn=0x0000000000447EC8 string=0x0000000000447ECC "."
 *   insn=0x0000000000447ED0 string=0x0000000000447ED4 " "
 *   insn=0x0000000000447ED4 string=0x0000000000447ED8 "\t"
 *   insn=0x0000000000447F00 string=0x0000000000447F04 "YE"
 *   insn=0x0000000000447F14 string=0x0000000000447F24 "\t"
 *   insn=0x0000000000447F18 string=0x0000000000447F1C "%"
 *   insn=0x0000000000447F30 string=0x0000000000447F34 ""
 *   insn=0x0000000000447F34 string=0x0000000000447F38 ""
 *   insn=0x0000000000447F38 string=0x0000000000447F3C "\t"
 *   insn=0x0000000000447F3C string=0x0000000000447F40 "?!"
 *   insn=0x0000000000447F48 string=0x0000000000447F4C "*"
 *   insn=0x0000000000447F4C string=0x0000000000447F50 " "
 *   insn=0x0000000000447F50 string=0x0000000000447F54 "h\n\n"
 *   insn=0x0000000000447F54 string=0x0000000000447F58 "kB"
 *   insn=0x0000000000447F5C string=0x0000000000447F60 "`"
 *   insn=0x0000000000447F64 string=0x0000000000447F68 "k"
 *   insn=0x0000000000447F6C string=0x0000000000447F70 "?"
 *   insn=0x0000000000447F9C string=0x0000000000447FA4 "ju"
 *   insn=0x0000000000447F9C string=0x000000000059299C "vector::_M_fill_insert"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<int>::_M_fill_insert(__int64 a1, char *a2, unsigned __int64 a3, unsigned int *a4)
{
  int32x4_t *v8; // x21
  _BYTE *v9; // x25
  unsigned __int64 v10; // x9
  __int64 v11; // x10
  bool v12; // cf
  unsigned __int64 v13; // x9
  int v14; // w10
  unsigned __int64 v15; // x24
  char *v16; // x21
  unsigned int v17; // w25
  size_t v18; // x2
  unsigned __int64 v19; // x23
  __int64 v20; // x23
  unsigned __int64 v21; // x8
  unsigned __int64 v22; // x9
  unsigned int *v23; // x10
  unsigned int v24; // w8
  int32x4_t *v25; // x12
  unsigned __int64 v26; // x9
  unsigned int *v27; // x10
  int32x4_t v28; // q0
  int32x4_t *v29; // x12
  unsigned __int64 v30; // x13
  _BYTE *v31; // x23
  signed __int64 v32; // x2
  __int64 v33; // x25
  _BYTE *v34; // x8
  char *v35; // x22
  __int64 v36; // x25
  unsigned __int64 v37; // x9
  char *v38; // x8
  int32x4_t v39; // q0
  int32x4_t *v40; // x11
  __int64 v41; // x12
  int32x4_t v42; // q0
  int32x4_t *v43; // x12
  unsigned __int64 v44; // x13
  char *v45; // x0
  unsigned __int64 v46; // x9
  char *v47; // x8
  int32x4_t v48; // q0
  int32x4_t *v49; // x11
  __int64 v50; // x12

  if ( !a3 )
    return;
  v8 = *(int32x4_t **)(a1 + 8);
  if ( (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v8) >> 2 < a3 )
  {
    v9 = *(_BYTE **)a1;
    v10 = ((__int64)v8 - *(_QWORD *)a1) >> 2;
    if ( 0x3FFFFFFFFFFFFFFFLL - v10 < a3 )
      sub_56554C("vector::_M_fill_insert");
    if ( v10 >= a3 )
      v11 = ((__int64)v8 - *(_QWORD *)a1) >> 2;
    else
      v11 = a3;
    v12 = __CFADD__(v11, v10);
    v13 = v11 + v10;
    v14 = v12;
    if ( v14 | (v13 >> 62 != 0) )
      v15 = 0x3FFFFFFFFFFFFFFFLL;
    else
      v15 = v13;
    if ( v15 )
    {
      if ( v15 >> 62 )
        sub_565294(a1, a2, a3);
      v16 = (char *)operator new(4 * v15);
    }
    else
    {
      v16 = 0;
    }
    v24 = *a4;
    v25 = (int32x4_t *)&v16[4 * ((a2 - v9) >> 2)];
    v26 = a3;
    v27 = (unsigned int *)v25;
    if ( a3 < 8 )
      goto LABEL_60;
    v28 = vdupq_n_s32(v24);
    v26 = a3 - (a3 & 0xFFFFFFFFFFFFFFF8LL);
    v27 = (unsigned int *)v25 + (a3 & 0xFFFFFFFFFFFFFFF8LL);
    v29 = v25 + 1;
    v30 = a3 & 0xFFFFFFFFFFFFFFF8LL;
    do
    {
      v29[-1] = v28;
      *v29 = v28;
      v30 -= 8LL;
      v29 += 2;
    }
    while ( v30 );
    if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) != a3 )
    {
LABEL_60:
      do
      {
        --v26;
        *v27++ = v24;
      }
      while ( v26 );
    }
    v31 = *(_BYTE **)a1;
    v32 = (signed __int64)&a2[-*(_QWORD *)a1];
    v33 = v32 >> 2;
    if ( a2 != *(char **)a1 )
      memmove(v16, *(const void **)a1, v32);
    v34 = *(_BYTE **)(a1 + 8);
    v35 = &v16[4 * v33 + 4 * a3];
    v36 = (v34 - a2) >> 2;
    if ( v34 != a2 )
      memmove(v35, a2, v34 - a2);
    if ( v31 )
      operator delete(v31);
    *(_QWORD *)a1 = v16;
    *(_QWORD *)(a1 + 8) = &v35[4 * v36];
    *(_QWORD *)(a1 + 16) = &v16[4 * v15];
    return;
  }
  v17 = *a4;
  v18 = (char *)v8 - a2;
  v19 = ((char *)v8 - a2) >> 2;
  if ( v19 > a3 )
  {
    v20 = 4 * a3;
    if ( 4 * a3 )
      memmove(*(void **)(a1 + 8), (char *)v8 - 4 * a3, 4 * a3);
    *(_QWORD *)(a1 + 8) += 4 * a3;
    if ( (char *)v8 - 4 * a3 != a2 )
      memmove(&a2[4 * a3], a2, (char *)v8 - 4 * a3 - a2);
    v37 = ((unsigned __int64)(v20 - 4) >> 2) + 1;
    v38 = a2;
    if ( v37 < 8 )
      goto LABEL_61;
    v39 = vdupq_n_s32(v17);
    v38 = &a2[4 * (v37 & 0x7FFFFFFFFFFFFFF8LL)];
    v40 = (int32x4_t *)(a2 + 16);
    v41 = v37 & 0x7FFFFFFFFFFFFFF8LL;
    do
    {
      v40[-1] = v39;
      *v40 = v39;
      v41 -= 8;
      v40 += 2;
    }
    while ( v41 );
    if ( v37 != (v37 & 0x7FFFFFFFFFFFFFF8LL) )
    {
LABEL_61:
      do
      {
        *(_DWORD *)v38 = v17;
        v38 += 4;
      }
      while ( &a2[v20] != v38 );
    }
    return;
  }
  v21 = a3 - v19;
  if ( a3 != v19 )
  {
    if ( v21 >= 8 )
    {
      v42 = vdupq_n_s32(v17);
      v22 = v21 - (v21 & 0xFFFFFFFFFFFFFFF8LL);
      v23 = (unsigned int *)v8 + (v21 & 0xFFFFFFFFFFFFFFF8LL);
      v43 = v8 + 1;
      v44 = v21 & 0xFFFFFFFFFFFFFFF8LL;
      do
      {
        v43[-1] = v42;
        *v43 = v42;
        v44 -= 8LL;
        v43 += 2;
      }
      while ( v44 );
      if ( v21 == (v21 & 0xFFFFFFFFFFFFFFF8LL) )
        goto LABEL_47;
    }
    else
    {
      v22 = a3 - v19;
      v23 = *(unsigned int **)(a1 + 8);
    }
    do
    {
      --v22;
      *v23++ = v17;
    }
    while ( v22 );
  }
LABEL_47:
  v45 = (char *)v8 + 4 * v21;
  *(_QWORD *)(a1 + 8) = v45;
  if ( v18 )
  {
    memmove(v45, a2, v18);
    v45 = *(char **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = &v45[4 * v19];
  if ( v8 != (int32x4_t *)a2 )
  {
    v46 = ((unsigned __int64)((char *)v8 - a2 - 4) >> 2) + 1;
    v47 = a2;
    if ( v46 < 8 )
      goto LABEL_62;
    v48 = vdupq_n_s32(v17);
    v47 = &a2[4 * (v46 & 0x7FFFFFFFFFFFFFF8LL)];
    v49 = (int32x4_t *)(a2 + 16);
    v50 = v46 & 0x7FFFFFFFFFFFFFF8LL;
    do
    {
      v49[-1] = v48;
      *v49 = v48;
      v50 -= 8;
      v49 += 2;
    }
    while ( v50 );
    if ( v46 != (v46 & 0x7FFFFFFFFFFFFFF8LL) )
    {
LABEL_62:
      do
      {
        *(_DWORD *)v47 = v17;
        v47 += 4;
      }
      while ( v8 != (int32x4_t *)v47 );
    }
  }
}

