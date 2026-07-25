/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021B980
 * Mangled: sub_21B980
 * Demangled: sub_21B980
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FFA80  Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>(std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>> *)
 *   0x000000000021BA3C  Caver::CollisionShapeComponent::~CollisionShapeComponent()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x000000000021B98C string=0x000000000021B990 "S"
 *   insn=0x000000000021B990 string=0x000000000021B994 "h"
 *   insn=0x000000000021B99C string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000021B9A0 string=0x000000000021B9A4 "{"
 *   insn=0x000000000021B9A4 string=0x00000000001FC790 "0'"
 *   insn=0x000000000021B9A8 string=0x000000000021B9F8 "h"
 *   insn=0x000000000021B9AC string=0x000000000021B9B0 "@"
 *   insn=0x000000000021B9BC string=0x000000000021B9C0 "0"
 *   insn=0x000000000021B9C8 string=0x000000000021B9CC " "
 *   insn=0x000000000021B9CC string=0x000000000021B9F0 "@"
 *   insn=0x000000000021B9D0 string=0x000000000021B9D4 "*"
 *   insn=0x000000000021B9D4 string=0x000000000021B9D8 "K"
 *   insn=0x000000000021B9D8 string=0x000000000021B9DC "K"
 *   insn=0x000000000021B9DC string=0x000000000021B9E0 "_"
 *   insn=0x000000000021B9DC string=0x000000000021B9E4 ")!"
 *   insn=0x000000000021B9E8 string=0x000000000021B9EC "A"
 *   insn=0x000000000021B9F0 string=0x000000000021B9F4 "/n"
 *   insn=0x000000000021B9F4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021BA04 string=0x000000000021BA1C "-j"
 *   insn=0x000000000021BA1C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021BA24 string=0x000000000021BA28 "h"
 *   insn=0x000000000021BA2C string=0x000000000021BA30 " n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_21B980(void *a1)
{
  Caver::ProgramState *v1; // x0
  _QWORD *v2; // x0

  _ReadStatusReg(TPIDR_EL0);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && *v2 )
    Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>();
  return 0;
}

