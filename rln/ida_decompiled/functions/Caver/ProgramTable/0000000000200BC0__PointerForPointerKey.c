/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200BC0
 * Mangled: ._ZN5Caver12ProgramTable20PointerForPointerKeyEPv
 * Demangled: Caver::ProgramTable::PointerForPointerKey(void *)
 *
 * Callers: 3
 *   0x00000000004C12E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000004C1DD8  sub_4C1DD8
 *   0x00000000004C1E70  sub_4C1E70
 *
 * Callees: 1
 *   0x00000000004C1FF0  Caver::ProgramTable::PointerForPointerKey(void *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200BC8 string=0x0000000000200BCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramTable::PointerForPointerKey(Caver::ProgramTable *this, void *a2)
{
  return _ZN5Caver12ProgramTable20PointerForPointerKeyEPv(this, a2);
}

