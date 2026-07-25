/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026D47C
 * Mangled: sub_26D47C
 * Demangled: sub_26D47C
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F43F0  Caver::EntityActionComponent::Perform(void)
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x000000000026D48C string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026D498 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026D4A8 string=0x000000000026D4AC "\t:"
 *   insn=0x000000000026D4AC string=0x00000000001FBCD0 "0'"
 *   insn=0x000000000026D4B0 string=0x000000000026D4B4 "5"
 *   insn=0x000000000026D4B8 string=0x000000000026D4BC "!"
 *   insn=0x000000000026D4C0 string=0x000000000026D4C4 "GL"
 *   insn=0x000000000026D4D4 string=0x00000000001F8520 "0'"
 *   insn=0x000000000026D4E0 string=0x000000000026D4E4 "h\n@"
 *   insn=0x000000000026D4E4 string=0x000000000026D4E8 "\t"
 *   insn=0x000000000026D4E8 string=0x000000000026D4EC "h\n"
 *   insn=0x000000000026D4F8 string=0x000000000026D4FC "@"
 *   insn=0x000000000026D4FC string=0x000000000026D500 ""
 *   insn=0x000000000026D500 string=0x000000000026D504 ""
 *   insn=0x000000000026D508 string=0x000000000026D50C ""
 *   insn=0x000000000026D50C string=0x000000000026D510 ""
 *   insn=0x000000000026D524 string=0x000000000026D528 "h\n@"
 *   insn=0x000000000026D524 string=0x00000000001F43F0 "P'"
 *   insn=0x000000000026D528 string=0x000000000026D52C ""
 *   insn=0x000000000026D52C string=0x000000000026D530 "h\n"
 *   insn=0x000000000026D530 string=0x000000000026D534 "!"
 *   insn=0x000000000026D534 string=0x000000000026D538 "h"
 *   insn=0x000000000026D53C string=0x000000000026D540 ""
 *   insn=0x000000000026D570 string=0x000000000026D574 ""
 *   insn=0x000000000026D574 string=0x000000000026D578 "h\n"
 *   insn=0x000000000026D57C string=0x000000000026D580 "h"
 *   insn=0x000000000026D580 string=0x000000000026D584 ""
 *   insn=0x000000000026D594 string=0x000000000026D598 "m"
 *   insn=0x000000000026D5A8 string=0x000000000026D5AC "y<"
 *   insn=0x000000000026D5AC string=0x000000000026D5B0 " "
 *   insn=0x000000000026D5BC string=0x000000000026D5C0 "!"
 *   insn=0x000000000026D5C0 string=0x000000000026D5C4 "L"
 *   insn=0x000000000026D5C4 string=0x000000000026D5C8 "`"
 *   insn=0x000000000026D5CC string=0x000000000026D5D0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26D47C(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x21
  __int64 v4; // x20
  Caver::EntityActionComponent *v5; // x0
  Caver::EntityActionComponent *v6; // x19
  _DWORD *v7; // x0
  int v8; // w8
  int v9; // w8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    Caver::ProgramState::IntAtStackIndex(v1, 2);
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface);
      Caver::SceneObject::ComponentWithIdentifier(v3);
      v6 = v5;
      if ( v4 )
      {
        if ( v5 )
        {
          *((_DWORD *)v5 + 2) += 2;
          v7 = *(_DWORD **)(v4 + 280);
          *(_QWORD *)(v4 + 280) = v6;
          if ( v7 )
          {
            v8 = v7[2] - 1;
            v7[2] = v8;
            if ( !v8 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
          }
          *(_BYTE *)(v4 + 288) = 0;
          *(_DWORD *)(v4 + 292) = 0;
          Caver::EntityActionComponent::Perform(v6);
          v9 = *((_DWORD *)v6 + 2) - 1;
          *((_DWORD *)v6 + 2) = v9;
          if ( !v9 )
            (*(void (__fastcall **)(Caver::EntityActionComponent *))(*(_QWORD *)v6 + 8LL))(v6);
        }
      }
    }
  }
  else
  {
    Caver::ProgramState::IntAtStackIndex(v1, 2);
  }
  return 0;
}

