/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049E55C
 * Mangled: _ZN5Caver7GUIView6UpdateEf
 * Demangled: Caver::GUIView::Update(float)
 *
 * Callers: 2
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x000000000049E304  Caver::GUIView::~GUIView()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9630  Caver::GUIAnimation::Update(float)
 *   0x00000000001FA950  Caver::GUIWindow::DismissModalView(Caver::GUIView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000052A9C8  sub_52A9C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 68
 *   insn=0x000000000049E57C string=0x000000000049E580 ""
 *   insn=0x000000000049E584 string=0x000000000049E588 "@"
 *   insn=0x000000000049E59C string=0x000000000049E5A0 ""
 *   insn=0x000000000049E5B0 string=0x000000000049E5B4 "H"
 *   insn=0x000000000049E5B4 string=0x000000000049E6BC "h"
 *   insn=0x000000000049E5BC string=0x000000000049E6D0 "h"
 *   insn=0x000000000049E5C4 string=0x000000000049E5C8 ""
 *   insn=0x000000000049E5C8 string=0x000000000049E668 "4"
 *   insn=0x000000000049E5D0 string=0x000000000049E5D4 "6"
 *   insn=0x000000000049E5D8 string=0x000000000049E5DC ""
 *   insn=0x000000000049E5E8 string=0x000000000049E5EC "\t@"
 *   insn=0x000000000049E5F8 string=0x000000000049E5FC ""
 *   insn=0x000000000049E608 string=0x000000000049E60C "@"
 *   insn=0x000000000049E618 string=0x000000000049E61C "%c"
 *   insn=0x000000000049E61C string=0x000000000049E620 "t"
 *   insn=0x000000000049E61C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000049E620 string=0x000000000049E624 """
 *   insn=0x000000000049E634 string=0x00000000001F9630 "0'"
 *   insn=0x000000000049E640 string=0x000000000049E644 ""
 *   insn=0x000000000049E640 string=0x000000000049E654 "\t\t@"
 *   insn=0x000000000049E654 string=0x000000000049E658 "?"
 *   insn=0x000000000049E658 string=0x000000000049E65C "a"
 *   insn=0x000000000049E65C string=0x000000000049E648 ""
 *   insn=0x000000000049E660 string=0x000000000049E664 "@"
 *   insn=0x000000000049E664 string=0x000000000049E6EC "4"
 *   insn=0x000000000049E66C string=0x000000000049E670 ""
 *   insn=0x000000000049E680 string=0x000000000049E684 "\t@"
 *   insn=0x000000000049E68C string=0x000000000049E690 ""
 *   insn=0x000000000049E6A0 string=0x000000000049E6A4 "@"
 *   insn=0x000000000049E6BC string=0x000000000049E6C0 "=@"
 *   insn=0x000000000049E6C8 string=0x000000000049E6CC ""
 *   insn=0x000000000049E6D0 string=0x000000000049E6D4 "y@"
 *   insn=0x000000000049E6DC string=0x000000000049E6E0 "`"
 *   insn=0x000000000049E6E8 string=0x00000000001FA950 "0'"
 *   insn=0x000000000049E6F0 string=0x000000000049E6F4 ""
 *   insn=0x000000000049E704 string=0x000000000049E708 "\t@"
 *   insn=0x000000000049E710 string=0x000000000049E714 ""
 *   insn=0x000000000049E724 string=0x000000000049E728 "@"
 *   insn=0x000000000049E740 string=0x000000000049E744 "@"
 *   insn=0x000000000049E74C string=0x000000000049E750 " "
 *   insn=0x000000000049E758 string=0x000000000049E768 ",@"
 *   insn=0x000000000049E75C string=0x000000000049E760 ""
 *   insn=0x000000000049E770 string=0x000000000049E7E0 ""
 *   insn=0x000000000049E784 string=0x000000000049E788 "6"
 *   insn=0x000000000049E78C string=0x000000000049E790 ""
 *   insn=0x000000000049E79C string=0x000000000049E7A0 "\t@"
 *   insn=0x000000000049E7AC string=0x000000000049E7B0 ""
 *   insn=0x000000000049E7BC string=0x000000000049E7C0 "@"
 *   insn=0x000000000049E7D4 string=0x000000000049E7D8 "T"
 *   insn=0x000000000049E7E8 string=0x000000000049E7EC ""
 *   insn=0x000000000049E7EC string=0x000000000049E7F0 "%@"
 *   insn=0x000000000049E800 string=0x000000000049E804 ""
 *   insn=0x000000000049E814 string=0x000000000049E818 "\t@"
 *   insn=0x000000000049E820 string=0x000000000049E824 ""
 *   insn=0x000000000049E850 string=0x000000000049E854 ")"
 *   insn=0x000000000049E85C string=0x000000000049E860 "&"
 *   insn=0x000000000049E86C string=0x000000000049E870 ""
 *   insn=0x000000000049E87C string=0x000000000049E880 "\t@"
 *   insn=0x000000000049E88C string=0x000000000049E890 ""
 *   insn=0x000000000049E89C string=0x000000000049E8A0 "@"
 *   insn=0x000000000049E8B0 string=0x000000000049E8B4 "4"
 *   insn=0x000000000049E8B8 string=0x000000000049E8BC ""
 *   insn=0x000000000049E8C8 string=0x000000000049E8CC "\t@"
 *   insn=0x000000000049E8D8 string=0x000000000049E8DC ""
 *   insn=0x000000000049E8E8 string=0x000000000049E8EC "@"
 *   insn=0x000000000049E90C string=0x000000000049E910 ""
 *   insn=0x000000000049E914 string=0x000000000049E918 "y@"
 *   insn=0x000000000049E92C string=0x000000000049E930 "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIView::Update(Caver::GUIView *this, long double a2)
{
  _QWORD *v3; // x0
  _QWORD *v4; // x23
  _QWORD *v6; // x24
  _QWORD *v7; // x21
  _QWORD *v8; // x20
  Caver::GUIAnimation *v9; // x22
  _QWORD *v10; // x22
  __int64 v11; // x8
  __int64 v12; // x8
  _QWORD *i; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  Caver::GUIWindow *v16; // x0
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x21
  __int64 v20; // x0
  _QWORD *v21; // x20
  _QWORD *v22; // x24
  _QWORD *v23; // x22
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x8

  v4 = (_QWORD *)((char *)this + 96);
  v3 = (_QWORD *)*((_QWORD *)this + 12);
  if ( v3 == v4 )
    goto LABEL_33;
  v6 = v3;
  while ( 1 )
  {
    v7 = v6;
    v9 = (Caver::GUIAnimation *)v6[2];
    v8 = (_QWORD *)v6[3];
    if ( v8 )
      ++v8[1];
    if ( !*((_BYTE *)v9 + 84) )
    {
      v6 = (_QWORD *)*v6;
      Caver::GUIAnimation::Update(v9, *(float *)&a2);
      for ( i = (_QWORD *)*v4; v4 != i; i = (_QWORD *)*i )
      {
        if ( (Caver::GUIAnimation *)i[2] == v9 )
          break;
      }
      if ( v4 == i )
        goto LABEL_29;
      goto LABEL_20;
    }
    if ( *((_BYTE *)v9 + 185) )
    {
      (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)this + 120LL))(this);
      goto LABEL_29;
    }
    if ( *((_BYTE *)v9 + 186) )
      break;
    v6 = (_QWORD *)*v6;
    if ( *((_BYTE *)v9 + 184) )
    {
      sub_52A9C8(v3);
      v10 = (_QWORD *)v7[3];
      if ( v10 )
      {
        v11 = v10[1] - 1LL;
        v10[1] = v11;
        if ( !v11 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
          v12 = v10[2] - 1LL;
          v10[2] = v12;
          if ( !v12 )
            (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
        }
      }
      operator delete(v7);
      if ( !v8 )
        goto LABEL_24;
LABEL_21:
      v14 = v8[1] - 1LL;
      v8[1] = v14;
      if ( !v14 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
        v15 = v8[2] - 1LL;
        v8[2] = v15;
        if ( !v15 )
          (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
      }
      goto LABEL_24;
    }
LABEL_20:
    if ( v8 )
      goto LABEL_21;
LABEL_24:
    v3 = v6;
    if ( v4 == v6 )
      goto LABEL_33;
  }
  v16 = (Caver::GUIWindow *)(*(__int64 (__fastcall **)(Caver::GUIView *))(*(_QWORD *)this + 240LL))(this);
  if ( v16 )
    Caver::GUIWindow::DismissModalView(v16, 0);
LABEL_29:
  if ( v8 )
  {
    v17 = v8[1] - 1LL;
    v8[1] = v17;
    if ( !v17 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v18 = v8[2] - 1LL;
      v8[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
LABEL_33:
  v19 = (_QWORD *)*((_QWORD *)this + 4);
  while ( (_QWORD *)((char *)this + 32) != v19 )
  {
    v20 = v19[2];
    v21 = (_QWORD *)v19[3];
    if ( v21 )
      ++v21[1];
    if ( *(Caver::GUIView **)(v20 + 88) == this )
    {
      v19 = (_QWORD *)*v19;
      if ( !*(_BYTE *)(v20 + 228) )
        (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v20 + 72LL))(v20, a2);
      if ( v21 )
      {
LABEL_47:
        v26 = v21[1] - 1LL;
        v21[1] = v26;
        if ( !v26 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
          v27 = v21[2] - 1LL;
          v21[2] = v27;
          if ( !v27 )
            (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
        }
        continue;
      }
    }
    else
    {
      *(_BYTE *)(v20 + 80) = 0;
      v22 = (_QWORD *)*v19;
      sub_52A9C8(v19);
      v23 = (_QWORD *)v19[3];
      if ( v23 )
      {
        v24 = v23[1] - 1LL;
        v23[1] = v24;
        if ( !v24 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
          v25 = v23[2] - 1LL;
          v23[2] = v25;
          if ( !v25 )
            (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
        }
      }
      operator delete(v19);
      v19 = v22;
      if ( v21 )
        goto LABEL_47;
    }
  }
}

