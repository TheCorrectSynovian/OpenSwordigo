/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028E580
 * Mangled: _ZN5Caver14SkillComponent17CreateSpellObjectEv
 * Demangled: Caver::SkillComponent::CreateSpellObject(void)
 *
 * Callers: 1
 *   0x0000000000201CB0  Caver::SkillComponent::CreateSpellObject(void)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *   0x000000000028E658  Caver::SkillComponent::BeginCasting(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x000000000028E594 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000028E598 string=0x000000000028E59C "e"
 *   insn=0x000000000028E59C string=0x00000000001FAB30 "0'"
 *   insn=0x000000000028E5A0 string=0x000000000028E5A4 ""
 *   insn=0x000000000028E5A8 string=0x000000000028E5AC "`b@"
 *   insn=0x000000000028E5AC string=0x000000000028E5B0 "tb"
 *   insn=0x000000000028E5B0 string=0x000000000028E5B4 " "
 *   insn=0x000000000028E5B4 string=0x000000000028E5B8 "@"
 *   insn=0x000000000028E5B4 string=0x000000000028E5D8 "a"
 *   insn=0x000000000028E5B8 string=0x000000000028E5BC ""
 *   insn=0x000000000028E5BC string=0x000000000028E5C0 ""
 *   insn=0x000000000028E5C4 string=0x000000000028E5C8 ""
 *   insn=0x000000000028E5C8 string=0x000000000028E5CC ""
 *   insn=0x000000000028E5D0 string=0x000000000028E5D4 "tb@"
 *   insn=0x000000000028E5E0 string=0x00000000001F5A20 "P'"
 *   insn=0x000000000028E5E4 string=0x000000000028E5E8 "`b@"
 *   insn=0x000000000028E5E8 string=0x000000000028E5EC "!4D"
 *   insn=0x000000000028E5EC string=0x00000000002821FC " #"
 *   insn=0x000000000028E5F8 string=0x000000000028E5FC "\t\t@"
 *   insn=0x000000000028E5F8 string=0x000000000028E608 "`f@"
 *   insn=0x000000000028E5FC string=0x000000000028E600 ")"
 *   insn=0x000000000028E600 string=0x000000000028E604 "\t\t"
 *   insn=0x000000000028E608 string=0x000000000028E60C "hf"
 *   insn=0x000000000028E610 string=0x000000000028E614 "@"
 *   insn=0x000000000028E614 string=0x000000000028E618 ""
 *   insn=0x000000000028E618 string=0x000000000028E61C ""
 *   insn=0x000000000028E620 string=0x000000000028E630 ""
 *   insn=0x000000000028E63C string=0x000000000028E640 " "
 *   insn=0x000000000028E64C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::SkillComponent::CreateSpellObject(Caver::SkillComponent *this)
{
  Caver::SceneObject *v2; // x20
  _DWORD *v3; // x0
  int v4; // w8
  __int64 v5; // x0
  __int64 v6; // x8
  _DWORD *result; // x0
  int v8; // w8

  v2 = (Caver::SceneObject *)operator new(0x128u);
  Caver::SceneObject::SceneObject(v2);
  ++*((_DWORD *)v2 + 2);
  v3 = (_DWORD *)*((_QWORD *)this + 24);
  *((_QWORD *)this + 24) = v2;
  if ( v3 )
  {
    v4 = v3[2] - 1;
    v3[2] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(v3);
      v2 = (Caver::SceneObject *)*((_QWORD *)this + 24);
    }
  }
  Caver::SceneObject::InitWithTemplate(v2);
  v5 = Caver::SceneObject::ComponentWithInterface(
         *((Caver::SceneObject **)this + 24),
         (__int64)Caver::SpellComponent::Interface);
  v6 = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  result = (_DWORD *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = v6;
  if ( result )
  {
    v8 = result[2] - 1;
    result[2] = v8;
    if ( !v8 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

