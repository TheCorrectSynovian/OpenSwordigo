/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000289A6C
 * Mangled: _ZN5Caver22MagicHookshotComponent7PrepareEv
 * Demangled: Caver::MagicHookshotComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5630  Caver::HookshotTrailComponent::HookshotTrailComponent(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F81D0  Caver::SceneObject::SetAlwaysActive(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000203980  Caver::SpellComponent::Prepare(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x00000000002839C8  Caver::HookshotTrailComponent::Interface(void)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 65
 *   insn=0x0000000000289A7C string=0x0000000000289A80 "U"
 *   insn=0x0000000000289A90 string=0x0000000000289A94 "`"
 *   insn=0x0000000000289A9C string=0x00000000001F81D0 "0'"
 *   insn=0x0000000000289AA0 string=0x0000000000289AA4 "`"
 *   insn=0x0000000000289AA4 string=0x0000000000289AA8 "!hF"
 *   insn=0x0000000000289AA8 string=0x000000000021C148 "@&"
 *   insn=0x0000000000289AB4 string=0x0000000000289AB8 "\t\t@"
 *   insn=0x0000000000289AB4 string=0x0000000000289AC4 "`"
 *   insn=0x0000000000289AB8 string=0x0000000000289ABC ")"
 *   insn=0x0000000000289ABC string=0x0000000000289AC0 "\t\t"
 *   insn=0x0000000000289AC4 string=0x0000000000289AC8 "h"
 *   insn=0x0000000000289ACC string=0x0000000000289AD0 "@"
 *   insn=0x0000000000289AD0 string=0x0000000000289AD4 ""
 *   insn=0x0000000000289AD4 string=0x0000000000289AD8 ""
 *   insn=0x0000000000289ADC string=0x0000000000289AE0 ""
 *   insn=0x0000000000289AE0 string=0x0000000000289AE4 ""
 *   insn=0x0000000000289AEC string=0x0000000000289AF0 "`"
 *   insn=0x0000000000289AF0 string=0x0000000000289AF4 "!"
 *   insn=0x0000000000289AFC string=0x0000000000289B00 "@"
 *   insn=0x0000000000289AFC string=0x0000000000289B0C "h"
 *   insn=0x0000000000289B00 string=0x0000000000289B04 ""
 *   insn=0x0000000000289B04 string=0x0000000000289B08 ""
 *   insn=0x0000000000289B0C string=0x0000000000289B10 "`"
 *   insn=0x0000000000289B14 string=0x0000000000289B18 "\t\t@"
 *   insn=0x0000000000289B18 string=0x0000000000289B1C ")"
 *   insn=0x0000000000289B1C string=0x0000000000289B20 "\t\t"
 *   insn=0x0000000000289B20 string=0x0000000000289B24 " "
 *   insn=0x0000000000289B24 string=0x0000000000289BC8 "\t"
 *   insn=0x0000000000289B28 string=0x0000000000289BE0 "h"
 *   insn=0x0000000000289B30 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000289B38 string=0x00000000001F5630 "P'"
 *   insn=0x0000000000289B3C string=0x0000000000289B40 ""
 *   insn=0x0000000000289B44 string=0x0000000000289B48 "`"
 *   insn=0x0000000000289B48 string=0x0000000000289B4C "t"
 *   insn=0x0000000000289B4C string=0x0000000000289B50 " "
 *   insn=0x0000000000289B50 string=0x0000000000289B54 "@"
 *   insn=0x0000000000289B50 string=0x0000000000289B74 "`"
 *   insn=0x0000000000289B54 string=0x0000000000289B58 ""
 *   insn=0x0000000000289B58 string=0x0000000000289B5C ""
 *   insn=0x0000000000289B60 string=0x0000000000289B64 ""
 *   insn=0x0000000000289B64 string=0x0000000000289B68 ""
 *   insn=0x0000000000289B6C string=0x0000000000289B70 "t"
 *   insn=0x0000000000289B74 string=0x0000000000289B78 ""
 *   insn=0x0000000000289B78 string=0x0000000000289B7C "%@"
 *   insn=0x0000000000289B88 string=0x0000000000289B8C ")"
 *   insn=0x0000000000289BA0 string=0x0000000000289BA4 "@"
 *   insn=0x0000000000289BA0 string=0x0000000000289BC0 "`"
 *   insn=0x0000000000289BA4 string=0x0000000000289BA8 ""
 *   insn=0x0000000000289BA8 string=0x0000000000289BAC ""
 *   insn=0x0000000000289BB0 string=0x0000000000289BB4 ""
 *   insn=0x0000000000289BB4 string=0x0000000000289BB8 ""
 *   insn=0x0000000000289BC0 string=0x0000000000289BC4 ""
 *   insn=0x0000000000289BCC string=0x0000000000289BD0 ")"
 *   insn=0x0000000000289BD0 string=0x0000000000289BD4 " "
 *   insn=0x0000000000289BD4 string=0x0000000000289BD8 "`"
 *   insn=0x0000000000289C10 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000289C1C string=0x0000000000289C20 "\t\t@"
 *   insn=0x0000000000289C20 string=0x0000000000289C24 ")"
 *   insn=0x0000000000289C24 string=0x0000000000289C28 "\t\t"
 *   insn=0x0000000000289C28 string=0x0000000000289C2C "A"
 *   insn=0x0000000000289C2C string=0x0000000000289C30 "\t"
 *   insn=0x0000000000289C30 string=0x0000000000289C34 ")"
 *   insn=0x0000000000289C38 string=0x0000000000289C3C " "
 *   insn=0x0000000000289C50 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000289C54 string=0x0000000000289C58 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MagicHookshotComponent::Prepare(Caver::MagicHookshotComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x8
  _DWORD *v4; // x0
  int v5; // w8
  __int64 v6; // x0
  _QWORD *v7; // x8
  int v8; // w9
  Caver::HookshotTrailComponent *v9; // x20
  _DWORD *v10; // x0
  int v11; // w8
  void (*v12)(void); // x8
  int v13; // w8
  long double result; // q0

  _ReadStatusReg(TPIDR_EL0);
  Caver::SpellComponent::Prepare(this);
  Caver::SceneObject::SetAlwaysActive(*((Caver::SceneObject **)this + 5));
  v2 = Caver::SceneObject::ComponentWithInterface(
         *((Caver::SceneObject **)this + 5),
         (__int64)Caver::DamageComponent::Interface);
  v3 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v4 = (_DWORD *)*((_QWORD *)this + 39);
  *((_QWORD *)this + 39) = v3;
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = Caver::SceneObject::ComponentWithInterface(
         *((Caver::SceneObject **)this + 5),
         (__int64)Caver::HookshotTrailComponent::Interface);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = (_QWORD *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = v6;
  if ( v7 && (v8 = *((_DWORD *)v7 + 2) - 1, (*((_DWORD *)v7 + 2) = v8) == 0) )
  {
    (*(void (__fastcall **)(_QWORD *__return_ptr, _QWORD *))(*v7 + 8LL))(v7, v7);
    v6 = *((_QWORD *)this + 36);
    if ( v6 )
      goto LABEL_21;
  }
  else if ( v6 )
  {
    goto LABEL_21;
  }
  v9 = (Caver::HookshotTrailComponent *)operator new(0xC8u);
  Caver::HookshotTrailComponent::HookshotTrailComponent(v9);
  ++*((_DWORD *)v9 + 2);
  v10 = (_DWORD *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = v9;
  if ( v10 )
  {
    v11 = v10[2] - 1;
    v10[2] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
      v9 = (Caver::HookshotTrailComponent *)*((_QWORD *)this + 36);
    }
  }
  v12 = *(void (**)(void))(**((_QWORD **)this + 5) + 72LL);
  if ( v9 )
    ++*((_DWORD *)v9 + 2);
  v12();
  if ( v9 )
  {
    v13 = *((_DWORD *)v9 + 2) - 1;
    *((_DWORD *)v9 + 2) = v13;
    if ( !v13 )
      (*(void (__fastcall **)(Caver::HookshotTrailComponent *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v6 = *((_QWORD *)this + 36);
LABEL_21:
  result = *(long double *)((char *)this + 296);
  *(long double *)(v6 + 180) = result;
  return result;
}

