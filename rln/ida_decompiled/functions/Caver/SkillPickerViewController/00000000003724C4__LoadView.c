/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003724C4
 * Mangled: _ZN5Caver25SkillPickerViewController8LoadViewEv
 * Demangled: Caver::SkillPickerViewController::LoadView(void)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F45B0  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000001F4740  Caver::SkillPickerView::SkillPickerView(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8F70  boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>(Caver::SkillPickerView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000372804  boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>(Caver::SkillPickerView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 77
 *   insn=0x00000000003724D4 string=0x00000000003724D8 "V"
 *   insn=0x00000000003724E8 string=0x00000000003724EC "="
 *   insn=0x00000000003724EC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003724F4 string=0x00000000001F4740 "P'"
 *   insn=0x0000000000372500 string=0x00000000001F8F70 "0'"
 *   insn=0x0000000000372504 string=0x0000000000372508 "p@"
 *   insn=0x0000000000372510 string=0x0000000000372514 ",@"
 *   insn=0x0000000000372510 string=0x000000000037254C "h""
 *   insn=0x0000000000372514 string=0x0000000000372518 "I"
 *   insn=0x0000000000372518 string=0x000000000037251C "\tp"
 *   insn=0x000000000037251C string=0x0000000000372520 "h"
 *   insn=0x0000000000372524 string=0x0000000000583734 "o"
 *   insn=0x0000000000372528 string=0x000000000037252C "!5G"
 *   insn=0x0000000000372534 string=0x0000000000372538 "\t"
 *   insn=0x0000000000372538 string=0x000000000037253C ")-@"
 *   insn=0x0000000000372540 string=0x0000000000372544 " "
 *   insn=0x000000000037254C string=0x0000000000372550 "|"
 *   insn=0x0000000000372550 string=0x0000000000372554 "h*@"
 *   insn=0x0000000000372554 string=0x0000000000372558 "\t!H"
 *   insn=0x0000000000372560 string=0x0000000000372564 "\t"
 *   insn=0x0000000000372564 string=0x0000000000372568 ")"
 *   insn=0x0000000000372568 string=0x000000000037256C "\t"
 *   insn=0x0000000000372574 string=0x00000000001F45B0 "P'"
 *   insn=0x0000000000372578 string=0x000000000037257C "4"
 *   insn=0x0000000000372580 string=0x0000000000372584 ""
 *   insn=0x0000000000372590 string=0x0000000000372594 "\t@"
 *   insn=0x00000000003725A0 string=0x00000000003725A4 ""
 *   insn=0x00000000003725B0 string=0x00000000003725B4 "@"
 *   insn=0x00000000003725C4 string=0x00000000003725D4 "u"
 *   insn=0x00000000003725C8 string=0x00000000003725CC ")\t"
 *   insn=0x00000000003725D4 string=0x00000000003725D8 "h"
 *   insn=0x00000000003725D8 string=0x00000000003725DC "5"
 *   insn=0x00000000003725DC string=0x0000000000372620 "`"@"
 *   insn=0x00000000003725E0 string=0x00000000003725E4 ""
 *   insn=0x00000000003725F0 string=0x00000000003725F4 "\t@"
 *   insn=0x0000000000372600 string=0x0000000000372604 ""
 *   insn=0x0000000000372610 string=0x0000000000372614 "@"
 *   insn=0x0000000000372624 string=0x0000000000372628 ""
 *   insn=0x0000000000372624 string=0x0000000000372638 "4"
 *   insn=0x0000000000372628 string=0x000000000037262C ""
 *   insn=0x000000000037263C string=0x0000000000372640 ""
 *   insn=0x000000000037264C string=0x0000000000372650 "\t@"
 *   insn=0x000000000037265C string=0x0000000000372660 ""
 *   insn=0x000000000037266C string=0x0000000000372670 "@"
 *   insn=0x000000000037267C string=0x0000000000372680 "3"
 *   insn=0x0000000000372680 string=0x0000000000372684 "h"
 *   insn=0x0000000000372684 string=0x0000000000372688 ""
 *   insn=0x0000000000372688 string=0x000000000037268C "h"
 *   insn=0x0000000000372690 string=0x0000000000372694 "h"
 *   insn=0x0000000000372698 string=0x000000000037269C "\t@"
 *   insn=0x00000000003726A0 string=0x00000000003726A4 "h\n@"
 *   insn=0x00000000003726A4 string=0x00000000003726A8 ""
 *   insn=0x00000000003726A8 string=0x00000000003726AC "h\n"
 *   insn=0x00000000003726B0 string=0x00000000003726B4 "h"
 *   insn=0x00000000003726B8 string=0x00000000003726BC "@"
 *   insn=0x00000000003726E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003726F8 string=0x00000000003726FC "T"
 *   insn=0x00000000003726FC string=0x0000000000372700 "9"
 *   insn=0x000000000037270C string=0x0000000000372710 ""
 *   insn=0x0000000000372714 string=0x0000000000372718 "!"
 *   insn=0x000000000037271C string=0x0000000000372720 "\t@"
 *   insn=0x000000000037272C string=0x0000000000372730 ""
 *   insn=0x0000000000372734 string=0x0000000000372738 "!"
 *   insn=0x000000000037273C string=0x0000000000372740 "@"
 *   insn=0x0000000000372754 string=0x0000000000372758 "4"
 *   insn=0x000000000037275C string=0x0000000000372760 ""
 *   insn=0x000000000037276C string=0x0000000000372770 "\t@"
 *   insn=0x000000000037277C string=0x0000000000372780 ""
 *   insn=0x000000000037278C string=0x0000000000372790 "@"
 *   insn=0x000000000037279C string=0x00000000003727A0 "4"
 *   insn=0x00000000003727A4 string=0x00000000003727A8 ""
 *   insn=0x00000000003727B4 string=0x00000000003727B8 "\t@"
 *   insn=0x00000000003727C4 string=0x00000000003727C8 ""
 *   insn=0x00000000003727D4 string=0x00000000003727D8 "@"
 *   insn=0x00000000003727E4 string=0x00000000003727E8 "7<"
 *   insn=0x00000000003727F8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003727FC string=0x0000000000372800 "1<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall ***__fastcall Caver::SkillPickerViewController::LoadView(
        Caver::SkillPickerViewController *this))(_QWORD, Caver::SkillPickerViewController *)
{
  Caver::SkillPickerView *v2; // x0
  __int64 v3; // x0
  float *v4; // x8
  _QWORD *v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 (__fastcall ***result)(_QWORD, Caver::SkillPickerViewController *); // x0
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // [xsp+10h] [xbp-40h]
  __int64 v17; // [xsp+18h] [xbp-38h]
  _QWORD *v18; // [xsp+20h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (Caver::SkillPickerView *)operator new(0x148u);
  Caver::SkillPickerView::SkillPickerView(v2);
  boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>();
  v3 = v17;
  if ( *(_DWORD *)(v17 + 112) != 18 )
  {
    v4 = *(float **)(v17 + 88);
    *(_DWORD *)(v17 + 112) = 18;
    if ( v4 )
    {
      if ( v4[35] > 0.001 )
      {
        (*(void (__fastcall **)(float *))(*(_QWORD *)v4 + 88LL))(v4);
        v3 = v17;
      }
    }
  }
  *(_QWORD *)(v3 + 248) = (char *)this + 72;
  v5 = *(_QWORD **)(*((_QWORD *)this + 10) + 136LL);
  v16 = v5;
  if ( v5 )
    ++v5[1];
  Caver::SkillPickerView::InitWithGameState();
  if ( v16 )
  {
    v6 = v16[1] - 1LL;
    v16[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
      v7 = v16[2] - 1LL;
      v16[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
    }
  }
  if ( v18 )
    v18[1] += 2LL;
  v8 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = v17;
  *((_QWORD *)this + 4) = v18;
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  result = (__int64 (__fastcall ***)(_QWORD, Caver::SkillPickerViewController *))*((_QWORD *)this + 8);
  if ( result )
    result = (__int64 (__fastcall ***)(_QWORD, Caver::SkillPickerViewController *))(**result)(result, this);
  if ( v18 )
  {
    v12 = v18[1] - 1LL;
    v18[1] = v12;
    if ( !v12 )
    {
      result = (__int64 (__fastcall ***)(_QWORD, Caver::SkillPickerViewController *))(*(__int64 (__fastcall **)())(*v18 + 16LL))();
      v13 = v18[2] - 1LL;
      v18[2] = v13;
      if ( !v13 )
        result = (__int64 (__fastcall ***)(_QWORD, Caver::SkillPickerViewController *))(*(__int64 (__fastcall **)())(*v18 + 24LL))();
    }
  }
  if ( v18 )
  {
    v14 = v18[1] - 1LL;
    v18[1] = v14;
    if ( !v14 )
    {
      result = (__int64 (__fastcall ***)(_QWORD, Caver::SkillPickerViewController *))(*(__int64 (__fastcall **)())(*v18 + 16LL))();
      v15 = v18[2] - 1LL;
      v18[2] = v15;
      if ( !v15 )
        return (__int64 (__fastcall ***)(_QWORD, Caver::SkillPickerViewController *))(*(__int64 (__fastcall **)())(*v18 + 24LL))();
    }
  }
  return result;
}

