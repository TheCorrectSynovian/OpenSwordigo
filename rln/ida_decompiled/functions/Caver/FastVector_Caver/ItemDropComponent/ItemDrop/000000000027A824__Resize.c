/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027A824
 * Mangled: _ZN5Caver10FastVectorINS_17ItemDropComponent8ItemDropEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::Resize(int)
 *
 * Callers: 1
 *   0x00000000001FBE30  Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::Resize(int)
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 108
 *   insn=0x000000000027A840 string=0x000000000027A844 "W"
 *   insn=0x000000000027A854 string=0x000000000027A858 "y"
 *   insn=0x000000000027A858 string=0x000000000027A85C "?"
 *   insn=0x000000000027A85C string=0x000000000027A860 "m"
 *   insn=0x000000000027A864 string=0x000000000027A868 "t"
 *   insn=0x000000000027A86C string=0x000000000027A870 "h"
 *   insn=0x000000000027A86C string=0x000000000027AA64 "u"
 *   insn=0x000000000027A880 string=0x000000000027A884 "H"
 *   insn=0x000000000027A898 string=0x000000000027A89C ""
 *   insn=0x000000000027A8A0 string=0x000000000027A8A4 " "
 *   insn=0x000000000027A8A4 string=0x000000000027A8A8 "2"
 *   insn=0x000000000027A8A8 string=0x00000000001F8570 "0'"
 *   insn=0x000000000027A8B4 string=0x000000000027A8B8 ""
 *   insn=0x000000000027A8BC string=0x000000000027A8C0 ""
 *   insn=0x000000000027A8CC string=0x000000000027A8D0 "L#"
 *   insn=0x000000000027A8CC string=0x000000000027A908 "J#"
 *   insn=0x000000000027A8D4 string=0x000000000027A8D8 "\n"
 *   insn=0x000000000027A8DC string=0x000000000027A8E0 "\t"
 *   insn=0x000000000027A8EC string=0x000000000027A8F0 "`"
 *   insn=0x000000000027A8F0 string=0x000000000027A8F4 "`"
 *   insn=0x000000000027A900 string=0x000000000027A904 "`"
 *   insn=0x000000000027A904 string=0x000000000027A930 "v"
 *   insn=0x000000000027A908 string=0x000000000027A90C "J"
 *   insn=0x000000000027A90C string=0x000000000027A910 "(!"
 *   insn=0x000000000027A914 string=0x000000000027A918 "Ja"
 *   insn=0x000000000027A918 string=0x000000000027A91C "@N"
 *   insn=0x000000000027A920 string=0x000000000027A924 "A"
 *   insn=0x000000000027A924 string=0x000000000027A928 "?"
 *   insn=0x000000000027A930 string=0x000000000027A934 "6\t"
 *   insn=0x000000000027A934 string=0x000000000027A938 "?"
 *   insn=0x000000000027A934 string=0x000000000027AA58 "t"
 *   insn=0x000000000027A938 string=0x000000000027A93C "K"
 *   insn=0x000000000027A94C string=0x000000000027A950 "`#"
 *   insn=0x000000000027A954 string=0x000000000027A958 "T"
 *   insn=0x000000000027A958 string=0x000000000027A95C "`C"
 *   insn=0x000000000027A960 string=0x000000000027A964 "Q"
 *   insn=0x000000000027A964 string=0x000000000027A968 "h"
 *   insn=0x000000000027A968 string=0x000000000027A96C "v"
 *   insn=0x000000000027A96C string=0x000000000027A970 "Z"
 *   insn=0x000000000027A970 string=0x000000000027A974 "9C"
 *   insn=0x000000000027A974 string=0x000000000027A978 "_"
 *   insn=0x000000000027A978 string=0x000000000027A97C "k"
 *   insn=0x000000000027A988 string=0x000000000027A98C "("
 *   insn=0x000000000027A98C string=0x000000000027A990 "Y#"
 *   insn=0x000000000027A990 string=0x000000000027A994 "Z#"
 *   insn=0x000000000027A994 string=0x000000000027A998 "9"
 *   insn=0x000000000027A998 string=0x000000000027A99C "Z?G"
 *   insn=0x000000000027A9A0 string=0x000000000027A9A4 "h"
 *   insn=0x000000000027A9A4 string=0x000000000027A9A8 "{C"
 *   insn=0x000000000027A9B4 string=0x000000000027A9B8 "h"
 *   insn=0x000000000027A9B4 string=0x000000000027A9D4 "!"
 *   insn=0x000000000027A9C0 string=0x000000000027A9C4 "a"
 *   insn=0x000000000027A9C4 string=0x000000000027A9F0 "!"
 *   insn=0x000000000027A9CC string=0x000000000027A9D0 " "
 *   insn=0x000000000027A9D8 string=0x000000000027A9DC "\t"
 *   insn=0x000000000027A9D8 string=0x000000000027AA0C "\t"
 *   insn=0x000000000027A9DC string=0x000000000027A9E0 "*"
 *   insn=0x000000000027A9E0 string=0x000000000027A9E4 "\n"
 *   insn=0x000000000027A9E8 string=0x000000000027A9EC ""
 *   insn=0x000000000027A9EC string=0x000000000027AA18 "?"
 *   insn=0x000000000027A9F4 string=0x000000000027A9F8 "\t"
 *   insn=0x000000000027A9F4 string=0x000000000027AA2C "\t"
 *   insn=0x000000000027A9F8 string=0x000000000027A9FC "*"
 *   insn=0x000000000027A9FC string=0x000000000027AA00 "\n"
 *   insn=0x000000000027AA08 string=0x000000000027AA38 "?"
 *   insn=0x000000000027AA0C string=0x000000000027AA10 "*"
 *   insn=0x000000000027AA10 string=0x000000000027AA14 "\n"
 *   insn=0x000000000027AA20 string=0x000000000027AA24 "`"
 *   insn=0x000000000027AA2C string=0x000000000027AA30 "*"
 *   insn=0x000000000027AA30 string=0x000000000027AA34 "\n"
 *   insn=0x000000000027AA38 string=0x000000000027AA3C "l"
 *   insn=0x000000000027AA40 string=0x000000000027AA44 "X"
 *   insn=0x000000000027AA50 string=0x000000000027AA54 "C"
 *   insn=0x000000000027AA54 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000027AA58 string=0x000000000027AA5C "x"
 *   insn=0x000000000027AA5C string=0x000000000027AA60 ":"
 *   insn=0x000000000027AA70 string=0x000000000027AA74 "("
 *   insn=0x000000000027AA74 string=0x000000000027AA78 "V#"
 *   insn=0x000000000027AA78 string=0x000000000027AA7C "X#"
 *   insn=0x000000000027AA88 string=0x000000000027AA8C "("
 *   insn=0x000000000027AA8C string=0x000000000027AA90 "9C"
 *   insn=0x000000000027AA9C string=0x000000000027AAA0 "("
 *   insn=0x000000000027AA9C string=0x000000000027AABC "!"
 *   insn=0x000000000027AAA8 string=0x000000000027AAAC "a"
 *   insn=0x000000000027AAAC string=0x000000000027AAB0 "?"
 *   insn=0x000000000027AAAC string=0x000000000027AAD8 "!"
 *   insn=0x000000000027AAB4 string=0x000000000027AAB8 " "
 *   insn=0x000000000027AAC0 string=0x000000000027AAC4 "\t"
 *   insn=0x000000000027AAC0 string=0x000000000027AAF4 "\t"
 *   insn=0x000000000027AAC4 string=0x000000000027AAC8 "*"
 *   insn=0x000000000027AAC8 string=0x000000000027AACC "\n"
 *   insn=0x000000000027AAD0 string=0x000000000027AAD4 ""
 *   insn=0x000000000027AAD4 string=0x000000000027AB00 "?"
 *   insn=0x000000000027AADC string=0x000000000027AAE0 "\t"
 *   insn=0x000000000027AADC string=0x000000000027AB14 "\t"
 *   insn=0x000000000027AAE0 string=0x000000000027AAE4 "*"
 *   insn=0x000000000027AAE4 string=0x000000000027AAE8 "\n"
 *   insn=0x000000000027AAF0 string=0x000000000027AB20 "?"
 *   insn=0x000000000027AAF4 string=0x000000000027AAF8 "*"
 *   insn=0x000000000027AAF8 string=0x000000000027AAFC "\n"
 *   insn=0x000000000027AB08 string=0x000000000027AB0C "&"
 *   insn=0x000000000027AB14 string=0x000000000027AB18 "*"
 *   insn=0x000000000027AB18 string=0x000000000027AB1C "\n"
 *   insn=0x000000000027AB20 string=0x000000000027AB24 "l"
 *   insn=0x000000000027AB2C string=0x000000000027AB30 "?"
 *   insn=0x000000000027AB38 string=0x000000000027AB3C "\t"
 *   insn=0x000000000027AB50 string=0x000000000027AB54 "!"
 *   insn=0x000000000027AB78 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::Resize(int *a1, int a2)
{
  int v4; // w25
  unsigned __int64 v5; // x22
  unsigned __int64 v6; // x0
  _QWORD *v7; // x0
  _QWORD *v8; // x21
  _QWORD *v9; // x24
  unsigned __int64 v10; // x8
  _QWORD *v11; // x9
  int64x2_t *v12; // x11
  int64x2_t v13; // q0
  __int64 v14; // x12
  _QWORD *v15; // x8
  int64x2_t v16; // q0
  _QWORD *v17; // x22
  __int64 v18; // x25
  __int64 v19; // x26
  __int64 v20; // x8
  _QWORD *v21; // x27
  __int64 v22; // x8
  void *v23; // x0
  __int64 *v24; // x0
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int *v27; // x8
  int v28; // w9
  _QWORD *v29; // x21
  __int64 v30; // x8
  _QWORD *v31; // x25
  __int64 v32; // x8
  void *v33; // x0
  __int64 *v34; // x0
  unsigned int *v35; // x8
  int v36; // w9
  unsigned int *v37; // x8
  int v38; // w9

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
      v5 = 16LL * a2;
      if ( !is_mul_ok(a2, 0x10u) || v5 >= 0xFFFFFFFFFFFFFFF8LL )
        v6 = -1;
      else
        v6 = v5 + 8;
      v7 = (_QWORD *)operator new[](v6);
      v8 = v7;
      *v7 = a2;
      v9 = v7 + 1;
      v10 = ((v5 - 16) >> 4) + 1;
      v11 = v7 + 1;
      if ( v10 < 4 )
        goto LABEL_12;
      v12 = (int64x2_t *)(v7 + 5);
      v11 = &v9[2 * (v10 & 0x1FFFFFFFFFFFFFFCLL)];
      v13 = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
      v14 = v10 & 0x1FFFFFFFFFFFFFFCLL;
      do
      {
        v12[-2] = v13;
        v12[-1] = v13;
        *v12 = v13;
        v12[1] = v13;
        v12 += 4;
        v14 -= 4;
      }
      while ( v14 );
      if ( v10 != (v10 & 0x1FFFFFFFFFFFFFFCLL) )
      {
LABEL_12:
        v15 = v11 - 1;
        v16 = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
        do
        {
          *(int64x2_t *)(v15 + 1) = v16;
          v15 += 2;
        }
        while ( &v7[v5 / 8] != v15 );
      }
      v17 = (_QWORD *)*((_QWORD *)a1 + 1);
      if ( v17 )
      {
        if ( v4 < 1 )
          goto LABEL_19;
        v18 = 0;
        v19 = 0;
        do
        {
          sub_56A6A8(&v8[v18 + 1]);
          sub_56A6A8(&v8[v18 + 2]);
          v17 = (_QWORD *)*((_QWORD *)a1 + 1);
          ++v19;
          v18 += 2;
        }
        while ( v19 < *a1 );
        if ( v17 )
        {
LABEL_19:
          v20 = *(v17 - 1);
          if ( v20 )
          {
            v21 = &v17[2 * v20];
            do
            {
              while ( 1 )
              {
                v22 = *(v21 - 1);
                v21 -= 2;
                v23 = (void *)(v22 - 24);
                if ( (__int64 *)(v22 - 24) != &qword_6FD2E0 )
                {
                  v25 = (unsigned int *)(v22 - 8);
                  if ( &pthread_create )
                  {
                    do
                      v26 = __ldaxr(v25);
                    while ( __stlxr(v26 - 1, v25) );
                  }
                  else
                  {
                    v26 = (*v25)--;
                  }
                  if ( v26 <= 0 )
                    operator delete(v23);
                }
                v24 = (__int64 *)(*v21 - 24LL);
                if ( v24 != &qword_6FD2E0 )
                {
                  v27 = (unsigned int *)(*v21 - 8LL);
                  if ( &pthread_create )
                  {
                    do
                      v28 = __ldaxr(v27);
                    while ( __stlxr(v28 - 1, v27) );
                  }
                  else
                  {
                    v28 = (*v27)--;
                  }
                  if ( v28 <= 0 )
                    break;
                }
                if ( v21 == v17 )
                  goto LABEL_37;
              }
              operator delete(v24);
            }
            while ( v21 != v17 );
          }
LABEL_37:
          operator delete[](v17 - 1);
        }
      }
      a1[1] = a2;
      *((_QWORD *)a1 + 1) = v9;
    }
  }
  else
  {
    v29 = (_QWORD *)*((_QWORD *)a1 + 1);
    if ( v29 )
    {
      v30 = *(v29 - 1);
      if ( v30 )
      {
        v31 = &v29[2 * v30];
        do
        {
          while ( 1 )
          {
            v32 = *(v31 - 1);
            v31 -= 2;
            v33 = (void *)(v32 - 24);
            if ( (__int64 *)(v32 - 24) != &qword_6FD2E0 )
            {
              v35 = (unsigned int *)(v32 - 8);
              if ( &pthread_create )
              {
                do
                  v36 = __ldaxr(v35);
                while ( __stlxr(v36 - 1, v35) );
              }
              else
              {
                v36 = (*v35)--;
              }
              if ( v36 <= 0 )
                operator delete(v33);
            }
            v34 = (__int64 *)(*v31 - 24LL);
            if ( v34 != &qword_6FD2E0 )
            {
              v37 = (unsigned int *)(*v31 - 8LL);
              if ( &pthread_create )
              {
                do
                  v38 = __ldaxr(v37);
                while ( __stlxr(v38 - 1, v37) );
              }
              else
              {
                v38 = (*v37)--;
              }
              if ( v38 <= 0 )
                break;
            }
            if ( v31 == v29 )
              goto LABEL_58;
          }
          operator delete(v34);
        }
        while ( v31 != v29 );
      }
LABEL_58:
      operator delete[](v29 - 1);
      *((_QWORD *)a1 + 1) = 0;
    }
    a1[1] = 0;
  }
}

