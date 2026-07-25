/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000443BA0
 * Mangled: _ZN5Caver10FastVectorISsE6ResizeEi
 * Demangled: Caver::FastVector<std::string>::Resize(int)
 *
 * Callers: 2
 *   0x00000000001F95B0  Caver::FastVector<std::string>::Resize(int)
 *   0x0000000000443B68  Caver::TabView::~TabView()
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 75
 *   insn=0x0000000000443BBC string=0x0000000000443BC0 "V"
 *   insn=0x0000000000443BD0 string=0x0000000000443BD4 "u"
 *   insn=0x0000000000443BD8 string=0x0000000000443BDC "m"
 *   insn=0x0000000000443BDC string=0x0000000000443BE8 "T"
 *   insn=0x0000000000443BE0 string=0x0000000000443BE4 "t"
 *   insn=0x0000000000443BE8 string=0x0000000000443BEC "h"
 *   insn=0x0000000000443BE8 string=0x0000000000443D70 "u"
 *   insn=0x0000000000443BFC string=0x0000000000443C00 "("
 *   insn=0x0000000000443C0C string=0x0000000000443C10 "\t#"
 *   insn=0x0000000000443C14 string=0x0000000000443C18 ""
 *   insn=0x0000000000443C1C string=0x0000000000443C20 " "
 *   insn=0x0000000000443C20 string=0x0000000000443C24 "S"
 *   insn=0x0000000000443C24 string=0x0000000000443C28 "#"
 *   insn=0x0000000000443C24 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000443C2C string=0x0000000000443C30 ""
 *   insn=0x0000000000443C34 string=0x0000000000443C38 ""
 *   insn=0x0000000000443C44 string=0x0000000000443C80 "\n"
 *   insn=0x0000000000443C4C string=0x0000000000443C50 "\n"
 *   insn=0x0000000000443C50 string=0x0000000000443C54 "`"
 *   insn=0x0000000000443C64 string=0x0000000000443C68 "`"
 *   insn=0x0000000000443C6C string=0x0000000000443C70 "k"
 *   insn=0x0000000000443C78 string=0x0000000000443C7C " "
 *   insn=0x0000000000443C7C string=0x0000000000443CA0 "x"
 *   insn=0x0000000000443C80 string=0x0000000000443C84 "J"
 *   insn=0x0000000000443C84 string=0x0000000000443C88 "(!"
 *   insn=0x0000000000443C88 string=0x0000000000443C8C "\t"
 *   insn=0x0000000000443C8C string=0x0000000000443C90 "Ja"
 *   insn=0x0000000000443C90 string=0x0000000000443C94 "\n"
 *   insn=0x0000000000443C94 string=0x0000000000443C98 "?"
 *   insn=0x0000000000443CA4 string=0x0000000000443D64 "t"
 *   insn=0x0000000000443CBC string=0x0000000000443CC0 "z"
 *   insn=0x0000000000443CC0 string=0x0000000000443CC4 "h"
 *   insn=0x0000000000443CC4 string=0x0000000000443CC8 "x"
 *   insn=0x0000000000443CC8 string=0x0000000000443CCC "9"
 *   insn=0x0000000000443CD0 string=0x0000000000443CD4 "?"
 *   insn=0x0000000000443CD4 string=0x0000000000443CD8 ""
 *   insn=0x0000000000443CD8 string=0x0000000000443CDC "X"
 *   insn=0x0000000000443CEC string=0x0000000000443CF0 ""
 *   insn=0x0000000000443CF0 string=0x0000000000443CF4 "Z"
 *   insn=0x0000000000443CF4 string=0x0000000000443CF8 "{?G"
 *   insn=0x0000000000443CFC string=0x0000000000443D00 "("
 *   insn=0x0000000000443D0C string=0x0000000000443D10 "?"
 *   insn=0x0000000000443D0C string=0x0000000000443D1C "!"
 *   insn=0x0000000000443D10 string=0x0000000000443D14 "a"
 *   insn=0x0000000000443D20 string=0x0000000000443D24 "\t"
 *   insn=0x0000000000443D20 string=0x0000000000443D38 "\t"
 *   insn=0x0000000000443D24 string=0x0000000000443D28 "*"
 *   insn=0x0000000000443D28 string=0x0000000000443D2C "\n"
 *   insn=0x0000000000443D34 string=0x0000000000443D44 "?"
 *   insn=0x0000000000443D38 string=0x0000000000443D3C "*"
 *   insn=0x0000000000443D3C string=0x0000000000443D40 "\n"
 *   insn=0x0000000000443D44 string=0x0000000000443D48 "L"
 *   insn=0x0000000000443D50 string=0x0000000000443D54 "?"
 *   insn=0x0000000000443D54 string=0x0000000000443D58 "A"
 *   insn=0x0000000000443D60 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000443D64 string=0x0000000000443D68 "w"
 *   insn=0x0000000000443D68 string=0x0000000000443D6C "&"
 *   insn=0x0000000000443D70 string=0x0000000000443D74 "u"
 *   insn=0x0000000000443D8C string=0x0000000000443D90 "9?G"
 *   insn=0x0000000000443DA4 string=0x0000000000443DB4 "!"
 *   insn=0x0000000000443DA8 string=0x0000000000443DAC "a"
 *   insn=0x0000000000443DB8 string=0x0000000000443DBC "\t"
 *   insn=0x0000000000443DB8 string=0x0000000000443DD0 "\t"
 *   insn=0x0000000000443DBC string=0x0000000000443DC0 "*"
 *   insn=0x0000000000443DC0 string=0x0000000000443DC4 "\n"
 *   insn=0x0000000000443DCC string=0x0000000000443DDC "?"
 *   insn=0x0000000000443DD0 string=0x0000000000443DD4 "*"
 *   insn=0x0000000000443DD4 string=0x0000000000443DD8 "\n"
 *   insn=0x0000000000443DDC string=0x0000000000443DE0 "L"
 *   insn=0x0000000000443DE4 string=0x0000000000443DE8 "o"
 *   insn=0x0000000000443DEC string=0x0000000000443DF0 "A"
 *   insn=0x0000000000443DF4 string=0x0000000000443DF8 "Z"
 *   insn=0x0000000000443E0C string=0x0000000000443E10 "!"
 *   insn=0x0000000000443E10 string=0x0000000000443E34 "'"
 *   insn=0x0000000000443E34 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<std::string>::Resize(int *a1, int a2)
{
  int v4; // w21
  unsigned __int64 v5; // x24
  unsigned __int64 v6; // x0
  _QWORD *v7; // x0
  _QWORD *v8; // x23
  unsigned __int64 v9; // x8
  _QWORD *v10; // x9
  int64x2_t *v11; // x11
  int64x2_t v12; // q0
  __int64 v13; // x12
  _QWORD *v14; // x8
  __int64 v15; // x24
  __int64 v16; // x21
  __int64 v17; // x25
  __int64 v18; // x8
  __int64 v19; // x25
  __int64 v20; // x8
  __int64 v21; // t1
  void *v22; // x0
  unsigned int *v23; // x8
  int v24; // w9
  __int64 v25; // x21
  __int64 v26; // x8
  __int64 v27; // x23
  __int64 v28; // x8
  __int64 v29; // t1
  void *v30; // x0
  unsigned int *v31; // x8
  int v32; // w9

  _ReadStatusReg(TPIDR_EL0);
  v4 = *a1;
  if ( *a1 > a2 )
  {
    v4 = a2;
    *a1 = a2;
  }
  if ( a2 )
  {
    if ( a1[1] != a2 )
    {
      v5 = a2;
      if ( !is_mul_ok(a2, 8u) || v5 >= 0x1FFFFFFFFFFFFFFFLL )
        v6 = -1;
      else
        v6 = v5 * 8 + 8;
      v7 = (_QWORD *)operator new[](v6);
      *v7 = a2;
      v8 = v7 + 1;
      v9 = ((v5 * 8 - 8) >> 3) + 1;
      v10 = v7 + 1;
      if ( v9 < 4 )
        goto LABEL_12;
      v11 = (int64x2_t *)(v7 + 3);
      v10 = &v8[v9 & 0x3FFFFFFFFFFFFFFCLL];
      v12 = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
      v13 = v9 & 0x3FFFFFFFFFFFFFFCLL;
      do
      {
        v11[-1] = v12;
        *v11 = v12;
        v13 -= 4;
        v11 += 2;
      }
      while ( v13 );
      if ( v9 != (v9 & 0x3FFFFFFFFFFFFFFCLL) )
      {
LABEL_12:
        v14 = v10 - 1;
        do
        {
          v14[1] = &byte_6FD2F8;
          ++v14;
        }
        while ( &v7[v5] != v14 );
      }
      v15 = *((_QWORD *)a1 + 1);
      if ( v15 )
      {
        if ( v4 < 1 )
          goto LABEL_19;
        v16 = 0;
        v17 = 0;
        do
        {
          sub_56A6A8(&v8[v16]);
          v15 = *((_QWORD *)a1 + 1);
          ++v17;
          ++v16;
        }
        while ( v17 < *a1 );
        if ( v15 )
        {
LABEL_19:
          v18 = *(_QWORD *)(v15 - 8);
          if ( v18 )
          {
            v19 = v15 + 8 * v18;
            do
            {
              while ( 1 )
              {
                v21 = *(_QWORD *)(v19 - 8);
                v19 -= 8;
                v20 = v21;
                v22 = (void *)(v21 - 24);
                if ( (__int64 *)(v21 - 24) != &qword_6FD2E0 )
                {
                  v23 = (unsigned int *)(v20 - 8);
                  if ( &pthread_create )
                  {
                    do
                      v24 = __ldaxr(v23);
                    while ( __stlxr(v24 - 1, v23) );
                  }
                  else
                  {
                    v24 = (*v23)--;
                  }
                  if ( v24 <= 0 )
                    break;
                }
                if ( v19 == v15 )
                  goto LABEL_30;
              }
              operator delete(v22);
            }
            while ( v19 != v15 );
          }
LABEL_30:
          operator delete[]((void *)(v15 - 8));
        }
      }
      a1[1] = a2;
      *((_QWORD *)a1 + 1) = v8;
    }
  }
  else
  {
    v25 = *((_QWORD *)a1 + 1);
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 - 8);
      if ( v26 )
      {
        v27 = v25 + 8 * v26;
        do
        {
          while ( 1 )
          {
            v29 = *(_QWORD *)(v27 - 8);
            v27 -= 8;
            v28 = v29;
            v30 = (void *)(v29 - 24);
            if ( (__int64 *)(v29 - 24) != &qword_6FD2E0 )
            {
              v31 = (unsigned int *)(v28 - 8);
              if ( &pthread_create )
              {
                do
                  v32 = __ldaxr(v31);
                while ( __stlxr(v32 - 1, v31) );
              }
              else
              {
                v32 = (*v31)--;
              }
              if ( v32 <= 0 )
                break;
            }
            if ( v27 == v25 )
              goto LABEL_44;
          }
          operator delete(v30);
        }
        while ( v27 != v25 );
      }
LABEL_44:
      operator delete[]((void *)(v25 - 8));
      *((_QWORD *)a1 + 1) = 0;
    }
    a1[1] = 0;
  }
}

