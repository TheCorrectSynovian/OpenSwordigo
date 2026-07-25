/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000243380
 * Mangled: _ZN5Caver9Component10BindOutletEiRKSsPNS_19ComponentOutletBaseEb
 * Demangled: Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *
 * Callers: 1
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD4E0  std::map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::operator[](int const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 33
 *   insn=0x0000000000243398 string=0x000000000024339C "W"
 *   insn=0x00000000002433B8 string=0x00000000002433BC "3#"
 *   insn=0x00000000002433BC string=0x00000000002433C0 "\tc"
 *   insn=0x00000000002433F0 string=0x00000000002433F4 ";"
 *   insn=0x00000000002433F4 string=0x00000000001FD4E0 "0'"
 *   insn=0x0000000000243400 string=0x0000000000243404 ""
 *   insn=0x000000000024340C string=0x0000000000243410 "(C"
 *   insn=0x0000000000243410 string=0x0000000000243414 "\t!@9"
 *   insn=0x0000000000243418 string=0x000000000024341C ""
 *   insn=0x0000000000243430 string=0x0000000000243460 "\t%"
 *   insn=0x000000000024343C string=0x0000000000243440 "!"
 *   insn=0x0000000000243460 string=0x0000000000243464 ")=G"
 *   insn=0x0000000000243464 string=0x0000000000243468 "!"
 *   insn=0x000000000024346C string=0x0000000000243470 "\t"
 *   insn=0x000000000024346C string=0x0000000000243484 "\t"
 *   insn=0x0000000000243470 string=0x0000000000243474 "*"
 *   insn=0x0000000000243474 string=0x0000000000243478 "\n"
 *   insn=0x0000000000243480 string=0x0000000000243490 "?"
 *   insn=0x0000000000243484 string=0x0000000000243488 "*"
 *   insn=0x0000000000243488 string=0x000000000024348C "\n"
 *   insn=0x00000000002434A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002434AC string=0x00000000002434B0 "(a"
 *   insn=0x00000000002434B8 string=0x00000000002434BC "\n%"
 *   insn=0x00000000002434BC string=0x00000000002434C0 "J=G"
 *   insn=0x00000000002434C0 string=0x00000000002434C4 ")!"
 *   insn=0x00000000002434C8 string=0x00000000002434CC "*"
 *   insn=0x00000000002434C8 string=0x00000000002434F8 "*"
 *   insn=0x00000000002434CC string=0x00000000002434D0 "K"
 *   insn=0x00000000002434D0 string=0x00000000002434D4 "+"
 *   insn=0x00000000002434D8 string=0x00000000002434DC "_"
 *   insn=0x00000000002434F8 string=0x00000000002434FC "K"
 *   insn=0x00000000002434FC string=0x0000000000243500 "+"
 *   insn=0x0000000000243500 string=0x0000000000243504 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Component::BindOutlet(__int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // x20
  char *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  char *v12; // [xsp+20h] [xbp-60h] BYREF
  __int64 v13; // [xsp+28h] [xbp-58h]
  char v14; // [xsp+30h] [xbp-50h]
  __int64 v15; // [xsp+38h] [xbp-48h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v12 = &byte_6FD2F8;
  sub_56A6A8(&v12);
  v13 = a4;
  v14 = a5 & 1;
  v7 = std::map<int,Caver::Component::OutletBinding>::operator[]();
  *(_DWORD *)v7 = a2;
  sub_56A6A8(v7 + 8);
  *(_BYTE *)(v7 + 24) = v14;
  *(_QWORD *)(v7 + 16) = v13;
  v8 = v12 - 24;
  if ( v12 - 24 != (char *)&qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v12 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v8);
  }
}

