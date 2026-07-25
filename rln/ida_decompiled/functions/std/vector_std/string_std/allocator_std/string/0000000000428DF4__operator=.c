/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000428DF4
 * Mangled: _ZNSt6vectorISsSaISsEEaSERKS1_
 * Demangled: std::vector<std::string,std::allocator<std::string>>::operator=(std::vector<std::string,std::allocator<std::string>> const&)
 *
 * Callers: 2
 *   0x00000000001F5440  std::vector<std::string,std::allocator<std::string>>::operator=(std::vector<std::string,std::allocator<std::string>> const&)
 *   0x0000000000428DBC  Caver::MapView::~MapView()
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002020E0  std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>(std::string *,std::string *,std::string *)
 *   0x00000000002036F0  std::vector<std::string,std::allocator<std::string>>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>>(ulong,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 56
 *   insn=0x0000000000428E0C string=0x0000000000428E10 "Y"
 *   insn=0x0000000000428E10 string=0x0000000000428E14 "("
 *   insn=0x0000000000428E24 string=0x0000000000428E28 "`"
 *   insn=0x0000000000428E28 string=0x0000000000429014 "("
 *   insn=0x0000000000428E2C string=0x0000000000428E30 "h\n@"
 *   insn=0x0000000000428E30 string=0x0000000000428E34 "u"
 *   insn=0x0000000000428E34 string=0x0000000000428E38 "i"
 *   insn=0x0000000000428E38 string=0x0000000000428E3C "4"
 *   insn=0x0000000000428E3C string=0x0000000000428E40 ""
 *   insn=0x0000000000428E48 string=0x0000000000428E80 "w"
 *   insn=0x0000000000428E54 string=0x0000000000428E58 "&j"
 *   insn=0x0000000000428E58 string=0x0000000000428E5C "v^@"
 *   insn=0x0000000000428E64 string=0x0000000000428E68 "`\t"
 *   insn=0x0000000000428E68 string=0x0000000000428F94 "v"
 *   insn=0x0000000000428E74 string=0x0000000000428E78 "Z?G"
 *   insn=0x0000000000428E78 string=0x0000000000428E7C ">"
 *   insn=0x0000000000428E84 string=0x0000000000428E88 "H"
 *   insn=0x0000000000428E90 string=0x0000000000428E94 "_"
 *   insn=0x0000000000428E90 string=0x0000000000428EE8 "?"
 *   insn=0x0000000000428E98 string=0x0000000000428E9C "H"
 *   insn=0x0000000000428EBC string=0x0000000000428EC0 ","
 *   insn=0x0000000000428EC0 string=0x0000000000428EC4 "h^@"
 *   insn=0x0000000000428ECC string=0x0000000000428ED0 ""
 *   insn=0x0000000000428EE0 string=0x0000000000428EE4 "I"
 *   insn=0x0000000000428EE4 string=0x0000000000429008 "h"
 *   insn=0x0000000000428EEC string=0x0000000000428EF0 "("
 *   insn=0x0000000000428F10 string=0x0000000000428F14 ","
 *   insn=0x0000000000428F14 string=0x0000000000428F18 "w"
 *   insn=0x0000000000428F1C string=0x0000000000428F20 "@"
 *   insn=0x0000000000428F30 string=0x0000000000428F34 "."
 *   insn=0x0000000000428F3C string=0x0000000000428F40 "\t"
 *   insn=0x0000000000428F3C string=0x0000000000428F54 "\t"
 *   insn=0x0000000000428F40 string=0x0000000000428F44 "*"
 *   insn=0x0000000000428F44 string=0x0000000000428F48 "\n"
 *   insn=0x0000000000428F50 string=0x0000000000428F60 "?"
 *   insn=0x0000000000428F54 string=0x0000000000428F58 "*"
 *   insn=0x0000000000428F58 string=0x0000000000428F5C "\n"
 *   insn=0x0000000000428F80 string=0x0000000000428F38 "!"
 *   insn=0x0000000000428F88 string=0x0000000000428F8C "A"
 *   insn=0x0000000000428F8C string=0x0000000000428F90 "v"
 *   insn=0x0000000000428F9C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000428FA0 string=0x0000000000428FA4 "u"
 *   insn=0x0000000000428FA4 string=0x0000000000428FA8 "h\n"
 *   insn=0x0000000000428FB4 string=0x0000000000428FB8 "\t"
 *   insn=0x0000000000428FB4 string=0x0000000000428FCC "\t"
 *   insn=0x0000000000428FB8 string=0x0000000000428FBC "*"
 *   insn=0x0000000000428FBC string=0x0000000000428FC0 "\n"
 *   insn=0x0000000000428FC8 string=0x0000000000428FD8 "?"
 *   insn=0x0000000000428FCC string=0x0000000000428FD0 "*"
 *   insn=0x0000000000428FD0 string=0x0000000000428FD4 "\n"
 *   insn=0x0000000000428FF8 string=0x0000000000428FB0 "!"
 *   insn=0x0000000000429000 string=0x0000000000429004 "A"
 *   insn=0x0000000000429008 string=0x000000000042900C ""
 *   insn=0x000000000042900C string=0x0000000000429010 "h"
 *   insn=0x000000000042901C string=0x0000000000429020 "!"
 *   insn=0x0000000000429044 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall std::vector<std::string>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // x22
  char *v4; // x21
  __int64 v5; // x9
  unsigned __int64 v6; // x20
  __int64 v7; // x0
  _QWORD *v8; // x22
  _QWORD *v9; // x23
  __int64 v10; // x21
  char *v11; // x23
  __int64 v12; // x10
  __int64 v13; // x23
  __int64 v14; // x23
  unsigned int *v15; // x8
  int v16; // w9
  __int64 *v17; // x0
  unsigned int *v18; // x8
  int v19; // w9
  __int64 *v20; // x0

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 != a1 )
  {
    v3 = *a2;
    v4 = (char *)*a1;
    v5 = a2[1] - *a2;
    v6 = v5 >> 3;
    if ( v5 >> 3 <= (unsigned __int64)((a1[2] - *a1) >> 3) )
    {
      v11 = (char *)a1[1];
      v12 = v11 - v4;
      if ( (v11 - v4) >> 3 >= v6 )
      {
        if ( v5 >= 1 )
        {
          v14 = ((unsigned __int64)v5 >> 3) + 1;
          do
          {
            sub_56A6A8(v4);
            --v14;
            v3 += 8;
            v4 += 8;
          }
          while ( v14 > 1 );
          v11 = (char *)a1[1];
        }
        for ( ; v4 != v11; v4 += 8 )
        {
          v20 = (__int64 *)(*(_QWORD *)v4 - 24LL);
          if ( v20 != &qword_6FD2E0 )
          {
            v18 = (unsigned int *)(*(_QWORD *)v4 - 8LL);
            if ( &pthread_create )
            {
              do
                v19 = __ldaxr(v18);
              while ( __stlxr(v19 - 1, v18) );
            }
            else
            {
              v19 = (*v18)--;
            }
            if ( v19 <= 0 )
              operator delete(v20);
          }
        }
      }
      else
      {
        if ( v12 >= 1 )
        {
          v13 = ((unsigned __int64)v12 >> 3) + 1;
          do
          {
            sub_56A6A8(v4);
            --v13;
            v3 += 8;
            v4 += 8;
          }
          while ( v13 > 1 );
        }
        std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>();
      }
    }
    else
    {
      v7 = std::vector<std::string>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>>();
      v8 = (_QWORD *)*a1;
      v9 = (_QWORD *)a1[1];
      v10 = v7;
      if ( (_QWORD *)*a1 != v9 )
      {
        do
        {
          v17 = (__int64 *)(*v8 - 24LL);
          if ( v17 != &qword_6FD2E0 )
          {
            v15 = (unsigned int *)(*v8 - 8LL);
            if ( &pthread_create )
            {
              do
                v16 = __ldaxr(v15);
              while ( __stlxr(v16 - 1, v15) );
            }
            else
            {
              v16 = (*v15)--;
            }
            if ( v16 <= 0 )
              operator delete(v17);
          }
          ++v8;
        }
        while ( v8 != v9 );
        v8 = (_QWORD *)*a1;
      }
      if ( v8 )
        operator delete(v8);
      *a1 = v10;
      a1[2] = v10 + 8 * v6;
    }
    a1[1] = *a1 + 8 * v6;
  }
  return a1;
}

