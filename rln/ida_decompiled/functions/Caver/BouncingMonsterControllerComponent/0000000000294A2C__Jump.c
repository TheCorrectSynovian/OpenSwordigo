/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000294A2C
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponent4JumpEv
 * Demangled: Caver::BouncingMonsterControllerComponent::Jump(void)
 *
 * Callers: 1
 *   0x0000000000203700  Caver::BouncingMonsterControllerComponent::Jump(void)
 *
 * Callees: 4
 *   0x00000000001F4B80  Caver::PhysicsObjectState::setVelocity(Caver::Vector2 const&)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 26
 *   insn=0x0000000000294A38 string=0x0000000000294A3C "T"
 *   insn=0x0000000000294A44 string=0x0000000000294A48 ") "
 *   insn=0x0000000000294A4C string=0x0000000000294A50 "h"
 *   insn=0x0000000000294A50 string=0x0000000000294A54 "\tY"
 *   insn=0x0000000000294A54 string=0x0000000000294A58 "`r@"
 *   insn=0x0000000000294A5C string=0x0000000000294A60 "`B"
 *   insn=0x0000000000294A5C string=0x0000000000294A70 ""
 *   insn=0x0000000000294A68 string=0x0000000000294A6C "`r@"
 *   insn=0x0000000000294A68 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000294A70 string=0x0000000000294A74 ""
 *   insn=0x0000000000294A7C string=0x0000000000294A80 "`\nA"
 *   insn=0x0000000000294A84 string=0x0000000000294A88 "*"
 *   insn=0x0000000000294A88 string=0x0000000000294A8C "`"
 *   insn=0x0000000000294A88 string=0x00000000001F5730 "P'"
 *   insn=0x0000000000294A90 string=0x0000000000294A94 " "
 *   insn=0x0000000000294A98 string=0x0000000000294A9C "h"
 *   insn=0x0000000000294A9C string=0x0000000000294AA0 "h"
 *   insn=0x0000000000294AA0 string=0x0000000000294AAC "hB@"
 *   insn=0x0000000000294AAC string=0x0000000000294AB0 "`"
 *   insn=0x0000000000294AB4 string=0x0000000000294AB8 "`"
 *   insn=0x0000000000294ABC string=0x0000000000294AC0 ""
 *   insn=0x0000000000294AC0 string=0x0000000000294AC4 "hB@"
 *   insn=0x0000000000294ACC string=0x0000000000294AD0 ","
 *   insn=0x0000000000294AD0 string=0x00000000001F4B80 "P'"
 *   insn=0x0000000000294AD4 string=0x0000000000294AD8 "h2"
 *   insn=0x0000000000294AFC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BouncingMonsterControllerComponent::Jump(Caver::BouncingMonsterControllerComponent *this)
{
  __int64 v2; // x0
  Caver::Vector2 *v3; // x0
  unsigned __int64 v4; // d0
  __int64 v5; // x8
  __int64 result; // x0
  float32x2_t v7; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v8[2]; // [xsp+10h] [xbp-20h] BYREF

  v8[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_WORD *)(*((_QWORD *)this + 32) + 44LL) = 257;
  v2 = *((_QWORD *)this + 28);
  if ( !v2 )
  {
    Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 208), this);
    v2 = *((_QWORD *)this + 28);
  }
  v3 = (Caver::Vector2 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
  *((_DWORD *)v3 + 3) = 0;
  Caver::Vector2::FromAngle((__int64 *)&v7, v3, *((float *)this + 66));
  v4 = vmul_n_f32(v7, *((float *)this + 67)).n64_u64[0];
  v8[0] = v4;
  if ( (*((_DWORD *)this + 68) & 0x80000000) != 0 )
  {
    *(float *)&v4 = -*(float *)&v4;
    LODWORD(v8[0]) = v4;
  }
  v5 = *((_QWORD *)this + 16);
  *((_DWORD *)this + 69) = v4;
  if ( !v5 )
  {
    Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 112), this);
    v5 = *((_QWORD *)this + 16);
  }
  result = Caver::PhysicsObjectState::setVelocity((Caver::PhysicsObjectState *)(v5 + 120), (const Caver::Vector2 *)v8);
  *((_WORD *)this + 140) = 1;
  return result;
}

