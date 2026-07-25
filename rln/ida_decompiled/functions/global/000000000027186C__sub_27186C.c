/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027186C
 * Mangled: sub_27186C
 * Demangled: sub_27186C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *
 * Referenced strings: 12
 *   insn=0x0000000000271878 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000271884 string=0x0000000000271888 "`"
 *   insn=0x0000000000271884 string=0x00000000001FC790 "0'"
 *   insn=0x000000000027188C string=0x0000000000271890 " "
 *   insn=0x0000000000271894 string=0x0000000000271898 "!(B"
 *   insn=0x0000000000271898 string=0x000000000027189C "Q;"
 *   insn=0x0000000000271898 string=0x000000000021C13C "@&"
 *   insn=0x00000000002718A8 string=0x00000000002718AC "\t)"
 *   insn=0x00000000002718AC string=0x00000000001FBCD0 "0'"
 *   insn=0x00000000002718B4 string=0x00000000002718B8 "H"
 *   insn=0x00000000002718C0 string=0x00000000002718C4 ""
 *   insn=0x00000000002718C4 string=0x00000000002718C8 "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_27186C(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20
  int v5; // w0
  int v6; // w8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
  {
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::HealthComponent::Interface);
    v5 = Caver::ProgramState::IntAtStackIndex(v1, 2);
    if ( v4 && !*(_BYTE *)(v4 + 120) )
    {
      v6 = *(_DWORD *)(v4 + 124);
      if ( v6 > v5 )
        v6 = v5;
      *(_DWORD *)(v4 + 128) = v6 & ~(v6 >> 31);
    }
  }
  else
  {
    Caver::ProgramState::IntAtStackIndex(v1, 2);
  }
  return 0;
}

