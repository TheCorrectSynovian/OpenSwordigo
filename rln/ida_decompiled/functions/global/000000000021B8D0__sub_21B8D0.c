/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021B8D0
 * Mangled: sub_21B8D0
 * Demangled: sub_21B8D0
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 15
 *   insn=0x000000000021B8E0 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000021B8EC string=0x000000000021B8F0 "`"
 *   insn=0x000000000021B8EC string=0x00000000001FC790 "0'"
 *   insn=0x000000000021B908 string=0x00000000001FBCD0 "0'"
 *   insn=0x000000000021B918 string=0x00000000001F8D80 "0'"
 *   insn=0x000000000021B91C string=0x000000000021B920 "t"
 *   insn=0x000000000021B920 string=0x000000000021B924 "U"
 *   insn=0x000000000021B930 string=0x00000000001F8520 "0'"
 *   insn=0x000000000021B934 string=0x000000000021B938 "\t"
 *   insn=0x000000000021B938 string=0x000000000021B93C "h"
 *   insn=0x000000000021B940 string=0x000000000021B944 "@"
 *   insn=0x000000000021B944 string=0x000000000021B948 ""
 *   insn=0x000000000021B950 string=0x000000000021B954 "h"
 *   insn=0x000000000021B960 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000021B964 string=0x000000000021B968 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_21B8D0(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  int v4; // w21
  char v5; // w19
  __int64 v6; // x0
  __int64 v7; // x19

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  v4 = Caver::ProgramState::IntAtStackIndex(v1, 2);
  v5 = Caver::ProgramState::BoolAtStackIndex(v1, 3);
  if ( v3 )
  {
    if ( v4 )
    {
      Caver::SceneObject::ComponentWithIdentifier(v3);
      if ( v6 )
      {
        if ( (v5 & 1) != *(_BYTE *)(v6 + 376) )
        {
          *(_BYTE *)(v6 + 376) = v5 & 1;
          if ( (v5 & 1) != 0 )
          {
            v7 = *(_QWORD *)(v6 + 40);
            if ( !*(_BYTE *)(v7 + 180) )
            {
              Caver::SceneObject::RegisterForWorldBoundsUpdate(*(Caver::SceneObject **)(v6 + 40));
              *(_BYTE *)(v7 + 180) = 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

