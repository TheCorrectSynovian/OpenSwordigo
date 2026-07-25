/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002634A8
 * Mangled: sub_2634A8
 * Demangled: sub_2634A8
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x0000000000263D6C  Caver::CollectableItemComponent::className(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x00000000002634B8 string=0x00000000002634BC "U"
 *   insn=0x00000000002634C8 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002634D4 string=0x00000000001FC790 "0'"
 *   insn=0x00000000002634DC string=0x00000000002634E0 "`"
 *   insn=0x00000000002634E4 string=0x00000000002634E8 "!"
 *   insn=0x00000000002634E8 string=0x00000000002634EC "=t"
 *   insn=0x000000000026350C string=0x0000000000263510 "f"
 *   insn=0x0000000000263514 string=0x0000000000263518 "\t$"
 *   insn=0x0000000000263518 string=0x000000000026351C ")"
 *   insn=0x0000000000263524 string=0x0000000000263528 "a"
 *   insn=0x0000000000263528 string=0x0000000000263554 "\t$"
 *   insn=0x0000000000263538 string=0x0000000000263598 "NK"
 *   insn=0x0000000000263554 string=0x0000000000263558 ")=G"
 *   insn=0x0000000000263558 string=0x000000000026355C "!"
 *   insn=0x0000000000263560 string=0x0000000000263564 "\t"
 *   insn=0x0000000000263560 string=0x0000000000263578 "\t"
 *   insn=0x0000000000263564 string=0x0000000000263568 "*"
 *   insn=0x0000000000263568 string=0x000000000026356C "\n"
 *   insn=0x0000000000263574 string=0x0000000000263584 "?"
 *   insn=0x0000000000263578 string=0x000000000026357C "*"
 *   insn=0x000000000026357C string=0x0000000000263580 "\n"
 *   insn=0x0000000000263584 string=0x0000000000263588 ","
 *   insn=0x0000000000263598 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026359C string=0x00000000002635A0 "\n$"
 *   insn=0x00000000002635A0 string=0x00000000002635A4 "J"
 *   insn=0x00000000002635A8 string=0x00000000002635AC "(a"
 *   insn=0x00000000002635B4 string=0x00000000002635B8 "\n$"
 *   insn=0x00000000002635B8 string=0x00000000002635BC "J=G"
 *   insn=0x00000000002635BC string=0x00000000002635C0 ")!"
 *   insn=0x00000000002635C4 string=0x00000000002635C8 "*"
 *   insn=0x00000000002635C4 string=0x00000000002635F4 "*"
 *   insn=0x00000000002635C8 string=0x00000000002635CC "K"
 *   insn=0x00000000002635CC string=0x00000000002635D0 "+"
 *   insn=0x00000000002635D4 string=0x00000000002635D8 "_"
 *   insn=0x00000000002635E4 string=0x00000000002635E8 "o"
 *   insn=0x00000000002635F4 string=0x00000000002635F8 "K"
 *   insn=0x00000000002635F8 string=0x00000000002635FC "+"
 *   insn=0x00000000002635FC string=0x0000000000263600 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2634A8(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20
  void *v5; // x0
  unsigned int *v7; // x8
  int v8; // w9
  __int64 v9[3]; // [xsp+8h] [xbp-38h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::CollectableItemComponent::Interface);
      if ( v4 )
      {
        Caver::ProgramState::StringAtStackIndex(v9, v1, 2);
        sub_56A6A8(v4 + 128);
        v5 = (void *)(v9[0] - 24);
        if ( (__int64 *)(v9[0] - 24) != &qword_6FD2E0 )
        {
          v7 = (unsigned int *)(v9[0] - 8);
          if ( &pthread_create )
          {
            do
              v8 = __ldaxr(v7);
            while ( __stlxr(v8 - 1, v7) );
          }
          else
          {
            v8 = (*v7)--;
          }
          if ( v8 <= 0 )
            operator delete(v5);
        }
      }
    }
  }
  return 0;
}

