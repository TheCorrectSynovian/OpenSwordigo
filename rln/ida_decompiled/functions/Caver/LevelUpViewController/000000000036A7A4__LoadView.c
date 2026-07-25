/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036A7A4
 * Mangled: _ZN5Caver21LevelUpViewController8LoadViewEv
 * Demangled: Caver::LevelUpViewController::LoadView(void)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F3520  Caver::CharacterView::CharacterView(void)
 *   0x00000000001F37B0  Caver::CharacterView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD0D0  Caver::CharacterView::SetLevelUpMode(void)
 *   0x0000000000202620  boost::shared_ptr<Caver::CharacterView>::shared_ptr<Caver::CharacterView>(Caver::CharacterView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000036AAA0  Caver::LevelUpViewController::CharacterViewDismissed(Caver::CharacterView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 72
 *   insn=0x000000000036A7B4 string=0x000000000036A7B8 "V"
 *   insn=0x000000000036A7CC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036A7D0 string=0x000000000036A7D4 "S#"
 *   insn=0x000000000036A7D4 string=0x00000000001F3520 "P'"
 *   insn=0x000000000036A7E0 string=0x000000000036A7E4 "h"
 *   insn=0x000000000036A7F0 string=0x000000000036A7F4 "i"
 *   insn=0x000000000036A7F8 string=0x000000000036A7FC "4"
 *   insn=0x000000000036A7FC string=0x000000000036A840 "`6@"
 *   insn=0x000000000036A800 string=0x000000000036A804 ""
 *   insn=0x000000000036A814 string=0x000000000036A818 "\t@"
 *   insn=0x000000000036A820 string=0x000000000036A824 ""
 *   insn=0x000000000036A834 string=0x000000000036A838 "@"
 *   insn=0x000000000036A840 string=0x000000000036A844 "p@"
 *   insn=0x000000000036A84C string=0x000000000036A850 ",@"
 *   insn=0x000000000036A84C string=0x000000000036A888 "h""
 *   insn=0x000000000036A850 string=0x000000000036A854 "I"
 *   insn=0x000000000036A854 string=0x000000000036A858 "\tp"
 *   insn=0x000000000036A858 string=0x000000000036A85C "h"
 *   insn=0x000000000036A860 string=0x0000000000583734 "o"
 *   insn=0x000000000036A864 string=0x000000000036A868 "!5G"
 *   insn=0x000000000036A870 string=0x000000000036A874 "\t"
 *   insn=0x000000000036A878 string=0x000000000036A87C ")-@"
 *   insn=0x000000000036A87C string=0x000000000036A880 " "
 *   insn=0x000000000036A880 string=0x000000000036A884 "`6@"
 *   insn=0x000000000036A888 string=0x000000000036A88C ""
 *   insn=0x000000000036A88C string=0x000000000036A890 "h.@"
 *   insn=0x000000000036A890 string=0x000000000036A894 "\t!H"
 *   insn=0x000000000036A89C string=0x000000000036A8A0 "\t"
 *   insn=0x000000000036A8A0 string=0x000000000036A8A4 ")"
 *   insn=0x000000000036A8A4 string=0x000000000036A8A8 "\t"
 *   insn=0x000000000036A8B0 string=0x00000000001F37B0 "P'"
 *   insn=0x000000000036A8B4 string=0x000000000036A8B8 "4"
 *   insn=0x000000000036A8B8 string=0x000000000036A8FC "`6@"
 *   insn=0x000000000036A8BC string=0x000000000036A8C0 ""
 *   insn=0x000000000036A8D0 string=0x000000000036A8D4 "\t@"
 *   insn=0x000000000036A8DC string=0x000000000036A8E0 ""
 *   insn=0x000000000036A8F0 string=0x000000000036A8F4 "@"
 *   insn=0x000000000036A900 string=0x000000000036A904 "h"
 *   insn=0x000000000036A900 string=0x00000000001FD0D0 "0'"
 *   insn=0x000000000036A908 string=0x000000000036A918 "u"
 *   insn=0x000000000036A90C string=0x000000000036A910 ")\t"
 *   insn=0x000000000036A918 string=0x000000000036A91C "h"
 *   insn=0x000000000036A91C string=0x000000000036A920 "5"
 *   insn=0x000000000036A920 string=0x000000000036A964 "`"@"
 *   insn=0x000000000036A924 string=0x000000000036A928 ""
 *   insn=0x000000000036A934 string=0x000000000036A938 "\t@"
 *   insn=0x000000000036A944 string=0x000000000036A948 ""
 *   insn=0x000000000036A954 string=0x000000000036A958 "@"
 *   insn=0x000000000036A968 string=0x000000000036A96C ""
 *   insn=0x000000000036A968 string=0x000000000036A97C "4"
 *   insn=0x000000000036A96C string=0x000000000036A970 ""
 *   insn=0x000000000036A980 string=0x000000000036A984 ""
 *   insn=0x000000000036A994 string=0x000000000036A998 "\t@"
 *   insn=0x000000000036A9A0 string=0x000000000036A9A4 ""
 *   insn=0x000000000036A9B4 string=0x000000000036A9B8 "@"
 *   insn=0x000000000036A9CC string=0x000000000036A9E4 ";."
 *   insn=0x000000000036A9E4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036A9F0 string=0x000000000036A9F4 ""
 *   insn=0x000000000036A9F8 string=0x000000000036A9FC "!"
 *   insn=0x000000000036AA00 string=0x000000000036AA04 "\t@"
 *   insn=0x000000000036AA10 string=0x000000000036AA14 ""
 *   insn=0x000000000036AA18 string=0x000000000036AA1C "!"
 *   insn=0x000000000036AA20 string=0x000000000036AA24 "@"
 *   insn=0x000000000036AA38 string=0x000000000036AA3C "4"
 *   insn=0x000000000036AA40 string=0x000000000036AA44 ""
 *   insn=0x000000000036AA50 string=0x000000000036AA54 "\t@"
 *   insn=0x000000000036AA60 string=0x000000000036AA64 ""
 *   insn=0x000000000036AA70 string=0x000000000036AA74 "@"
 *   insn=0x000000000036AA84 string=0x000000000036AA88 "1"
 *   insn=0x000000000036AA90 string=0x000000000036AA94 "2"
 *   insn=0x000000000036AA94 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000036AA9C string=0x000000000036AAA0 ")`F9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall ***__fastcall Caver::LevelUpViewController::LoadView(
        Caver::LevelUpViewController *this))(_QWORD, Caver::LevelUpViewController *)
{
  Caver::CharacterView *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x0
  float *v7; // x8
  _QWORD *v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x20
  _QWORD *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 (__fastcall ***result)(_QWORD, Caver::LevelUpViewController *); // x0
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // [xsp+8h] [xbp-38h]
  __int64 v20; // [xsp+10h] [xbp-30h]
  _QWORD *v21; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (Caver::CharacterView *)operator new(0x1E8u);
  Caver::CharacterView::CharacterView(v2);
  boost::shared_ptr<Caver::CharacterView>::shared_ptr<Caver::CharacterView>();
  v3 = (_QWORD *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 13) = v19;
  *((_QWORD *)this + 14) = v20;
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v6 = *((_QWORD *)this + 13);
  if ( *(_DWORD *)(v6 + 112) != 18 )
  {
    v7 = *(float **)(v6 + 88);
    *(_DWORD *)(v6 + 112) = 18;
    if ( v7 )
    {
      if ( v7[35] > 0.001 )
      {
        (*(void (__fastcall **)(float *__return_ptr, float *))(*(_QWORD *)v7 + 88LL))(v7, v7);
        v6 = *((_QWORD *)this + 13);
      }
    }
  }
  *(_QWORD *)(v6 + 256) = (char *)this + 72;
  v8 = *(_QWORD **)(*((_QWORD *)this + 11) + 136LL);
  v21 = v8;
  if ( v8 )
    ++v8[1];
  Caver::CharacterView::InitWithGameState();
  if ( v21 )
  {
    v9 = v21[1] - 1LL;
    v21[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
      v10 = v21[2] - 1LL;
      v21[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
    }
  }
  Caver::CharacterView::SetLevelUpMode(*((Caver::CharacterView **)this + 13));
  v11 = *((_QWORD *)this + 13);
  v12 = (_QWORD *)*((_QWORD *)this + 14);
  if ( v12 )
    v12[1] += 2LL;
  v13 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = v11;
  *((_QWORD *)this + 4) = v12;
  if ( v13 )
  {
    v14 = v13[1] - 1LL;
    v13[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v15 = v13[2] - 1LL;
      v13[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
    }
  }
  result = (__int64 (__fastcall ***)(_QWORD, Caver::LevelUpViewController *))*((_QWORD *)this + 8);
  if ( result )
    result = (__int64 (__fastcall ***)(_QWORD, Caver::LevelUpViewController *))(**result)(result, this);
  if ( v12 )
  {
    v17 = v12[1] - 1LL;
    v12[1] = v17;
    if ( !v17 )
    {
      result = (__int64 (__fastcall ***)(_QWORD, Caver::LevelUpViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v18 = v12[2] - 1LL;
      v12[2] = v18;
      if ( !v18 )
        return (__int64 (__fastcall ***)(_QWORD, Caver::LevelUpViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  return result;
}

