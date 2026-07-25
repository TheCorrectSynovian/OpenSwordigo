/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000234110
 * Mangled: sub_234110
 * Demangled: sub_234110
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBB30  Caver::ProgramState::PushString(std::string const&)
 *   0x00000000001FC590  Caver::PropertiesComponent::Load(void)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FE720  std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x000000000023463C  Caver::PropertiesComponent::className(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 83
 *   insn=0x0000000000234120 string=0x0000000000234124 "U"
 *   insn=0x0000000000234130 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000023413C string=0x00000000001FC790 "0'"
 *   insn=0x000000000023415C string=0x0000000000234160 "!"
 *   insn=0x0000000000234180 string=0x0000000000234184 "h"
 *   insn=0x000000000023418C string=0x00000000001FC590 "0'"
 *   insn=0x0000000000234194 string=0x0000000000234198 "b)"
 *   insn=0x00000000002341AC string=0x00000000002341B0 ">"
 *   insn=0x00000000002341D4 string=0x00000000002341D8 ")=G"
 *   insn=0x00000000002341D8 string=0x00000000002341DC "!"
 *   insn=0x00000000002341E0 string=0x00000000002341E4 "\t"
 *   insn=0x00000000002341E0 string=0x00000000002342BC "\t"
 *   insn=0x00000000002341E4 string=0x00000000002341E8 "*"
 *   insn=0x00000000002341E8 string=0x00000000002341EC "\n"
 *   insn=0x00000000002341F0 string=0x00000000002341F4 "5"
 *   insn=0x00000000002341F4 string=0x00000000002342C8 "?"
 *   insn=0x00000000002341F8 string=0x00000000002341FC ""
 *   insn=0x00000000002341FC string=0x0000000000234200 "a"
 *   insn=0x000000000023420C string=0x0000000000234210 "H"
 *   insn=0x0000000000234210 string=0x00000000001FBB30 "0'"
 *   insn=0x0000000000234218 string=0x000000000023421C ")"
 *   insn=0x0000000000234224 string=0x0000000000234228 "a"
 *   insn=0x0000000000234234 string=0x0000000000234238 "!"
 *   insn=0x0000000000234254 string=0x0000000000234258 ")=G"
 *   insn=0x0000000000234258 string=0x000000000023425C "!"
 *   insn=0x0000000000234260 string=0x0000000000234264 "\t"
 *   insn=0x0000000000234260 string=0x0000000000234278 "\t"
 *   insn=0x0000000000234264 string=0x0000000000234268 "*"
 *   insn=0x0000000000234268 string=0x000000000023426C "\n"
 *   insn=0x0000000000234274 string=0x0000000000234284 "?"
 *   insn=0x0000000000234278 string=0x000000000023427C "*"
 *   insn=0x000000000023427C string=0x0000000000234280 "\n"
 *   insn=0x0000000000234284 string=0x0000000000234288 ","
 *   insn=0x000000000023428C string=0x0000000000234290 "E"
 *   insn=0x0000000000234298 string=0x000000000023429C ")=G"
 *   insn=0x000000000023429C string=0x00000000002342A0 "!"
 *   insn=0x00000000002342A4 string=0x00000000002342A8 "\t"
 *   insn=0x00000000002342A4 string=0x00000000002342DC "\t"
 *   insn=0x00000000002342A8 string=0x00000000002342AC "*"
 *   insn=0x00000000002342AC string=0x00000000002342B0 "\n"
 *   insn=0x00000000002342B8 string=0x00000000002342E8 "?"
 *   insn=0x00000000002342BC string=0x00000000002342C0 "*"
 *   insn=0x00000000002342C0 string=0x00000000002342C4 "\n"
 *   insn=0x00000000002342D0 string=0x00000000002342D4 "4"
 *   insn=0x00000000002342DC string=0x00000000002342E0 "*"
 *   insn=0x00000000002342E0 string=0x00000000002342E4 "\n"
 *   insn=0x00000000002342F0 string=0x00000000002342F4 ","
 *   insn=0x00000000002342FC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000234304 string=0x0000000000234308 "(a"
 *   insn=0x0000000000234314 string=0x0000000000234318 "J=G"
 *   insn=0x0000000000234318 string=0x000000000023431C ")!"
 *   insn=0x0000000000234320 string=0x0000000000234324 "*"
 *   insn=0x0000000000234320 string=0x0000000000234338 "*"
 *   insn=0x0000000000234324 string=0x0000000000234328 "K"
 *   insn=0x0000000000234328 string=0x000000000023432C "+"
 *   insn=0x0000000000234334 string=0x0000000000234344 "_"
 *   insn=0x0000000000234338 string=0x000000000023433C "K"
 *   insn=0x000000000023433C string=0x0000000000234340 "+"
 *   insn=0x0000000000234370 string=0x0000000000234374 "`"
 *   insn=0x0000000000234378 string=0x000000000023437C ")=G"
 *   insn=0x000000000023437C string=0x0000000000234380 "!"
 *   insn=0x0000000000234384 string=0x0000000000234388 "\t"
 *   insn=0x0000000000234384 string=0x000000000023439C "\t"
 *   insn=0x0000000000234388 string=0x000000000023438C "*"
 *   insn=0x000000000023438C string=0x0000000000234390 "\n"
 *   insn=0x0000000000234398 string=0x00000000002343A8 "?"
 *   insn=0x000000000023439C string=0x00000000002343A0 "*"
 *   insn=0x00000000002343A0 string=0x00000000002343A4 "\n"
 *   insn=0x00000000002343C4 string=0x00000000002343C8 ")"
 *   insn=0x00000000002343D8 string=0x00000000002343DC ")=G"
 *   insn=0x00000000002343DC string=0x00000000002343E0 "!"
 *   insn=0x00000000002343E0 string=0x00000000002343E4 "i"
 *   insn=0x00000000002343E4 string=0x00000000002343E8 "\t"
 *   insn=0x00000000002343E4 string=0x0000000000234410 "\t"
 *   insn=0x00000000002343E8 string=0x00000000002343EC "*"
 *   insn=0x00000000002343EC string=0x00000000002343F0 "\n"
 *   insn=0x00000000002343F4 string=0x00000000002343F8 "?"
 *   insn=0x00000000002343F8 string=0x00000000002343FC "l"
 *   insn=0x0000000000234408 string=0x000000000023440C ".5"
 *   insn=0x0000000000234410 string=0x0000000000234414 "*"
 *   insn=0x0000000000234414 string=0x0000000000234418 "\n"
 *   insn=0x0000000000234418 string=0x000000000023441C "?"
 *   insn=0x000000000023441C string=0x0000000000234420 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_234110(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  Caver::PropertiesComponent *v4; // x20
  __int64 v5; // x0
  void *v6; // x0
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9
  void *v10; // x0
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  __int64 v16; // [xsp+8h] [xbp-48h] BYREF
  __int64 v17; // [xsp+10h] [xbp-40h] BYREF
  _QWORD v18[3]; // [xsp+18h] [xbp-38h] BYREF

  v18[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    v18[0] = &byte_6FD2F8;
    if ( v3 )
    {
      v4 = (Caver::PropertiesComponent *)Caver::SceneObject::ComponentWithInterface(
                                           v3,
                                           (__int64)Caver::PropertiesComponent::Interface);
      if ( v4 )
      {
        Caver::ProgramState::StringAtStackIndex(&v16, v1, 2);
        if ( !*((_BYTE *)v4 + 112) )
          Caver::PropertiesComponent::Load(v4);
        v5 = std::map<std::string,std::string>::operator[]();
        sub_56A528(&v17, v5);
        sub_56A6A8(v18);
        v6 = (void *)(v17 - 24);
        if ( (__int64 *)(v17 - 24) != &qword_6FD2E0 )
        {
          v14 = (unsigned int *)(v17 - 8);
          if ( &pthread_create )
          {
            do
              v15 = __ldaxr(v14);
            while ( __stlxr(v15 - 1, v14) );
          }
          else
          {
            v15 = (*v14)--;
          }
          if ( v15 <= 0 )
            operator delete(v6);
        }
        v7 = (void *)(v16 - 24);
        if ( (__int64 *)(v16 - 24) != &qword_6FD2E0 )
        {
          v8 = (unsigned int *)(v16 - 8);
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
            operator delete(v7);
        }
      }
    }
  }
  else
  {
    v18[0] = &byte_6FD2F8;
  }
  Caver::ProgramState::PushString();
  v10 = (void *)(v18[0] - 24LL);
  if ( (__int64 *)(v18[0] - 24LL) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v18[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v10);
  }
  return 1;
}

