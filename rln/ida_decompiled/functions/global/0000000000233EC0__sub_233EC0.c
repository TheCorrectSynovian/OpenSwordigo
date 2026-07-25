/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000233EC0
 * Mangled: sub_233EC0
 * Demangled: sub_233EC0
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC590  Caver::PropertiesComponent::Load(void)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FE720  std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x000000000023463C  Caver::PropertiesComponent::className(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 58
 *   insn=0x0000000000233ED0 string=0x0000000000233ED4 "U"
 *   insn=0x0000000000233EDC string=0x0000000000233EE0 "@"
 *   insn=0x0000000000233EE0 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000233EE8 string=0x0000000000233EEC ")""
 *   insn=0x0000000000233EEC string=0x0000000000233EF0 "`"
 *   insn=0x0000000000233EEC string=0x00000000001FC790 "0'"
 *   insn=0x0000000000233F24 string=0x0000000000233F28 "!"
 *   insn=0x0000000000233F34 string=0x0000000000233F38 "S"
 *   insn=0x0000000000233F38 string=0x0000000000233F3C "h"
 *   insn=0x0000000000233F3C string=0x0000000000233F40 "h"
 *   insn=0x0000000000233F40 string=0x0000000000233F4C "`"
 *   insn=0x0000000000233F48 string=0x00000000001FC590 "0'"
 *   insn=0x0000000000233F64 string=0x0000000000233F68 "s"
 *   insn=0x0000000000233F90 string=0x0000000000233F94 "!"
 *   insn=0x0000000000233FB0 string=0x0000000000233FB4 ")=G"
 *   insn=0x0000000000233FB4 string=0x0000000000233FB8 "!"
 *   insn=0x0000000000233FBC string=0x0000000000233FC0 "\t"
 *   insn=0x0000000000233FBC string=0x0000000000233FF8 "\t"
 *   insn=0x0000000000233FC0 string=0x0000000000233FC4 "*"
 *   insn=0x0000000000233FC4 string=0x0000000000233FC8 "\n"
 *   insn=0x0000000000233FCC string=0x0000000000233FD0 ""
 *   insn=0x0000000000233FD0 string=0x0000000000234004 "?"
 *   insn=0x0000000000233FD4 string=0x0000000000233FD8 ")=G"
 *   insn=0x0000000000233FD8 string=0x0000000000233FDC "!"
 *   insn=0x0000000000233FE0 string=0x0000000000233FE4 "\t"
 *   insn=0x0000000000233FE0 string=0x0000000000234018 "\t"
 *   insn=0x0000000000233FE4 string=0x0000000000233FE8 "*"
 *   insn=0x0000000000233FE8 string=0x0000000000233FEC "\n"
 *   insn=0x0000000000233FF4 string=0x0000000000234024 "?"
 *   insn=0x0000000000233FF8 string=0x0000000000233FFC "*"
 *   insn=0x0000000000233FFC string=0x0000000000234000 "\n"
 *   insn=0x0000000000234018 string=0x000000000023401C "*"
 *   insn=0x000000000023401C string=0x0000000000234020 "\n"
 *   insn=0x0000000000234038 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023403C string=0x0000000000234040 ""
 *   insn=0x0000000000234048 string=0x000000000023404C "J"
 *   insn=0x0000000000234050 string=0x0000000000234054 "(a"
 *   insn=0x0000000000234064 string=0x0000000000234068 ")"
 *   insn=0x0000000000234078 string=0x000000000023407C ")=G"
 *   insn=0x000000000023407C string=0x0000000000234080 "!"
 *   insn=0x0000000000234084 string=0x0000000000234088 "\t"
 *   insn=0x0000000000234084 string=0x00000000002340F8 "\t"
 *   insn=0x0000000000234088 string=0x000000000023408C "*"
 *   insn=0x000000000023408C string=0x0000000000234090 "\n"
 *   insn=0x0000000000234094 string=0x0000000000234098 "?"
 *   insn=0x0000000000234098 string=0x000000000023409C "l"
 *   insn=0x00000000002340B0 string=0x00000000002340B4 "J=G"
 *   insn=0x00000000002340B4 string=0x00000000002340B8 ")!"
 *   insn=0x00000000002340BC string=0x00000000002340C0 "*"
 *   insn=0x00000000002340BC string=0x00000000002340D4 "*"
 *   insn=0x00000000002340C0 string=0x00000000002340C4 "K"
 *   insn=0x00000000002340C4 string=0x00000000002340C8 "+"
 *   insn=0x00000000002340D0 string=0x00000000002340E0 "_"
 *   insn=0x00000000002340D4 string=0x00000000002340D8 "K"
 *   insn=0x00000000002340D8 string=0x00000000002340DC "+"
 *   insn=0x00000000002340F8 string=0x00000000002340FC "*"
 *   insn=0x00000000002340FC string=0x0000000000234100 "\n"
 *   insn=0x0000000000234100 string=0x0000000000234104 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_233EC0(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  Caver::PropertiesComponent *v4; // x0
  __int64 v5; // x0
  void *v6; // x0
  void *v7; // x0
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  __int64 v13; // [xsp+0h] [xbp-40h] BYREF
  __int64 v14[3]; // [xsp+8h] [xbp-38h] BYREF

  v14[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  Caver::ProgramState::StringAtStackIndex(v14, v1, 2);
  Caver::ProgramState::StringAtStackIndex(&v13, v1, 3);
  if ( v3 )
  {
    v4 = (Caver::PropertiesComponent *)Caver::SceneObject::ComponentWithInterface(
                                         v3,
                                         (__int64)Caver::PropertiesComponent::Interface);
    if ( v4 )
    {
      if ( !*((_BYTE *)v4 + 112) )
        Caver::PropertiesComponent::Load(v4);
      v5 = std::map<std::string,std::string>::operator[]();
      sub_56A6A8(v5);
    }
  }
  v6 = (void *)(v13 - 24);
  if ( (__int64 *)(v13 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v13 - 8);
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
      operator delete(v6);
  }
  v7 = (void *)(v14[0] - 24);
  if ( (__int64 *)(v14[0] - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v14[0] - 8);
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
      operator delete(v7);
  }
  return 0;
}

