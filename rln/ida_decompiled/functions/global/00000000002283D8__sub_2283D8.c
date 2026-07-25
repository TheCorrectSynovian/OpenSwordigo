/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002283D8
 * Mangled: sub_2283D8
 * Demangled: sub_2283D8
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A50  Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(void)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000228710  Caver::ModelTransformControllerComponent::~ModelTransformControllerComponent()
 *   0x0000000000228978  Caver::ModelTransformControllerComponent::Interface(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x00000000002283E8 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002283F4 string=0x00000000002283F8 "`"
 *   insn=0x00000000002283F4 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000228414 string=0x0000000000228418 "!"
 *   insn=0x000000000022841C string=0x0000000000228420 "p`"
 *   insn=0x0000000000228428 string=0x0000000000228448 "h"
 *   insn=0x000000000022842C string=0x0000000000228430 "l4"
 *   insn=0x0000000000228430 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000228438 string=0x00000000001F7A50 "0'"
 *   insn=0x0000000000228440 string=0x0000000000228444 "W0"
 *   insn=0x0000000000228444 string=0x00000000001F45A0 "P'"
 *   insn=0x0000000000228450 string=0x0000000000228454 "h\n@"
 *   insn=0x000000000022848C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002284A8 string=0x00000000002284AC "V"
 *   insn=0x00000000002284C4 string=0x00000000002284C8 " "
 *   insn=0x00000000002284E4 string=0x00000000002284E8 "!"
 *   insn=0x00000000002284EC string=0x00000000002284F0 "<`"
 *   insn=0x00000000002284F8 string=0x0000000000228518 "h"
 *   insn=0x00000000002284FC string=0x0000000000228500 "84"
 *   insn=0x0000000000228504 string=0x0000000000228508 "R="
 *   insn=0x0000000000228510 string=0x0000000000228514 "#0"
 *   insn=0x0000000000228520 string=0x0000000000228524 "h\n@"
 *   insn=0x0000000000228564 string=0x0000000000228580 "T7"
 *   insn=0x0000000000228580 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000228588 string=0x000000000022858C "I;"
 *   insn=0x00000000002285B0 string=0x00000000002285B4 "wP"
 *   insn=0x00000000002285B4 string=0x00000000002285B8 "`"
 *   insn=0x00000000002285C8 string=0x00000000002285CC ""
 *   insn=0x00000000002285C8 string=0x00000000001FABE0 "0'"
 *   insn=0x00000000002285D4 string=0x00000000002285D8 "!"
 *   insn=0x0000000000228608 string=0x0000000000584004 "5"
 *   insn=0x0000000000228628 string=0x000000000022862C "mI"
 *   insn=0x0000000000228664 string=0x0000000000228668 "^K"
 *   insn=0x0000000000228670 string=0x0000000000228674 "GP"
 *   insn=0x0000000000228674 string=0x0000000000228678 " "
 *   insn=0x0000000000228684 string=0x0000000000228688 "VI"
 *   insn=0x0000000000228688 string=0x000000000022868C ""
 *   insn=0x0000000000228694 string=0x0000000000228698 "!"
 *   insn=0x00000000002286E0 string=0x00000000002286E4 "?I"
 *   insn=0x0000000000228708 string=0x000000000022870C "nd"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2283D8(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x19
  __int64 v6; // x21
  int v7; // w8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    Caver::ProgramState::PointerAtStackIndex(v1);
    v5 = v4;
    if ( v3 )
    {
      v6 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::ModelTransformControllerComponent::Interface);
      if ( !v6 )
      {
        v6 = operator new(0xB0u);
        Caver::ModelTransformControllerComponent::ModelTransformControllerComponent((Caver::ModelTransformControllerComponent *)v6);
        Caver::SceneObject::AddComponent(v3, (Caver::Component *)v6);
      }
      *(_QWORD *)(v6 + 140) = *(_QWORD *)v5;
      v7 = *(_DWORD *)(v5 + 8);
      *(_BYTE *)(v6 + 136) = 1;
      *(_DWORD *)(v6 + 148) = v7;
    }
  }
  else
  {
    Caver::ProgramState::PointerAtStackIndex(v1);
  }
  return 0;
}

