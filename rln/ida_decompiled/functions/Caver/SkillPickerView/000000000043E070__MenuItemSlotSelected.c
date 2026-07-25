/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043E070
 * Mangled: _ZN5Caver15SkillPickerView20MenuItemSlotSelectedEPNS_12MenuItemSlotE
 * Demangled: Caver::SkillPickerView::MenuItemSlotSelected(Caver::MenuItemSlot *)
 *
 * Callers: 1
 *   0x00000000001F35A0  Caver::SkillPickerView::MenuItemSlotSelected(Caver::MenuItemSlot *)
 *
 * Callees: 6
 *   0x00000000001F35A0  Caver::SkillPickerView::MenuItemSlotSelected(Caver::MenuItemSlot *)
 *   0x00000000001F37F0  Caver::SkillPickerView::AddAnimations(bool)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC800  Caver::SkillPickerView::SetSlotSelected(int,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x000000000043E080 string=0x000000000043E084 "U"
 *   insn=0x000000000043E094 string=0x000000000043E098 "hBA"
 *   insn=0x000000000043E09C string=0x000000000043E0B0 "h""
 *   insn=0x000000000043E0AC string=0x00000000001FC800 "0'"
 *   insn=0x000000000043E0B4 string=0x000000000043E0B8 "k"
 *   insn=0x000000000043E0B8 string=0x000000000043E0BC "i"
 *   insn=0x000000000043E0B8 string=0x000000000043E0E4 "aBA"
 *   insn=0x000000000043E0C0 string=0x000000000043E0C4 "+"
 *   insn=0x000000000043E0C8 string=0x000000000043E0CC "A"
 *   insn=0x000000000043E0CC string=0x000000000043E0D0 "jB"
 *   insn=0x000000000043E0CC string=0x000000000043E0D4 "J"
 *   insn=0x000000000043E0D4 string=0x000000000043E0D8 "_"
 *   insn=0x000000000043E0D8 string=0x000000000043E0DC ")A"
 *   insn=0x000000000043E0DC string=0x000000000043E0E0 "+"
 *   insn=0x000000000043E0F0 string=0x000000000043E0F4 "`~@"
 *   insn=0x000000000043E0F8 string=0x000000000043E0FC ""
 *   insn=0x000000000043E100 string=0x000000000043E104 ""
 *   insn=0x000000000043E114 string=0x000000000043E118 "*"
 *   insn=0x000000000043E118 string=0x000000000043E11C "J"
 *   insn=0x000000000043E11C string=0x000000000043E120 "*"
 *   insn=0x000000000043E130 string=0x000000000043E134 "4"
 *   insn=0x000000000043E138 string=0x000000000043E13C ""
 *   insn=0x000000000043E14C string=0x000000000043E150 "\t@"
 *   insn=0x000000000043E158 string=0x000000000043E15C ""
 *   insn=0x000000000043E16C string=0x000000000043E170 "@"
 *   insn=0x000000000043E180 string=0x000000000043E184 "`~@"
 *   insn=0x000000000043E180 string=0x00000000001F37F0 "P'"
 *   insn=0x000000000043E18C string=0x000000000043E190 ""
 *   insn=0x000000000043E194 string=0x000000000043E198 ""
 *   insn=0x000000000043E1AC string=0x000000000043E1C4 "C"
 *   insn=0x000000000043E1C4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000043E1CC string=0x000000000043E1D0 "4"
 *   insn=0x000000000043E1D4 string=0x000000000043E1D8 ""
 *   insn=0x000000000043E1E4 string=0x000000000043E1E8 "\t@"
 *   insn=0x000000000043E1F4 string=0x000000000043E1F8 ""
 *   insn=0x000000000043E204 string=0x000000000043E208 "@"
 *   insn=0x000000000043E218 string=0x000000000043E21C "L@"
 *   insn=0x000000000043E224 string=0x00000000001F35A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillPickerView::MenuItemSlotSelected(Caver::SkillPickerView *this, Caver::MenuItemSlot *a2)
{
  int v4; // w8
  __int64 v5; // x8
  Caver::MenuItemSlot **v6; // x9
  __int64 i; // x10
  void (***v8)(void); // x0
  void (*v9)(void); // x8
  _QWORD *v10; // x9
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 result; // x0
  _QWORD *v14; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v4 = *((_DWORD *)this + 80);
  if ( (v4 & 0x80000000) == 0 )
    Caver::SkillPickerView::SetSlotSelected(this, v4, 0);
  v5 = *((int *)this + 72);
  if ( (int)v5 >= 1 )
  {
    v6 = (Caver::MenuItemSlot **)*((_QWORD *)this + 37);
    for ( i = 0; i < v5; ++i )
    {
      if ( *v6 == a2 )
        *((_DWORD *)this + 80) = i;
      v6 += 2;
    }
  }
  Caver::SkillPickerView::SetSlotSelected(this, *((_DWORD *)this + 80), 1);
  v8 = (void (***)(void))*((_QWORD *)this + 31);
  if ( v8 )
  {
    v9 = **v8;
    v10 = (_QWORD *)*((_QWORD *)a2 + 35);
    v14 = v10;
    if ( v10 )
      ++v10[1];
    v9();
    if ( v14 )
    {
      v11 = v14[1] - 1LL;
      v14[1] = v11;
      if ( !v11 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
        v12 = v14[2] - 1LL;
        v14[2] = v12;
        if ( !v12 )
          (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
      }
    }
  }
  Caver::SkillPickerView::AddAnimations(this, 1);
  result = *((_QWORD *)this + 31);
  *((_BYTE *)this + 229) = 0;
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, Caver::SkillPickerView *))(*(_QWORD *)result + 8LL))(result, this);
  return result;
}

