/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000266470
 * Mangled: _ZN5Caver15DamageComponent13HandleMessageEiPv
 * Demangled: Caver::DamageComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F3DF0  Caver::DamageComponent::AddPotentialImpact(boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector2 const&,Caver::Vector2 const&,bool,Caver::Vector4 const&)
 *   0x00000000001F3FD0  Caver::CollisionShapeComponent::collisionShape(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E80  Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 45
 *   insn=0x0000000000266484 string=0x0000000000266488 "V"
 *   insn=0x0000000000266490 string=0x0000000000266494 "?"
 *   insn=0x000000000026649C string=0x00000000002664A0 "hBC9H"
 *   insn=0x00000000002664A0 string=0x00000000002664A4 "H"
 *   insn=0x00000000002664A4 string=0x00000000002664A8 "H"
 *   insn=0x00000000002664A8 string=0x00000000002664AC ""
 *   insn=0x00000000002664B0 string=0x00000000002664B4 "T"
 *   insn=0x00000000002664B4 string=0x00000000002664B8 "H"
 *   insn=0x00000000002664B8 string=0x00000000002664BC "H"
 *   insn=0x00000000002664C0 string=0x00000000002664C4 "i"
 *   insn=0x00000000002664C8 string=0x00000000002664CC ""
 *   insn=0x00000000002664C8 string=0x00000000002664E0 "h"
 *   insn=0x00000000002664E0 string=0x00000000002664E4 ""
 *   insn=0x00000000002664F8 string=0x00000000002665CC "A?"
 *   insn=0x000000000026651C string=0x0000000000266520 "!(B"
 *   insn=0x0000000000266520 string=0x0000000000266524 "/h"
 *   insn=0x0000000000266520 string=0x000000000021C13C "@&"
 *   insn=0x0000000000266524 string=0x0000000000266528 "h"
 *   insn=0x0000000000266528 string=0x000000000026652C ""
 *   insn=0x0000000000266530 string=0x0000000000266534 "h"
 *   insn=0x0000000000266534 string=0x0000000000266538 "\t"
 *   insn=0x000000000026653C string=0x0000000000266540 "`"
 *   insn=0x0000000000266548 string=0x000000000026654C "h"
 *   insn=0x0000000000266548 string=0x00000000001F3FD0 "P'"
 *   insn=0x0000000000266554 string=0x0000000000266558 "JJ"
 *   insn=0x0000000000266558 string=0x00000000001F8E80 "0'"
 *   insn=0x0000000000266570 string=0x0000000000266574 ""
 *   insn=0x00000000002665A0 string=0x00000000002665A4 "U"
 *   insn=0x00000000002665A0 string=0x00000000001F3DF0 "P'"
 *   insn=0x00000000002665A8 string=0x00000000002665AC ""
 *   insn=0x00000000002665BC string=0x00000000002665C0 ""
 *   insn=0x00000000002665CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002665D0 string=0x00000000002665D4 "5"
 *   insn=0x00000000002665D8 string=0x00000000002665DC ""
 *   insn=0x00000000002665E8 string=0x00000000002665EC ""
 *   insn=0x00000000002665FC string=0x0000000000266600 "S"
 *   insn=0x000000000026660C string=0x0000000000266610 "tS"
 *   insn=0x0000000000266610 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000266618 string=0x000000000026661C "]X"
 *   insn=0x000000000026661C string=0x0000000000266620 "`"
 *   insn=0x000000000026661C string=0x00000000001FC790 "0'"
 *   insn=0x0000000000266624 string=0x0000000000266628 " "
 *   insn=0x000000000026662C string=0x0000000000266630 "!hF"
 *   insn=0x0000000000266630 string=0x000000000021C148 "@&"
 *   insn=0x0000000000266638 string=0x000000000026663C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DamageComponent::HandleMessage(Caver::DamageComponent *this, int a2, _QWORD *a3)
{
  __int64 v4; // x20
  __int64 v6; // x0
  Caver::CollisionShape *v7; // x0
  _DWORD *v8; // x21
  int v9; // w8
  __int64 v10[2]; // [xsp+40h] [xbp-40h] BYREF

  v10[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 7 && *((_BYTE *)this + 208) && *(_BYTE *)(*a3 + 381LL) )
  {
    v4 = a3[1];
    if ( *(_BYTE *)(v4 + 380) )
    {
      if ( !*((_BYTE *)a3 + 52) )
        return 0;
    }
    else if ( !*((_BYTE *)a3 + 52) || *(_DWORD *)(v4 + 384) != 6 )
    {
      return 0;
    }
    if ( !*(_QWORD *)(*((_QWORD *)this + 5) + 48LL) )
    {
      v6 = Caver::SceneObject::ComponentWithInterface(
             *(Caver::SceneObject **)(v4 + 40),
             (__int64)Caver::HealthComponent::Interface);
      if ( *((_BYTE *)this + 188) )
      {
        if ( !v6 || *((_DWORD *)this + 45) != *(_DWORD *)(v6 + 136) )
        {
          v7 = (Caver::CollisionShape *)Caver::CollisionShapeComponent::collisionShape((Caver::CollisionShapeComponent *)v4);
          Caver::CollisionShape::NearestPointInShape(v10, v7, (const Caver::Vector2 *)(*((_QWORD *)this + 5) + 112LL));
          v8 = *(_DWORD **)(v4 + 40);
          if ( v8 )
            ++v8[2];
          Caver::DamageComponent::AddPotentialImpact();
          if ( v8 )
          {
            v9 = v8[2] - 1;
            v8[2] = v9;
            if ( !v9 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
          }
        }
      }
    }
  }
  return 0;
}

