/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002600A4
 * Mangled: _ZN5Caver23CharControllerComponent12BeginCastingERKN5boost13intrusive_ptrINS_14SkillComponentEEE
 * Demangled: Caver::CharControllerComponent::BeginCasting(boost::intrusive_ptr<Caver::SkillComponent> const&)
 *
 * Callers: 1
 *   0x00000000001FAEF0  Caver::CharControllerComponent::BeginCasting(boost::intrusive_ptr<Caver::SkillComponent> const&)
 *
 * Callees: 4
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FB5D0  Caver::SwingableWeaponControllerComponent::SetWeaponHidden(bool)
 *   0x00000000001FF8C0  Caver::CharAnimControllerComponent::BeginCasting(void)
 *   0x0000000000201890  Caver::SkillComponent::BeginCasting(void)
 *
 * Referenced strings: 48
 *   insn=0x00000000002600B0 string=0x00000000002600B4 "hRB"
 *   insn=0x00000000002600B8 string=0x00000000002600BC "H"
 *   insn=0x00000000002600BC string=0x00000000002600C4 "`"
 *   insn=0x00000000002600CC string=0x00000000002600D0 "h"9"
 *   insn=0x00000000002600D4 string=0x00000000002600D8 "`"
 *   insn=0x00000000002600E0 string=0x00000000002600E4 "`"
 *   insn=0x00000000002600E0 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002600E4 string=0x00000000002600E8 "`"
 *   insn=0x00000000002600E8 string=0x00000000002600F4 "`"
 *   insn=0x00000000002600EC string=0x00000000002600F0 "8m"
 *   insn=0x00000000002600F0 string=0x00000000001FB5D0 "0'"
 *   insn=0x00000000002600F8 string=0x00000000002600FC "`b"
 *   insn=0x0000000000260100 string=0x0000000000260104 "w^"
 *   insn=0x0000000000260104 string=0x0000000000260108 "`"
 *   insn=0x0000000000260108 string=0x000000000026010C "`"
 *   insn=0x0000000000260110 string=0x0000000000260114 "/m"
 *   insn=0x0000000000260118 string=0x000000000026011C "h"
 *   insn=0x0000000000260124 string=0x0000000000260128 "\t\t@"
 *   insn=0x0000000000260124 string=0x0000000000260134 "`zA"
 *   insn=0x0000000000260128 string=0x000000000026012C ")"
 *   insn=0x000000000026012C string=0x0000000000260130 "\t\t"
 *   insn=0x0000000000260134 string=0x0000000000260138 "hz"
 *   insn=0x000000000026013C string=0x0000000000260140 "@"
 *   insn=0x000000000026013C string=0x0000000000260150 "`"
 *   insn=0x0000000000260140 string=0x0000000000260144 ""
 *   insn=0x0000000000260144 string=0x0000000000260148 ""
 *   insn=0x0000000000260148 string=0x000000000026014C " "
 *   insn=0x000000000026014C string=0x0000000000260170 ""
 *   insn=0x0000000000260154 string=0x0000000000260184 "`N@"
 *   insn=0x000000000026015C string=0x0000000000260160 "`zA"
 *   insn=0x0000000000260170 string=0x0000000000260174 ""
 *   insn=0x0000000000260178 string=0x000000000026017C "`"
 *   insn=0x0000000000260188 string=0x000000000026018C "`""
 *   insn=0x0000000000260188 string=0x00000000002601A0 "@"
 *   insn=0x0000000000260190 string=0x0000000000260194 "S^"
 *   insn=0x0000000000260194 string=0x0000000000260198 "`N@"
 *   insn=0x000000000026019C string=0x00000000002601AC "h"
 *   insn=0x00000000002601A0 string=0x00000000002601A4 ""
 *   insn=0x00000000002601A4 string=0x00000000002601A8 ""
 *   insn=0x00000000002601AC string=0x00000000002601B0 "`"
 *   insn=0x00000000002601B0 string=0x00000000002601B4 "("
 *   insn=0x00000000002601B4 string=0x00000000002601B8 "\t\t@"
 *   insn=0x00000000002601B8 string=0x00000000002601BC ")"
 *   insn=0x00000000002601BC string=0x00000000002601C0 "\t\t"
 *   insn=0x00000000002601C4 string=0x00000000002601C8 "\t"
 *   insn=0x00000000002601CC string=0x00000000002601D0 ")"
 *   insn=0x00000000002601D0 string=0x00000000002601D4 " "
 *   insn=0x00000000002601D4 string=0x00000000002601D8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharControllerComponent::BeginCasting(Caver::Component *a1, __int64 *a2)
{
  Caver::SwingableWeaponControllerComponent *v4; // x0
  Caver::SwingableWeaponControllerComponent *v5; // x0
  __int64 v6; // x8
  _DWORD *v7; // x0
  int v8; // w8
  Caver::CharAnimControllerComponent *v9; // x0
  _DWORD *v11; // x8
  int v12; // w9

  if ( *((_DWORD *)a1 + 148) )
    *((_BYTE *)a1 + 588) = 0;
  v4 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)a1 + 56);
  *((_BYTE *)a1 + 580) = 0;
  *((_BYTE *)a1 + 456) = 1;
  if ( v4
    || (Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 432), a1),
        (v4 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)a1 + 56)) != 0) )
  {
    Caver::SwingableWeaponControllerComponent::SetWeaponHidden(v4);
  }
  v5 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)a1 + 53);
  if ( v5
    || (Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 408), a1),
        (v5 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)a1 + 53)) != 0) )
  {
    Caver::SwingableWeaponControllerComponent::SetWeaponHidden(v5);
  }
  *((_BYTE *)a1 + 748) = 1;
  v6 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v6 + 8);
  v7 = (_DWORD *)*((_QWORD *)a1 + 94);
  *((_QWORD *)a1 + 94) = v6;
  if ( v7 && (v8 = v7[2] - 1, (v7[2] = v8) == 0) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    v9 = (Caver::CharAnimControllerComponent *)*((_QWORD *)a1 + 50);
    if ( v9 )
      goto LABEL_14;
  }
  else
  {
    v9 = (Caver::CharAnimControllerComponent *)*((_QWORD *)a1 + 50);
    if ( v9 )
      goto LABEL_14;
  }
  v9 = (Caver::CharAnimControllerComponent *)*((_QWORD *)a1 + 19);
  if ( v9
    || (Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 136), a1),
        (v9 = (Caver::CharAnimControllerComponent *)*((_QWORD *)a1 + 19)) != 0) )
  {
    ++*((_DWORD *)v9 + 2);
  }
  v11 = (_DWORD *)*((_QWORD *)a1 + 50);
  *((_QWORD *)a1 + 50) = v9;
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v11 + 8LL))(v11, v11);
      v9 = (Caver::CharAnimControllerComponent *)*((_QWORD *)a1 + 50);
    }
  }
LABEL_14:
  Caver::CharAnimControllerComponent::BeginCasting(v9);
  *((_DWORD *)a1 + 139) = 0;
  return Caver::SkillComponent::BeginCasting(*((Caver::SkillComponent **)a1 + 94));
}

