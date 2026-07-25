/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B4CF0
 * Mangled: sub_2B4CF0
 * Demangled: sub_2B4CF0
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x00000000002B50F8  Caver::ElevatorControllerComponent::className(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 43
 *   insn=0x00000000002B4D04 string=0x00000000002B4D08 "V"
 *   insn=0x00000000002B4D14 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002B4D20 string=0x00000000002B4D24 "`"
 *   insn=0x00000000002B4D20 string=0x00000000001FC790 "0'"
 *   insn=0x00000000002B4D40 string=0x00000000002B4D44 "4"
 *   insn=0x00000000002B4D48 string=0x00000000002B4D4C "!"
 *   insn=0x00000000002B4D50 string=0x00000000002B4D54 "#."
 *   insn=0x00000000002B4D58 string=0x00000000002B4D5C "s"
 *   insn=0x00000000002B4D6C string=0x00000000002B4D70 "("
 *   insn=0x00000000002B4D84 string=0x00000000002B4D88 "@"
 *   insn=0x00000000002B4D84 string=0x00000000001F5190 "P'"
 *   insn=0x00000000002B4D98 string=0x00000000002B4D9C "("
 *   insn=0x00000000002B4DB0 string=0x00000000002B4DB4 "`"
 *   insn=0x00000000002B4DB8 string=0x00000000002B4DBC "h"
 *   insn=0x00000000002B4DC0 string=0x00000000002B4DC4 "("
 *   insn=0x00000000002B4DD8 string=0x00000000002B4DDC "`"
 *   insn=0x00000000002B4DE0 string=0x00000000002B4DE4 "h"
 *   insn=0x00000000002B4DEC string=0x00000000002B4DF0 ")"
 *   insn=0x00000000002B4E08 string=0x00000000002B4E0C "!"
 *   insn=0x00000000002B4E2C string=0x00000000002B4E30 ")=G"
 *   insn=0x00000000002B4E30 string=0x00000000002B4E34 "!"
 *   insn=0x00000000002B4E38 string=0x00000000002B4E3C "\t"
 *   insn=0x00000000002B4E38 string=0x00000000002B4E50 "\t"
 *   insn=0x00000000002B4E3C string=0x00000000002B4E40 "*"
 *   insn=0x00000000002B4E40 string=0x00000000002B4E44 "\n"
 *   insn=0x00000000002B4E4C string=0x00000000002B4E5C "?"
 *   insn=0x00000000002B4E50 string=0x00000000002B4E54 "*"
 *   insn=0x00000000002B4E54 string=0x00000000002B4E58 "\n"
 *   insn=0x00000000002B4E64 string=0x00000000002B4E68 "O"
 *   insn=0x00000000002B4E70 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B4E78 string=0x00000000002B4E7C "J"
 *   insn=0x00000000002B4E80 string=0x00000000002B4E84 "(a"
 *   insn=0x00000000002B4E90 string=0x00000000002B4E94 "J=G"
 *   insn=0x00000000002B4E94 string=0x00000000002B4E98 ")!"
 *   insn=0x00000000002B4E9C string=0x00000000002B4EA0 "*"
 *   insn=0x00000000002B4E9C string=0x00000000002B4ECC "*"
 *   insn=0x00000000002B4EA0 string=0x00000000002B4EA4 "K"
 *   insn=0x00000000002B4EA4 string=0x00000000002B4EA8 "+"
 *   insn=0x00000000002B4EAC string=0x00000000002B4EB0 "_"
 *   insn=0x00000000002B4EBC string=0x00000000002B4EC0 "9"
 *   insn=0x00000000002B4ECC string=0x00000000002B4ED0 "K"
 *   insn=0x00000000002B4ED0 string=0x00000000002B4ED4 "+"
 *   insn=0x00000000002B4ED4 string=0x00000000002B4ED8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2B4CF0(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  __int64 v4; // x19
  const void *v5; // x20
  size_t v6; // x21
  char *v7; // x0
  unsigned int *v9; // x8
  int v10; // w9
  void *v11[3]; // [xsp+8h] [xbp-48h] BYREF

  v11[2] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  Caver::ProgramState::StringAtStackIndex((__int64 *)v11, v1, 2);
  if ( v3 )
  {
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::ElevatorControllerComponent::Interface);
    if ( v4 )
    {
      v5 = v11[0];
      v6 = *((_QWORD *)v11[0] - 3);
      if ( v6 == *(_QWORD *)(qword_6E8BE0 - 24) && !memcmp(v11[0], (const void *)qword_6E8BE0, *((_QWORD *)v11[0] - 3)) )
        *(_DWORD *)(v4 + 152) = 0;
      if ( v6 == *(_QWORD *)(qword_6E8BE8 - 24) && !memcmp(v5, (const void *)qword_6E8BE8, v6) )
        *(_DWORD *)(v4 + 152) = 1;
      if ( v6 == *(_QWORD *)(qword_6E8BF0 - 24) && !memcmp(v5, (const void *)qword_6E8BF0, v6) )
        *(_DWORD *)(v4 + 152) = 2;
    }
  }
  v7 = (char *)v11[0] - 24;
  if ( (char *)v11[0] - 24 != (char *)&qword_6FD2E0 )
  {
    v9 = (unsigned int *)((char *)v11[0] - 8);
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
      operator delete(v7);
  }
  return 0;
}

