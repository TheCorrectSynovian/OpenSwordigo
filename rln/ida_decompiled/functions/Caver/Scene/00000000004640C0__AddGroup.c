/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004640C0
 * Mangled: _ZN5Caver5Scene8AddGroupERKN5boost13intrusive_ptrINS_16SceneObjectGroupEEE
 * Demangled: Caver::Scene::AddGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *
 * Callers: 1
 *   0x00000000001F7460  Caver::Scene::AddGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6520  Caver::SceneObjectGroup::FinishLoad(void)
 *   0x00000000001F99D0  Caver::SceneObjectGroup::SetScene(Caver::Scene *)
 *   0x00000000001FA4F0  std::map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::operator[](std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 50
 *   insn=0x00000000004640D0 string=0x00000000004640D4 "V"
 *   insn=0x00000000004640E8 string=0x00000000004640EC "h"
 *   insn=0x0000000000464104 string=0x00000000001FA4F0 "0'"
 *   insn=0x0000000000464108 string=0x000000000046410C "i"
 *   insn=0x0000000000464110 string=0x0000000000464114 "*\t@"
 *   insn=0x0000000000464114 string=0x0000000000464118 "J"
 *   insn=0x0000000000464118 string=0x000000000046411C "*\t"
 *   insn=0x0000000000464120 string=0x0000000000464124 "\t"
 *   insn=0x0000000000464128 string=0x000000000046412C "@"
 *   insn=0x000000000046412C string=0x0000000000464130 ""
 *   insn=0x0000000000464130 string=0x0000000000464134 ""
 *   insn=0x0000000000464138 string=0x000000000046413C ""
 *   insn=0x000000000046413C string=0x0000000000464140 ""
 *   insn=0x0000000000464148 string=0x000000000046414C "\t"
 *   insn=0x000000000046414C string=0x0000000000464150 ")"
 *   insn=0x0000000000464158 string=0x000000000046415C "!"
 *   insn=0x000000000046415C string=0x0000000000464160 "`"
 *   insn=0x000000000046415C string=0x00000000004641A0 "\t"
 *   insn=0x0000000000464168 string=0x00000000001F99D0 "0'"
 *   insn=0x000000000046416C string=0x0000000000464170 "h"
 *   insn=0x0000000000464170 string=0x0000000000464174 "`"
 *   insn=0x0000000000464178 string=0x00000000001F6520 "0'"
 *   insn=0x0000000000464188 string=0x00000000004641E4 ";H"
 *   insn=0x00000000004641A0 string=0x00000000004641A4 ")=G"
 *   insn=0x00000000004641A4 string=0x00000000004641A8 "!"
 *   insn=0x00000000004641AC string=0x00000000004641B0 "\t"
 *   insn=0x00000000004641AC string=0x00000000004641C4 "\t"
 *   insn=0x00000000004641B0 string=0x00000000004641B4 "*"
 *   insn=0x00000000004641B4 string=0x00000000004641B8 "\n"
 *   insn=0x00000000004641C0 string=0x00000000004641D0 "?"
 *   insn=0x00000000004641C4 string=0x00000000004641C8 "*"
 *   insn=0x00000000004641C8 string=0x00000000004641CC "\n"
 *   insn=0x00000000004641D0 string=0x00000000004641D4 "l"
 *   insn=0x00000000004641D8 string=0x00000000004641DC "r"
 *   insn=0x00000000004641E4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004641E8 string=0x00000000004641EC "\n"
 *   insn=0x00000000004641EC string=0x00000000004641F0 "J"
 *   insn=0x00000000004641F4 string=0x00000000004641F8 "(a"
 *   insn=0x0000000000464200 string=0x0000000000464204 "\n"
 *   insn=0x0000000000464204 string=0x0000000000464208 "J=G"
 *   insn=0x0000000000464208 string=0x000000000046420C ")!"
 *   insn=0x0000000000464210 string=0x0000000000464214 "*"
 *   insn=0x0000000000464210 string=0x0000000000464240 "*"
 *   insn=0x0000000000464214 string=0x0000000000464218 "K"
 *   insn=0x0000000000464218 string=0x000000000046421C "+"
 *   insn=0x0000000000464220 string=0x0000000000464224 "_"
 *   insn=0x0000000000464230 string=0x0000000000464234 "\"
 *   insn=0x0000000000464240 string=0x0000000000464244 "K"
 *   insn=0x0000000000464244 string=0x0000000000464248 "+"
 *   insn=0x0000000000464248 string=0x000000000046424C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::AddGroup(Caver::Scene *a1, Caver::SceneObjectGroup **a2)
{
  Caver::SceneObjectGroup **v4; // x0
  Caver::SceneObjectGroup **v5; // x8
  Caver::SceneObjectGroup *v6; // x9
  Caver::SceneObjectGroup *v7; // x0
  int v8; // w8
  void *v9; // x0
  __int64 result; // x0
  unsigned int *v11; // x8
  int v12; // w9
  _QWORD v13[3]; // [xsp+8h] [xbp-38h] BYREF

  v13[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(v13, (char *)*a2 + 32);
  std::map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>>::operator[]();
  v5 = v4;
  v6 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v6 + 2);
  v7 = *v4;
  *v5 = v6;
  if ( v7 )
  {
    v8 = *((_DWORD *)v7 + 2) - 1;
    *((_DWORD *)v7 + 2) = v8;
    if ( !v8 )
      (*(void (__fastcall **)(Caver::SceneObjectGroup *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (void *)(v13[0] - 24LL);
  if ( (__int64 *)(v13[0] - 24LL) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v13[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v9);
  }
  result = Caver::SceneObjectGroup::SetScene(*a2, a1);
  if ( *((_BYTE *)a1 + 8) )
    return Caver::SceneObjectGroup::FinishLoad(*a2);
  return result;
}

