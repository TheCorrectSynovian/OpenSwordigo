/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028EE80
 * Mangled: _ZN5Caver14SkillComponent18HasFinishedCastingEv
 * Demangled: Caver::SkillComponent::HasFinishedCasting(void)
 *
 * Callers: 1
 *   0x00000000001F3D50  Caver::SkillComponent::HasFinishedCasting(void)
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x000000000028EE8C string=0x000000000028EE90 "`f@"
 *   insn=0x000000000028EE94 string=0x000000000028EE98 ""
 *   insn=0x000000000028EEA0 string=0x000000000028EEA4 "@"
 *   insn=0x000000000028EEA4 string=0x000000000028EEA8 ""
 *   insn=0x000000000028EEA8 string=0x000000000028EEAC ""
 *   insn=0x000000000028EEB0 string=0x000000000028EEB4 ""
 *   insn=0x000000000028EEB0 string=0x000000000028EEC0 "`b@"
 *   insn=0x000000000028EEB4 string=0x000000000028EEB8 ""
 *   insn=0x000000000028EEC8 string=0x000000000028EECC "@"
 *   insn=0x000000000028EECC string=0x000000000028EED0 ""
 *   insn=0x000000000028EED0 string=0x000000000028EED4 ""
 *   insn=0x000000000028EED8 string=0x000000000028EEDC ""
 *   insn=0x000000000028EEDC string=0x000000000028EEE0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillComponent::HasFinishedCasting(Caver::SkillComponent *this)
{
  __int64 v2; // x0
  int v3; // w8
  _DWORD *v4; // x0
  int v5; // w8

  v2 = *((_QWORD *)this + 25);
  if ( !v2 )
    return 1;
  if ( *(_BYTE *)(v2 + 184) )
  {
    *((_QWORD *)this + 25) = 0;
    v3 = *(_DWORD *)(v2 + 8) - 1;
    *(_DWORD *)(v2 + 8) = v3;
    if ( !v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v4 = (_DWORD *)*((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = 0;
    if ( v4 )
    {
      v5 = v4[2] - 1;
      v4[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    return 1;
  }
  return 0;
}

