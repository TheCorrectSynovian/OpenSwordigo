/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000230E74
 * Mangled: sub_230E74
 * Demangled: sub_230E74
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002314D0  Caver::PortalComponent::Interface(void)
 *
 * Referenced strings: 13
 *   insn=0x0000000000230E78 string=0x0000000000230E7C "Y)"
 *   insn=0x0000000000230E7C string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000230E80 string=0x0000000000230E84 "C."
 *   insn=0x0000000000230E84 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000230E8C string=0x0000000000230E90 "@"
 *   insn=0x0000000000230E94 string=0x0000000000230E98 "!tD"
 *   insn=0x0000000000230EA8 string=0x0000000000230EAC "`"
 *   insn=0x0000000000230EB0 string=0x0000000000230EB4 "\t"
 *   insn=0x0000000000230EB8 string=0x0000000000230EBC "@"
 *   insn=0x0000000000230EBC string=0x0000000000230EC0 ""
 *   insn=0x0000000000230EC0 string=0x0000000000230EC4 ""
 *   insn=0x0000000000230EC8 string=0x0000000000230ECC ""
 *   insn=0x0000000000230ECC string=0x0000000000230ED0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_230E74(void *a1)
{
  Caver::ProgramState *v1; // x0
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x0
  int v7; // w8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::PortalComponent::Interface);
      v5 = v4;
      if ( v4 )
      {
        v6 = *(_QWORD *)(v4 + 160);
        if ( v6 )
        {
          *(_BYTE *)(v6 + 232) = 1;
          *(_QWORD *)(v5 + 160) = 0;
          v7 = *(_DWORD *)(v6 + 8) - 1;
          *(_DWORD *)(v6 + 8) = v7;
          if ( !v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        }
      }
    }
  }
  return 0;
}

