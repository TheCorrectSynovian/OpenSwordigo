/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028EC2C
 * Mangled: _ZN5Caver14SkillComponent13FinishCastingEv
 * Demangled: Caver::SkillComponent::FinishCasting(void)
 *
 * Callers: 1
 *   0x00000000001F4090  Caver::SkillComponent::FinishCasting(void)
 *
 * Callees: 6
 *   0x00000000001F5990  Caver::SceneObject::WorldPointFromLocalPoint(Caver::Vector2 const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F6190  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 77
 *   insn=0x000000000028EC3C string=0x000000000028EC40 "U"
 *   insn=0x000000000028EC4C string=0x000000000028EC50 "`f@"
 *   insn=0x000000000028EC50 string=0x000000000028EC54 " "
 *   insn=0x000000000028EC54 string=0x000000000028EC58 ""
 *   insn=0x000000000028EC54 string=0x000000000028EC78 "`Z@"
 *   insn=0x000000000028EC58 string=0x000000000028EC5C ""
 *   insn=0x000000000028EC64 string=0x000000000028EC68 "`f@"
 *   insn=0x000000000028EC68 string=0x000000000028EC6C ""
 *   insn=0x000000000028EC6C string=0x000000000028EC70 ""
 *   insn=0x000000000028EC70 string=0x000000000028EC74 "E"
 *   insn=0x000000000028EC7C string=0x000000000028EC9C "hf@"
 *   insn=0x000000000028EC80 string=0x000000000028EC84 ""
 *   insn=0x000000000028EC88 string=0x000000000028EC8C "@"
 *   insn=0x000000000028EC8C string=0x000000000028EC90 ""
 *   insn=0x000000000028EC90 string=0x000000000028EC94 ""
 *   insn=0x000000000028EC98 string=0x000000000028EDB0 ""
 *   insn=0x000000000028EC9C string=0x000000000028ECA0 "h"
 *   insn=0x000000000028ECA0 string=0x000000000028ECA4 ""
 *   insn=0x000000000028ECA4 string=0x000000000028ECA8 "`"
 *   insn=0x000000000028ECB0 string=0x000000000028ECB4 "\t\t@"
 *   insn=0x000000000028ECB4 string=0x000000000028ECB8 ")"
 *   insn=0x000000000028ECB8 string=0x000000000028ECBC "\t\t"
 *   insn=0x000000000028ECC0 string=0x000000000028ECC4 "3"
 *   insn=0x000000000028ECC4 string=0x00000000001F6190 "0'"
 *   insn=0x000000000028ECCC string=0x000000000028ECD0 "@"
 *   insn=0x000000000028ECCC string=0x000000000028ECEC "`"
 *   insn=0x000000000028ECD0 string=0x000000000028ECD4 ""
 *   insn=0x000000000028ECD4 string=0x000000000028ECD8 ""
 *   insn=0x000000000028ECDC string=0x000000000028ECE0 ""
 *   insn=0x000000000028ECE0 string=0x000000000028ECE4 ""
 *   insn=0x000000000028ECEC string=0x000000000028ECF0 "tb@"
 *   insn=0x000000000028ECF0 string=0x000000000028ECF4 "a""
 *   insn=0x000000000028ECF8 string=0x000000000028ECFC "%"
 *   insn=0x000000000028ECFC string=0x00000000001F5990 "P'"
 *   insn=0x000000000028ED10 string=0x000000000028ED14 "!"
 *   insn=0x000000000028ED14 string=0x000000000028ED18 "  ""
 *   insn=0x000000000028ED24 string=0x000000000028ED28 "\t"
 *   insn=0x000000000028ED34 string=0x000000000028ED38 "#8#"
 *   insn=0x000000000028ED38 string=0x000000000028ED3C "c"
 *   insn=0x000000000028ED3C string=0x000000000028ED40 "` ""
 *   insn=0x000000000028ED40 string=0x000000000028ED44 "I"
 *   insn=0x000000000028ED44 string=0x000000000028ED48 ")"
 *   insn=0x000000000028ED44 string=0x000000000028ED6C "h"
 *   insn=0x000000000028ED4C string=0x000000000028ED50 "\t"
 *   insn=0x000000000028ED60 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000028ED6C string=0x000000000028ED70 "ib@"
 *   insn=0x000000000028ED70 string=0x000000000028ED74 "y@"
 *   insn=0x000000000028ED74 string=0x000000000028ED78 "(y"
 *   insn=0x000000000028ED78 string=0x000000000028ED7C "`f@"
 *   insn=0x000000000028ED7C string=0x000000000028ED80 ""
 *   insn=0x000000000028ED80 string=0x000000000028ED84 ""
 *   insn=0x000000000028ED98 string=0x000000000028EDC8 "B"
 *   insn=0x000000000028EDB0 string=0x000000000028EDB4 ""
 *   insn=0x000000000028EDB8 string=0x000000000028EDBC "hf@"
 *   insn=0x000000000028EDBC string=0x000000000028EDC0 "("
 *   insn=0x000000000028EDC8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028EDD0 string=0x000000000028EDD4 "("
 *   insn=0x000000000028EDD4 string=0x000000000028EDD8 "\t\t@"
 *   insn=0x000000000028EDD8 string=0x000000000028EDDC ")"
 *   insn=0x000000000028EDDC string=0x000000000028EDE0 "\t\t"
 *   insn=0x000000000028EDE4 string=0x000000000028EDE8 "\t"
 *   insn=0x000000000028EDE8 string=0x000000000028EDEC ")"
 *   insn=0x000000000028EDF0 string=0x000000000028EDF4 " "
 *   insn=0x000000000028EDFC string=0x000000000028EE00 "S"
 *   insn=0x000000000028EE10 string=0x000000000028EE14 "`f@"
 *   insn=0x000000000028EE14 string=0x000000000028EE18 " "
 *   insn=0x000000000028EE18 string=0x000000000028EE1C ""
 *   insn=0x000000000028EE18 string=0x000000000028EE3C "`Z@"
 *   insn=0x000000000028EE1C string=0x000000000028EE20 ""
 *   insn=0x000000000028EE28 string=0x000000000028EE2C "`f@"
 *   insn=0x000000000028EE2C string=0x000000000028EE30 ""
 *   insn=0x000000000028EE44 string=0x000000000028EE48 ""
 *   insn=0x000000000028EE4C string=0x000000000028EE50 "@"
 *   insn=0x000000000028EE50 string=0x000000000028EE54 ""
 *   insn=0x000000000028EE54 string=0x000000000028EE58 ""
 *   insn=0x000000000028EE5C string=0x000000000028EE6C ""
 *   insn=0x000000000028EE78 string=0x000000000028EE7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillComponent::FinishCasting(Caver::SkillComponent *this)
{
  __int64 v2; // x0
  __int64 (*v3)(void); // x8
  __int64 result; // x0
  int v5; // w8
  __int64 v6; // x8
  _DWORD *v7; // x8
  int v8; // w8
  __int64 v9; // x20
  int v10; // w9
  _DWORD *v11; // x8
  _DWORD *v12; // [xsp+20h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 25);
  if ( !v2 || ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 272LL))(v2) & 1) == 0 )
  {
    result = *((_QWORD *)this + 22);
    if ( result
      && (*(_BYTE *)(result + 232) = 1,
          *((_QWORD *)this + 22) = 0,
          v5 = *(_DWORD *)(result + 8) - 1,
          (*(_DWORD *)(result + 8) = v5) == 0) )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      v6 = *((_QWORD *)this + 25);
      if ( !v6 )
        return result;
    }
    else
    {
      v6 = *((_QWORD *)this + 25);
      if ( !v6 )
        return result;
    }
    v7 = *(_DWORD **)(v6 + 40);
    v12 = v7;
    if ( v7 )
      ++v7[2];
    Caver::SceneObject::AddChildObject();
    if ( v12 )
    {
      v8 = v12[2] - 1;
      v12[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
    }
    v9 = *((_QWORD *)this + 24);
    Caver::SceneObject::WorldPointFromLocalPoint();
    if ( fabsf(*(float *)&v12 - *(float *)(v9 + 112)) <= 0.0001 )
    {
      v11 = (_DWORD *)(v9 + 116);
      if ( fabsf(*((float *)&v12 + 1) - *(float *)(v9 + 116)) <= 0.0001 )
      {
LABEL_18:
        *(_DWORD *)(*((_QWORD *)this + 24) + 120LL) = *(_DWORD *)(*((_QWORD *)this + 5) + 120LL);
        v3 = *(__int64 (**)(void))(**((_QWORD **)this + 25) + 264LL);
        return v3();
      }
      v10 = HIDWORD(v12);
    }
    else
    {
      v10 = HIDWORD(v12);
      v11 = (_DWORD *)(v9 + 116);
    }
    *(_DWORD *)(v9 + 112) = (_DWORD)v12;
    *v11 = v10;
    if ( !*(_BYTE *)(v9 + 180) )
    {
      Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v9);
      *(_BYTE *)(v9 + 180) = 1;
    }
    goto LABEL_18;
  }
  v3 = *(__int64 (**)(void))(**((_QWORD **)this + 25) + 288LL);
  return v3();
}

