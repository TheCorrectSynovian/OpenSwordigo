/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026DC24
 * Mangled: sub_26DC24
 * Demangled: sub_26DC24
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F4A10  Caver::SwingableWeaponControllerComponent::StartSwing(int,float,float)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x000000000026DC34 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026DC40 string=0x000000000026DC44 "@"
 *   insn=0x000000000026DC40 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026DC50 string=0x000000000026DC54 "!"
 *   insn=0x000000000026DC54 string=0x000000000026DC58 "bJ"
 *   insn=0x000000000026DC5C string=0x000000000026DC60 "t"
 *   insn=0x000000000026DC6C string=0x000000000026DC70 " "
 *   insn=0x000000000026DC70 string=0x000000000026DC74 ""
 *   insn=0x000000000026DC74 string=0x000000000026DC78 ""
 *   insn=0x000000000026DC78 string=0x000000000026DC7C "\t\t@"
 *   insn=0x000000000026DC84 string=0x000000000026DC88 ")\t"
 *   insn=0x000000000026DC88 string=0x000000000026DC8C "\t\t"
 *   insn=0x000000000026DCA8 string=0x000000000026DCAC "@"
 *   insn=0x000000000026DCA8 string=0x000000000026DCC8 "5"
 *   insn=0x000000000026DCAC string=0x000000000026DCB0 ""
 *   insn=0x000000000026DCB0 string=0x000000000026DCB4 ""
 *   insn=0x000000000026DCB8 string=0x000000000026DCBC ""
 *   insn=0x000000000026DCBC string=0x000000000026DCC0 ""
 *   insn=0x000000000026DCC8 string=0x000000000026DCCC "h\n@"
 *   insn=0x000000000026DCCC string=0x000000000026DCD0 ""
 *   insn=0x000000000026DCD0 string=0x000000000026DCD4 "h\n"
 *   insn=0x000000000026DCD8 string=0x000000000026DCDC "h"
 *   insn=0x000000000026DCE0 string=0x000000000026DCE4 ""
 *   insn=0x000000000026DD00 string=0x000000000026DD04 "5"
 *   insn=0x000000000026DD04 string=0x000000000026DD08 "h\n@"
 *   insn=0x000000000026DD08 string=0x000000000026DD0C ""
 *   insn=0x000000000026DD0C string=0x000000000026DD10 "h\n"
 *   insn=0x000000000026DD14 string=0x000000000026DD18 "h"
 *   insn=0x000000000026DD18 string=0x000000000026DD1C ""
 *   insn=0x000000000026DD54 string=0x000000000026DD58 "`"
 *   insn=0x000000000026DD70 string=0x00000000001FBCD0 "0'"
 *   insn=0x000000000026DD80 string=0x000000000026DD84 ""
 *   insn=0x000000000026DD80 string=0x00000000001FABE0 "0'"
 *   insn=0x000000000026DD8C string=0x000000000026DD90 "!"
 *   insn=0x000000000026DDA8 string=0x00000000001F8520 "0'"
 *   insn=0x000000000026DDC4 string=0x000000000026DDC8 "F'"
 *   insn=0x000000000026DDC8 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026DDE0 string=0x000000000026DDE4 ""
 *   insn=0x000000000026DDE4 string=0x00000000001F4A10 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26DC24(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20
  _QWORD *v5; // x0
  _DWORD *v6; // x8
  char v7; // w21
  _DWORD *v8; // x19
  _DWORD *v9; // x0
  int v10; // w8
  int v11; // w8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( !v2 )
    return 0;
  v3 = *v2;
  if ( !v3 )
    return 0;
  v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface);
  if ( !v4 )
    return 0;
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v5 )
  {
    v6 = (_DWORD *)*v5;
    if ( *v5 )
    {
      v7 = 0;
      v8 = (_DWORD *)*v5;
      v6[2] += 2;
      goto LABEL_9;
    }
  }
  else
  {
    v6 = 0;
  }
  v8 = 0;
  v7 = 1;
LABEL_9:
  v9 = *(_DWORD **)(v4 + 240);
  *(_QWORD *)(v4 + 240) = v6;
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  if ( (v7 & 1) == 0 )
  {
    v11 = v8[2] - 1;
    v8[2] = v11;
    if ( !v11 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  return 0;
}

