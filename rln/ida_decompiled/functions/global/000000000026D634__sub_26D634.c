/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026D634
 * Mangled: sub_26D634
 * Demangled: sub_26D634
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x000000000026D640 string=0x000000000026D644 "g7"
 *   insn=0x000000000026D644 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026D650 string=0x000000000026D654 "O<"
 *   insn=0x000000000026D654 string=0x000000000026D658 "@"
 *   insn=0x000000000026D654 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026D664 string=0x000000000026D668 "!"
 *   insn=0x000000000026D66C string=0x000000000026D670 " "
 *   insn=0x000000000026D678 string=0x000000000026D67C "h\n@"
 *   insn=0x000000000026D684 string=0x000000000026D688 ""
 *   insn=0x000000000026D688 string=0x000000000026D68C "h\n"
 *   insn=0x000000000026D6B4 string=0x000000000026D6B8 "("
 *   insn=0x000000000026D6B8 string=0x000000000026D6BC "h\n@"
 *   insn=0x000000000026D6BC string=0x000000000026D6C0 ""
 *   insn=0x000000000026D6C0 string=0x000000000026D6C4 "h\n"
 *   insn=0x000000000026D6C8 string=0x000000000026D6CC "h"
 *   insn=0x000000000026D6D0 string=0x000000000026D6D4 ""
 *   insn=0x000000000026D708 string=0x000000000026D70C "("
 *   insn=0x000000000026D70C string=0x000000000026D710 "h\n@"
 *   insn=0x000000000026D710 string=0x000000000026D714 ""
 *   insn=0x000000000026D714 string=0x000000000026D718 "h\n"
 *   insn=0x000000000026D71C string=0x000000000026D720 "h"
 *   insn=0x000000000026D720 string=0x000000000026D724 ""
 *   insn=0x000000000026D730 string=0x000000000026D734 "dP"
 *   insn=0x000000000026D748 string=0x000000000026D74C "%7"
 *   insn=0x000000000026D76C string=0x000000000026D770 "!"
 *   insn=0x000000000026D774 string=0x000000000026D778 "@"
 *   insn=0x000000000026D778 string=0x000000000026D77C "$A"
 *   insn=0x000000000026D788 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26D634(void *a1)
{
  _DWORD *v1; // x19
  Caver::ProgramState *v2; // x20
  char v3; // w21
  Caver::SceneObject **v4; // x0
  Caver::SceneObject *v5; // x0
  __int64 v6; // x0
  bool v7; // w1
  int v8; // w8

  v2 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  v3 = 1;
  Caver::ProgramState::PointerAtStackIndex(v2);
  if ( v4 )
  {
    v5 = *v4;
    if ( v5
      && (v6 = Caver::SceneObject::ComponentWithInterface(v5, (__int64)Caver::EntityControllerComponent::Interface)) != 0 )
    {
      v1 = *(_DWORD **)(v6 + 280);
      v3 = 0;
      if ( v1 )
      {
        v7 = 0;
        ++v1[2];
      }
      else
      {
        v7 = 1;
      }
    }
    else
    {
      v7 = 0;
      v3 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  Caver::ProgramState::PushBool(v2, v7);
  if ( !(v3 & 1 | (v1 == 0)) )
  {
    v8 = v1[2] - 1;
    v1[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v1 + 8LL))(v1);
  }
  return 1;
}

