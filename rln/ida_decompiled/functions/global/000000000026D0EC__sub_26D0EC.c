/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026D0EC
 * Mangled: sub_26D0EC
 * Demangled: sub_26D0EC
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 25
 *   insn=0x000000000026D0FC string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026D108 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026D118 string=0x000000000026D11C "!"
 *   insn=0x000000000026D11C string=0x000000000026D120 "0M"
 *   insn=0x000000000026D138 string=0x00000000001FABE0 "0'"
 *   insn=0x000000000026D140 string=0x000000000026D144 ""
 *   insn=0x000000000026D148 string=0x00000000001F8D80 "0'"
 *   insn=0x000000000026D150 string=0x000000000026D154 "hB@"
 *   insn=0x000000000026D154 string=0x000000000026D158 "h"
 *   insn=0x000000000026D15C string=0x000000000026D160 "`"
 *   insn=0x000000000026D15C string=0x000000000026D174 "`\nA"
 *   insn=0x000000000026D164 string=0x000000000026D168 "^*"
 *   insn=0x000000000026D168 string=0x000000000026D16C "hB@"
 *   insn=0x000000000026D168 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026D170 string=0x000000000026D184 "h"
 *   insn=0x000000000026D188 string=0x000000000026D1BC "T"
 *   insn=0x000000000026D18C string=0x000000000026D190 "`"
 *   insn=0x000000000026D18C string=0x0000000000583944 "\n"
 *   insn=0x000000000026D190 string=0x000000000026D194 "!EI"
 *   insn=0x000000000026D198 string=0x000000000026D19C ""
 *   insn=0x000000000026D19C string=0x000000000026D1A0 "i"
 *   insn=0x000000000026D1A4 string=0x000000000026D1A8 "B-H"
 *   insn=0x000000000026D1A8 string=0x000000000026D1AC "!"
 *   insn=0x000000000026D1AC string=0x000000000026D1B0 "!""
 *   insn=0x000000000026D1BC string=0x000000000026D1C0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26D0EC(void *a1)
{
  Caver::ProgramState *v1; // x20
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x19
  float v5; // s0
  float v6; // s8
  char v7; // w20
  __int64 v8; // x8
  __int64 v9; // x8
  float v10; // s0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface);
  else
    v4 = 0;
  Caver::ProgramState::FloatAtStackIndex(v1, 2);
  v6 = v5;
  v7 = Caver::ProgramState::BoolAtStackIndex(v1, 3);
  if ( v4 )
  {
    v8 = *(_QWORD *)(v4 + 128);
    *(float *)(v4 + 268) = v6;
    if ( v8
      || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v4 + 112), (const Caver::Component *)v4),
          (v8 = *(_QWORD *)(v4 + 128)) != 0) )
    {
      *(float *)(v8 + 176) = v6 * (float)*(int *)(v4 + 264);
    }
    v9 = *(_QWORD *)(v4 + 256);
    if ( v9 )
    {
      v10 = *(float *)(v4 + 268);
      if ( v10 > 0.01 )
        *(float *)(v9 + 52) = v10 / (float)(*(float *)(*(_QWORD *)(v4 + 40) + 140LL) * 100.0);
    }
    if ( (v7 & 1) != 0 )
      *(float *)(v4 + 224) = v6;
  }
  return 0;
}

