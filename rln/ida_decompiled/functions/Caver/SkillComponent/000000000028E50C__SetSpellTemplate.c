/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028E50C
 * Mangled: _ZN5Caver14SkillComponent16SetSpellTemplateERKN5boost13intrusive_ptrINS_14ObjectTemplateEEE
 * Demangled: Caver::SkillComponent::SetSpellTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Callers: 1
 *   0x00000000002021E0  Caver::SkillComponent::SetSpellTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Callees: 1
 *   0x0000000000201CB0  Caver::SkillComponent::CreateSpellObject(void)
 *
 * Referenced strings: 14
 *   insn=0x000000000028E514 string=0x000000000028E518 "("
 *   insn=0x000000000028E520 string=0x000000000028E524 "\t\t@"
 *   insn=0x000000000028E520 string=0x000000000028E530 "`^@"
 *   insn=0x000000000028E524 string=0x000000000028E528 ")"
 *   insn=0x000000000028E528 string=0x000000000028E52C "\t\t"
 *   insn=0x000000000028E530 string=0x000000000028E534 "h^"
 *   insn=0x000000000028E538 string=0x000000000028E53C "\t@"
 *   insn=0x000000000028E538 string=0x000000000028E54C "H"
 *   insn=0x000000000028E53C string=0x000000000028E540 ")"
 *   insn=0x000000000028E540 string=0x000000000028E544 "\t"
 *   insn=0x000000000028E548 string=0x000000000028E560 ""
 *   insn=0x000000000028E560 string=0x000000000028E564 ""
 *   insn=0x000000000028E568 string=0x000000000028E56C "h^@"
 *   insn=0x000000000028E56C string=0x000000000028E570 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::SkillComponent::SetSpellTemplate(Caver::SkillComponent *this, __int64 *a2)
{
  __int64 v2; // x8
  _DWORD *result; // x0
  int v5; // w9

  v2 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v2 + 8);
  result = (_DWORD *)*((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = v2;
  if ( !result || (v5 = result[2] - 1, (result[2] = v5) != 0) )
  {
    if ( !v2 )
      return result;
    return (_DWORD *)Caver::SkillComponent::CreateSpellObject(this);
  }
  result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  if ( *((_QWORD *)this + 23) )
    return (_DWORD *)Caver::SkillComponent::CreateSpellObject(this);
  return result;
}

