/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026064C
 * Mangled: sub_26064C
 * Demangled: sub_26064C
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FB5D0  Caver::SwingableWeaponControllerComponent::SetWeaponHidden(bool)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000261698  Caver::CharControllerComponent::Interface(void)
 *
 * Referenced strings: 21
 *   insn=0x0000000000260658 string=0x000000000026065C "ak"
 *   insn=0x000000000026065C string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000260664 string=0x0000000000260668 "Jp"
 *   insn=0x0000000000260668 string=0x000000000026066C " "
 *   insn=0x0000000000260668 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000260674 string=0x0000000000260678 "!$"
 *   insn=0x0000000000260678 string=0x000000000026067C "!"
 *   insn=0x000000000026067C string=0x0000000000261698 " $"
 *   insn=0x0000000000260690 string=0x00000000001F8D80 "0'"
 *   insn=0x0000000000260694 string=0x0000000000260698 "3"
 *   insn=0x0000000000260698 string=0x000000000026069C "`"
 *   insn=0x00000000002606A0 string=0x00000000002606A4 "u"9"
 *   insn=0x00000000002606A8 string=0x00000000002606AC "`"
 *   insn=0x00000000002606B0 string=0x00000000002606B4 "]"
 *   insn=0x00000000002606B4 string=0x00000000002606B8 "`"
 *   insn=0x00000000002606B4 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002606B8 string=0x00000000002606BC "`"
 *   insn=0x00000000002606BC string=0x00000000002606C8 "`"
 *   insn=0x00000000002606C4 string=0x00000000001FB5D0 "0'"
 *   insn=0x00000000002606CC string=0x00000000002606D0 "`b"
 *   insn=0x00000000002606D8 string=0x00000000002606DC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26064C(void *a1)
{
  Caver::ProgramState *v1; // x20
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x19
  char v5; // w20
  Caver::SwingableWeaponControllerComponent *v6; // x0
  Caver::SwingableWeaponControllerComponent *v7; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
  {
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::CharControllerComponent::Interface);
    v5 = Caver::ProgramState::BoolAtStackIndex(v1, 2);
    if ( v4 )
    {
      v6 = *(Caver::SwingableWeaponControllerComponent **)(v4 + 448);
      *(_BYTE *)(v4 + 456) = v5 & 1;
      if ( v6
        || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v4 + 432), (const Caver::Component *)v4),
            (v6 = *(Caver::SwingableWeaponControllerComponent **)(v4 + 448)) != 0) )
      {
        Caver::SwingableWeaponControllerComponent::SetWeaponHidden(v6);
      }
      v7 = *(Caver::SwingableWeaponControllerComponent **)(v4 + 424);
      if ( v7
        || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v4 + 408), (const Caver::Component *)v4),
            (v7 = *(Caver::SwingableWeaponControllerComponent **)(v4 + 424)) != 0) )
      {
        Caver::SwingableWeaponControllerComponent::SetWeaponHidden(v7);
      }
    }
  }
  else
  {
    Caver::ProgramState::BoolAtStackIndex(v1, 2);
  }
  return 0;
}

