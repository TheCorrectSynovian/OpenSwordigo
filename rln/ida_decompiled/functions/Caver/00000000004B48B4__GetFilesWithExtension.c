/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B48B4
 * Mangled: _ZN5Caver21GetFilesWithExtensionERKSsS1_PSt6vectorISsSaISsEE
 * Demangled: Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *
 * Callers: 1
 *   0x00000000001FA820  Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *
 * Callees: 15
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7230  .readdir
 *   0x00000000001F83A0  std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string const&)
 *   0x00000000001F9F90  .closedir
 *   0x0000000000202250  .perror
 *   0x0000000000203810  .opendir
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000566784  sub_566784
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000568098  sub_568098
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 73
 *   insn=0x00000000004B48D0 string=0x00000000004B48D4 "["
 *   insn=0x00000000004B48D4 string=0x00000000004B48D8 "h"
 *   insn=0x00000000004B48E4 string=0x00000000004B48E8 "("
 *   insn=0x00000000004B48F4 string=0x00000000004B48F8 "U"
 *   insn=0x00000000004B48FC string=0x00000000004B4900 "L\n"
 *   insn=0x00000000004B4900 string=0x00000000001F7230 "0'"
 *   insn=0x00000000004B4908 string=0x00000000004B490C "Z"
 *   insn=0x00000000004B4918 string=0x00000000004B491C ")"
 *   insn=0x00000000004B4920 string=0x00000000004B4928 "J6"
 *   insn=0x00000000004B4920 string=0x00000000005973B5 "Couldn't open the directory"
 *   insn=0x00000000004B4928 string=0x00000000004B492C "g"
 *   insn=0x00000000004B492C string=0x00000000004B4AC8 "h"
 *   insn=0x00000000004B4930 string=0x00000000004B4934 ")=G"
 *   insn=0x00000000004B4934 string=0x00000000004B4938 "#"
 *   insn=0x00000000004B493C string=0x00000000004B4940 "\t"
 *   insn=0x00000000004B493C string=0x00000000004B4978 "\t"
 *   insn=0x00000000004B4940 string=0x00000000004B4944 "*"
 *   insn=0x00000000004B4944 string=0x00000000004B4948 "\n"
 *   insn=0x00000000004B494C string=0x00000000004B4950 ""
 *   insn=0x00000000004B4950 string=0x00000000004B4984 "?"
 *   insn=0x00000000004B4954 string=0x00000000004B4958 ")=G"
 *   insn=0x00000000004B4958 string=0x00000000004B495C "!"
 *   insn=0x00000000004B495C string=0x00000000004B4960 "\t"
 *   insn=0x00000000004B4960 string=0x00000000004B4964 "\t"
 *   insn=0x00000000004B4960 string=0x00000000004B49A0 "\t"
 *   insn=0x00000000004B4964 string=0x00000000004B4968 "*"
 *   insn=0x00000000004B4968 string=0x00000000004B496C "\n"
 *   insn=0x00000000004B4974 string=0x00000000004B49AC "?"
 *   insn=0x00000000004B4978 string=0x00000000004B497C "*"
 *   insn=0x00000000004B497C string=0x00000000004B4980 "\n"
 *   insn=0x00000000004B4998 string=0x00000000004B499C "B"
 *   insn=0x00000000004B4998 string=0x00000000004B4A6C "h"
 *   insn=0x00000000004B49A0 string=0x00000000004B49A4 "*"
 *   insn=0x00000000004B49A4 string=0x00000000004B49A8 "\n"
 *   insn=0x00000000004B49AC string=0x00000000004B49B0 ","
 *   insn=0x00000000004B49B4 string=0x00000000004B49B8 "{"
 *   insn=0x00000000004B49B8 string=0x00000000004B49BC ">"
 *   insn=0x00000000004B49C8 string=0x00000000004B49CC "{"
 *   insn=0x00000000004B49F0 string=0x00000000004B49F4 "q"
 *   insn=0x00000000004B49F4 string=0x00000000004B49F8 ""
 *   insn=0x00000000004B4A0C string=0x00000000004B4A10 "C"
 *   insn=0x00000000004B4A1C string=0x00000000004B4A20 "Y"
 *   insn=0x00000000004B4A30 string=0x00000000004B4A34 "("
 *   insn=0x00000000004B4A34 string=0x00000000004B4A38 "_"
 *   insn=0x00000000004B4A44 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004B4A60 string=0x00000000004B4A64 "a"
 *   insn=0x00000000004B4A80 string=0x00000000004B4A84 "h"
 *   insn=0x00000000004B4A84 string=0x00000000004B4A88 "!"
 *   insn=0x00000000004B4A88 string=0x00000000004B4A8C "h"
 *   insn=0x00000000004B4A9C string=0x00000000004B4AA0 "@"
 *   insn=0x00000000004B4AA0 string=0x00000000001F83A0 "0'"
 *   insn=0x00000000004B4AAC string=0x00000000004B4AB0 "!"
 *   insn=0x00000000004B4AB8 string=0x00000000004B4ABC " "
 *   insn=0x00000000004B4AC0 string=0x00000000004B4AC4 "3"
 *   insn=0x00000000004B4AC4 string=0x00000000001F9F90 "0'"
 *   insn=0x00000000004B4AF8 string=0x0000000000595C57 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x00000000004B4AFC string=0x0000000000595C42 "basic_string::substr"
 *   insn=0x00000000004B4B00 string=0x00000000004B4B04 "!1"
 *   insn=0x00000000004B4B0C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B4B34 string=0x00000000004B4B38 ")=G"
 *   insn=0x00000000004B4B38 string=0x00000000004B4B3C "!"
 *   insn=0x00000000004B4B3C string=0x00000000004B4B40 "i"
 *   insn=0x00000000004B4B40 string=0x00000000004B4B44 "\t"
 *   insn=0x00000000004B4B40 string=0x00000000004B4B6C "\t"
 *   insn=0x00000000004B4B44 string=0x00000000004B4B48 "*"
 *   insn=0x00000000004B4B48 string=0x00000000004B4B4C "\n"
 *   insn=0x00000000004B4B50 string=0x00000000004B4B54 "?"
 *   insn=0x00000000004B4B54 string=0x00000000004B4B58 "l"
 *   insn=0x00000000004B4B64 string=0x00000000004B4B68 "W3"
 *   insn=0x00000000004B4B6C string=0x00000000004B4B70 "*"
 *   insn=0x00000000004B4B70 string=0x00000000004B4B74 "\n"
 *   insn=0x00000000004B4B74 string=0x00000000004B4B78 "?"
 *   insn=0x00000000004B4B78 string=0x00000000004B4B7C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GetFilesWithExtension(const void **a1, const char **a2, __int64 a3)
{
  DIR *v5; // x0
  DIR *v6; // x21
  struct dirent *i; // x0
  unsigned int *v8; // x8
  int v9; // w9
  unsigned int *v10; // x8
  int v11; // w9
  __int64 v12; // x0
  char *v13; // x24
  size_t v14; // x2
  __int64 *v15; // x23
  _BOOL4 v16; // w25
  void *v17; // x0
  void *v18; // [xsp+0h] [xbp-70h] BYREF
  _QWORD v19[3]; // [xsp+8h] [xbp-68h] BYREF

  v19[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = opendir(*a2);
  v6 = v5;
  if ( v5 )
  {
    for ( i = readdir(v5); i; i = readdir(v6) )
    {
      sub_566BB8((int)v19, i->d_name);
      v12 = sub_568098(v19, 46, -1);
      if ( (_DWORD)v12 == -1 )
      {
        sub_566BB8((int)&v18, "");
      }
      else
      {
        if ( *(_QWORD *)(v19[0] - 24LL) < (unsigned __int64)(((v12 << 32) + 0x100000000LL) >> 32) )
          sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr");
        sub_566784(&v18, v19);
      }
      v13 = (char *)v18;
      v15 = (__int64 *)((char *)v18 - 24);
      v14 = *((_QWORD *)v18 - 3);
      if ( v14 == *((_QWORD *)*a1 - 3) )
      {
        v16 = memcmp(v18, *a1, v14) == 0;
        if ( v15 == &qword_6FD2E0 )
          goto LABEL_26;
      }
      else
      {
        v16 = 0;
        if ( v15 == &qword_6FD2E0 )
          goto LABEL_26;
      }
      v8 = (unsigned int *)(v13 - 8);
      if ( &pthread_create )
      {
        do
          v9 = __ldaxr(v8);
        while ( __stlxr(v9 - 1, v8) );
      }
      else
      {
        v9 = (*v8)--;
      }
      if ( v9 <= 0 )
      {
        operator delete(v15);
        if ( v16 )
          goto LABEL_27;
        goto LABEL_30;
      }
LABEL_26:
      if ( v16 )
      {
LABEL_27:
        if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(a3 + 16) )
        {
          std::vector<std::string>::_M_insert_aux();
        }
        else
        {
          sub_56A528(*(_QWORD *)(a3 + 8), v19);
          *(_QWORD *)(a3 + 8) += 8LL;
        }
      }
LABEL_30:
      v17 = (void *)(v19[0] - 24LL);
      if ( (__int64 *)(v19[0] - 24LL) != &qword_6FD2E0 )
      {
        v10 = (unsigned int *)(v19[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v11 = __ldaxr(v10);
          while ( __stlxr(v11 - 1, v10) );
        }
        else
        {
          v11 = (*v10)--;
        }
        if ( v11 <= 0 )
          operator delete(v17);
      }
    }
    closedir(v6);
  }
  else
  {
    perror("Couldn't open the directory");
  }
}

