/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045C260
 * Mangled: _ZN5Caver13ObjectLibraryD2Ev
 * Demangled: Caver::ObjectLibrary::~ObjectLibrary()
 *
 * Callers: 1
 *   0x00000000001FAD10  Caver::ObjectLibrary::~ObjectLibrary()
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8CB0  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 93
 *   insn=0x000000000045C274 string=0x000000000045C278 "V"
 *   insn=0x000000000045C284 string=0x000000000045C288 "t"
 *   insn=0x000000000045C290 string=0x000000000045C2EC "t"
 *   insn=0x000000000045C294 string=0x000000000045C298 "5"
 *   insn=0x000000000045C29C string=0x000000000045C2A0 ""
 *   insn=0x000000000045C2AC string=0x000000000045C2B0 "\t@"
 *   insn=0x000000000045C2BC string=0x000000000045C2C0 ""
 *   insn=0x000000000045C2CC string=0x000000000045C2D0 "@"
 *   insn=0x000000000045C2E4 string=0x000000000045C2E8 "t6@"
 *   insn=0x000000000045C2EC string=0x000000000045C2F8 "tVE"
 *   insn=0x000000000045C2F4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045C300 string=0x000000000045C338 "t"
 *   insn=0x000000000045C308 string=0x000000000045C30C "@"
 *   insn=0x000000000045C30C string=0x000000000045C310 ""
 *   insn=0x000000000045C310 string=0x000000000045C314 ""
 *   insn=0x000000000045C318 string=0x000000000045C31C ""
 *   insn=0x000000000045C31C string=0x000000000045C320 ""
 *   insn=0x000000000045C330 string=0x000000000045C334 "t*@"
 *   insn=0x000000000045C338 string=0x000000000045C344 "t"
 *   insn=0x000000000045C34C string=0x000000000045C3A8 "t"
 *   insn=0x000000000045C350 string=0x000000000045C354 "5"
 *   insn=0x000000000045C358 string=0x000000000045C35C ""
 *   insn=0x000000000045C368 string=0x000000000045C36C "\t@"
 *   insn=0x000000000045C378 string=0x000000000045C37C ""
 *   insn=0x000000000045C388 string=0x000000000045C38C "@"
 *   insn=0x000000000045C3A0 string=0x000000000045C3A4 "t"
 *   insn=0x000000000045C3A8 string=0x000000000045C3B4 "a"
 *   insn=0x000000000045C3B4 string=0x000000000045C3B8 "`""
 *   insn=0x000000000045C3B8 string=0x000000000045C3BC "=r"
 *   insn=0x000000000045C3BC string=0x000000000045C3C0 "h"
 *   insn=0x000000000045C3BC string=0x00000000001F8CB0 "0'"
 *   insn=0x000000000045C3C0 string=0x000000000045C3C4 "I"
 *   insn=0x000000000045C3C4 string=0x000000000045C3C8 ")"
 *   insn=0x000000000045C3D0 string=0x000000000045C3D4 "a"
 *   insn=0x000000000045C3D4 string=0x000000000045C400 "I"
 *   insn=0x000000000045C400 string=0x000000000045C404 ")=G"
 *   insn=0x000000000045C404 string=0x000000000045C408 "!"
 *   insn=0x000000000045C40C string=0x000000000045C410 "\t"
 *   insn=0x000000000045C40C string=0x000000000045C424 "\t"
 *   insn=0x000000000045C410 string=0x000000000045C414 "*"
 *   insn=0x000000000045C414 string=0x000000000045C418 "\n"
 *   insn=0x000000000045C420 string=0x000000000045C430 "?"
 *   insn=0x000000000045C424 string=0x000000000045C428 "*"
 *   insn=0x000000000045C428 string=0x000000000045C42C "\n"
 *   insn=0x000000000045C430 string=0x000000000045C434 ","
 *   insn=0x000000000045C444 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000045C448 string=0x000000000045C44C "B"
 *   insn=0x000000000045C44C string=0x000000000045C554 "h"
 *   insn=0x000000000045C454 string=0x000000000045C458 ""
 *   insn=0x000000000045C458 string=0x000000000045C4D8 "u"
 *   insn=0x000000000045C460 string=0x000000000045C4D4 "wk"
 *   insn=0x000000000045C46C string=0x000000000045C548 "a"
 *   insn=0x000000000045C470 string=0x000000000045C474 "4"
 *   insn=0x000000000045C474 string=0x000000000045C544 "[k"
 *   insn=0x000000000045C47C string=0x000000000045C480 "h"
 *   insn=0x000000000045C480 string=0x000000000045C48C "uZE"
 *   insn=0x000000000045C494 string=0x000000000045C4CC "u"
 *   insn=0x000000000045C49C string=0x000000000045C4A0 "@"
 *   insn=0x000000000045C4A0 string=0x000000000045C4A4 ""
 *   insn=0x000000000045C4A4 string=0x000000000045C4A8 ""
 *   insn=0x000000000045C4AC string=0x000000000045C4B0 ""
 *   insn=0x000000000045C4B0 string=0x000000000045C4B4 ""
 *   insn=0x000000000045C4C4 string=0x000000000045C4C8 "u*@"
 *   insn=0x000000000045C4E0 string=0x000000000045C53C "u"
 *   insn=0x000000000045C4E4 string=0x000000000045C4E8 "6"
 *   insn=0x000000000045C4EC string=0x000000000045C4F0 ""
 *   insn=0x000000000045C4FC string=0x000000000045C500 "\t@"
 *   insn=0x000000000045C50C string=0x000000000045C510 ""
 *   insn=0x000000000045C51C string=0x000000000045C520 "@"
 *   insn=0x000000000045C534 string=0x000000000045C538 "u"
 *   insn=0x000000000045C548 string=0x000000000045C54C "`""
 *   insn=0x000000000045C554 string=0x000000000045C558 "I"
 *   insn=0x000000000045C558 string=0x000000000045C55C ")"
 *   insn=0x000000000045C568 string=0x000000000045C56C "I"
 *   insn=0x000000000045C56C string=0x000000000045C570 ")=G"
 *   insn=0x000000000045C570 string=0x000000000045C574 "!"
 *   insn=0x000000000045C574 string=0x000000000045C578 "i"
 *   insn=0x000000000045C578 string=0x000000000045C57C "\t"
 *   insn=0x000000000045C578 string=0x000000000045C5A4 "\t"
 *   insn=0x000000000045C57C string=0x000000000045C580 "*"
 *   insn=0x000000000045C580 string=0x000000000045C584 "\n"
 *   insn=0x000000000045C588 string=0x000000000045C58C "?"
 *   insn=0x000000000045C58C string=0x000000000045C590 "l"
 *   insn=0x000000000045C5A4 string=0x000000000045C5A8 "*"
 *   insn=0x000000000045C5A8 string=0x000000000045C5AC "\n"
 *   insn=0x000000000045C5AC string=0x000000000045C5B0 "?"
 *   insn=0x000000000045C5B0 string=0x000000000045C5B4 ""
 *   insn=0x000000000045C5C0 string=0x000000000045C5C4 "b"
 *   insn=0x000000000045C5C4 string=0x000000000045C5C8 "h*@"
 *   insn=0x000000000045C5DC string=0x000000000045C5E0 "h"
 *   insn=0x000000000045C5E4 string=0x000000000045C5E8 "Y"
 *   insn=0x000000000045C5EC string=0x000000000045C5F0 "0k"
 *   insn=0x000000000045C5F4 string=0x000000000045C5F8 "U"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectLibrary::~ObjectLibrary(Caver::ObjectLibrary *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x23
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  _QWORD *v8; // x21
  _DWORD *v9; // x0
  int v10; // w8
  _QWORD *v11; // x20
  _QWORD *v12; // x23
  _QWORD *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 *v16; // x0
  unsigned int *v17; // x8
  int v18; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 13);
  v3 = (_QWORD *)*((_QWORD *)this + 14);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)v2[1];
      if ( v4 )
      {
        v5 = v4[1] - 1LL;
        v4[1] = v5;
        if ( !v5 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
          v6 = v4[2] - 1LL;
          v4[2] = v6;
          if ( !v6 )
            (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
        }
      }
      v2 += 2;
    }
    while ( v3 != v2 );
    v2 = (_QWORD *)*((_QWORD *)this + 13);
  }
  if ( v2 )
    operator delete(v2);
  v7 = (_QWORD *)*((_QWORD *)this + 10);
  v8 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v7 != v8 )
  {
    do
    {
      v9 = (_DWORD *)*v7;
      if ( *v7 )
      {
        v10 = v9[2] - 1;
        v9[2] = v10;
        if ( !v10 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
      }
      ++v7;
    }
    while ( v8 != v7 );
    v7 = (_QWORD *)*((_QWORD *)this + 10);
  }
  if ( v7 )
    operator delete(v7);
  v11 = (_QWORD *)*((_QWORD *)this + 7);
  v12 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v11 != v12 )
  {
    do
    {
      v13 = (_QWORD *)v11[1];
      if ( v13 )
      {
        v14 = v13[1] - 1LL;
        v13[1] = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          v15 = v13[2] - 1LL;
          v13[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
        }
      }
      v11 += 2;
    }
    while ( v12 != v11 );
    v11 = (_QWORD *)*((_QWORD *)this + 7);
  }
  if ( v11 )
    operator delete(v11);
  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase();
  v16 = (__int64 *)(*(_QWORD *)this - 24LL);
  if ( v16 != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(*(_QWORD *)this - 8LL);
    if ( &pthread_create )
    {
      do
        v18 = __ldaxr(v17);
      while ( __stlxr(v18 - 1, v17) );
    }
    else
    {
      v18 = (*v17)--;
    }
    if ( v18 <= 0 )
      operator delete(v16);
  }
}

