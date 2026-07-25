/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ACC8C
 * Mangled: _ZN5Caver23ParticleObjectComponent7PrepareEv
 * Demangled: Caver::ParticleObjectComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4B80  Caver::PhysicsObjectState::setVelocity(Caver::Vector2 const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *
 * Referenced strings: 15
 *   insn=0x00000000002ACC9C string=0x00000000002ACCA0 "U"
 *   insn=0x00000000002ACCA8 string=0x00000000002ACCAC "t""
 *   insn=0x00000000002ACCB0 string=0x00000000002ACCB4 "h"
 *   insn=0x00000000002ACCB4 string=0x00000000002ACCB8 "hF"
 *   insn=0x00000000002ACCB8 string=0x00000000002ACCBC "]@"
 *   insn=0x00000000002ACCBC string=0x00000000001FCE30 "0'"
 *   insn=0x00000000002ACCD4 string=0x00000000002ACCD8 "#qO"
 *   insn=0x00000000002ACCE0 string=0x00000000002ACCE4 "!"
 *   insn=0x00000000002ACD00 string=0x00000000002ACD04 "K@"
 *   insn=0x00000000002ACD00 string=0x00000000001F4B80 "P'"
 *   insn=0x00000000002ACD14 string=0x00000000002ACD18 "#"
 *   insn=0x00000000002ACD1C string=0x00000000002ACD20 "!"
 *   insn=0x00000000002ACD2C string=0x00000000002ACD30 "`"
 *   insn=0x00000000002ACD40 string=0x00000000002ACD58 "^%"
 *   insn=0x00000000002ACD58 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::ParticleObjectComponent::Prepare(Caver::ParticleObjectComponent *this)
{
  Caver::PhysicsObjectState *v2; // x20
  Caver *v3; // x0
  float result; // s0
  float v5[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v6; // [xsp+8h] [xbp-28h]

  v2 = (Caver::ParticleObjectComponent *)((char *)this + 136);
  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 17) = *((_QWORD *)this + 5);
  v5[0] = (float)((float)((float)(int)Caver::fastrandom(this) / (float)Caver::FASTRANDOM_MAX) * 400.0) + -200.0;
  v5[1] = 0.0;
  v3 = (Caver *)Caver::PhysicsObjectState::setVelocity(v2, (const Caver::Vector2 *)v5);
  result = (float)((float)((float)(int)Caver::fastrandom(v3) / (float)Caver::FASTRANDOM_MAX) * 200.0) + -100.0;
  *((float *)this + 68) = result;
  return result;
}

