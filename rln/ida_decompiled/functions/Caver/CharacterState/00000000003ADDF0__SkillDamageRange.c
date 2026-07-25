/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003ADDF0
 * Mangled: _ZN5Caver14CharacterState16SkillDamageRangeEv
 * Demangled: Caver::CharacterState::SkillDamageRange(void)
 *
 * Callers: 1
 *   0x00000000001FBBA0  Caver::CharacterState::SkillDamageRange(void)
 *
 * Callees: 1
 *   0x00000000001F86E0  Caver::CharacterState::TrinketDamageMultiplier(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 13
 *   insn=0x00000000003ADE04 string=0x00000000003ADE08 "("
 *   insn=0x00000000003ADE0C string=0x00000000003ADE10 "@"
 *   insn=0x00000000003ADE10 string=0x00000000003ADE14 "),@"
 *   insn=0x00000000003ADE14 string=0x00000000003ADE18 ")"
 *   insn=0x00000000003ADE18 string=0x00000000003ADE1C "!"
 *   insn=0x00000000003ADE1C string=0x00000000003ADE20 "  "
 *   insn=0x00000000003ADE24 string=0x00000000003ADE28 "(!"
 *   insn=0x00000000003ADE2C string=0x00000000003ADE3C "h.@"
 *   insn=0x00000000003ADE30 string=0x00000000003ADE34 "+*"
 *   insn=0x00000000003ADE34 string=0x00000000003ADE38 "\t "
 *   insn=0x00000000003ADE34 string=0x00000000001F86E0 "0'"
 *   insn=0x00000000003ADE4C string=0x00000000003ADE50 "!"
 *   insn=0x00000000003ADE5C string=0x00000000003ADE60 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall Caver::CharacterState::SkillDamageRange(Caver::CharacterState *this)
{
  float v2; // s8
  float v3; // s0

  v2 = (float)((float)(*((_DWORD *)this + 45) - 1) * 0.8) + 1.0;
  if ( *((_QWORD *)this + 17) )
  {
    Caver::CharacterState::TrinketDamageMultiplier();
    v2 = v2 * v3;
  }
  return llroundf(v2 * (float)*(int *)(*((_QWORD *)this + 11) + 28LL))
       | ((unsigned __int64)llroundf(v2 * (float)*(int *)(*((_QWORD *)this + 11) + 32LL)) << 32);
}

