/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AD890
 * Mangled: _ZN5Caver14CharacterState25WeaponDamageRangeWithItemERKN5boost10shared_ptrINS_4ItemEEES6_
 * Demangled: Caver::CharacterState::WeaponDamageRangeWithItem(boost::shared_ptr<Caver::Item> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001F3560  Caver::CharacterState::WeaponDamageRangeWithItem(boost::shared_ptr<Caver::Item> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000001F86E0  Caver::CharacterState::TrinketDamageMultiplier(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 10
 *   insn=0x00000000003AD89C string=0x00000000003AD8A0 ""
 *   insn=0x00000000003AD8A0 string=0x00000000003AD8A4 "I"
 *   insn=0x00000000003AD8AC string=0x00000000003AD8B0 ""
 *   insn=0x00000000003AD8B4 string=0x00000000003AD8B8 "  "
 *   insn=0x00000000003AD8BC string=0x00000000003AD8C0 "(!"
 *   insn=0x00000000003AD8C4 string=0x00000000003AD8D4 "h"
 *   insn=0x00000000003AD8CC string=0x00000000003AD8D0 "\t "
 *   insn=0x00000000003AD8CC string=0x00000000001F86E0 "0'"
 *   insn=0x00000000003AD8E4 string=0x00000000003AD8E8 "!"
 *   insn=0x00000000003AD8F4 string=0x00000000003AD8F8 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall Caver::CharacterState::WeaponDamageRangeWithItem(__int64 a1, __int64 a2, _QWORD *a3)
{
  float v4; // s8
  float v5; // s0

  v4 = (float)((float)(*(_DWORD *)(a1 + 176) - 1) * 0.5) + 1.0;
  if ( *a3 )
  {
    Caver::CharacterState::TrinketDamageMultiplier();
    v4 = v4 * v5;
  }
  return llroundf(v4 * (float)*(int *)(*(_QWORD *)a2 + 48LL))
       | ((unsigned __int64)llroundf(v4 * (float)*(int *)(*(_QWORD *)a2 + 52LL)) << 32);
}

