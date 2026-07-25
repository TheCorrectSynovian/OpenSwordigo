/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043650C
 * Mangled: _ZN5Caver16SceneLoadingView6UpdateEf
 * Demangled: Caver::SceneLoadingView::Update(float)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FBD20  Caver::LoadingView::Update(float)
 *   0x0000000000200B40  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000436A08  Caver::SceneLoadingView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 131
 *   insn=0x000000000043652C string=0x0000000000436530 "Y"
 *   insn=0x0000000000436530 string=0x0000000000436534 "("
 *   insn=0x0000000000436534 string=0x0000000000436538 ""
 *   insn=0x0000000000436544 string=0x0000000000436548 "`"
 *   insn=0x0000000000436544 string=0x00000000001FBD20 "0'"
 *   insn=0x0000000000436548 string=0x000000000043654C "h"
 *   insn=0x0000000000436550 string=0x0000000000436554 "`"
 *   insn=0x0000000000436558 string=0x000000000043655C "h"
 *   insn=0x0000000000436558 string=0x0000000000436710 "h"
 *   insn=0x000000000043655C string=0x0000000000436560 "i\n"
 *   insn=0x0000000000436560 string=0x0000000000436564 "`"
 *   insn=0x0000000000436564 string=0x0000000000436568 "!"
 *   insn=0x0000000000436574 string=0x0000000000436578 "H"
 *   insn=0x000000000043657C string=0x0000000000436580 "`"
 *   insn=0x0000000000436580 string=0x0000000000436584 "+"
 *   insn=0x0000000000436584 string=0x0000000000436588 "{"
 *   insn=0x0000000000436584 string=0x0000000000436828 "("
 *   insn=0x0000000000436588 string=0x000000000043658C "z"
 *   insn=0x000000000043658C string=0x0000000000436590 "{"
 *   insn=0x0000000000436590 string=0x0000000000436594 "Z?G"
 *   insn=0x0000000000436598 string=0x00000000004365A0 "h"
 *   insn=0x0000000000436598 string=0x00000000005993BE "."
 *   insn=0x00000000004365A8 string=0x00000000004365AC "i"
 *   insn=0x00000000004365B0 string=0x00000000004365B4 ""
 *   insn=0x00000000004365B4 string=0x00000000004365B8 "`"
 *   insn=0x00000000004365B8 string=0x00000000004365BC "h"
 *   insn=0x00000000004365C0 string=0x00000000004365C4 "v"
 *   insn=0x00000000004365C0 string=0x0000000000436650 "v"
 *   insn=0x00000000004365E0 string=0x00000000004365E4 "|"
 *   insn=0x00000000004365F4 string=0x00000000004365F8 "("
 *   insn=0x00000000004365F8 string=0x00000000004365FC "_"
 *   insn=0x0000000000436608 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000436614 string=0x0000000000436618 "$"
 *   insn=0x0000000000436620 string=0x00000000001F8510 "0'"
 *   insn=0x0000000000436630 string=0x0000000000436634 "#"
 *   insn=0x0000000000436630 string=0x00000000004366C0 "`"
 *   insn=0x0000000000436638 string=0x000000000043663C "\t"
 *   insn=0x0000000000436638 string=0x00000000004366EC "\t"
 *   insn=0x000000000043663C string=0x0000000000436640 "*"
 *   insn=0x0000000000436640 string=0x0000000000436644 "\n"
 *   insn=0x0000000000436648 string=0x000000000043664C "+"
 *   insn=0x000000000043664C string=0x00000000004366F8 "?"
 *   insn=0x000000000043666C string=0x0000000000436670 "Y"
 *   insn=0x0000000000436680 string=0x0000000000436684 "("
 *   insn=0x0000000000436684 string=0x0000000000436688 "_"
 *   insn=0x00000000004366BC string=0x00000000004366D0 "#"
 *   insn=0x00000000004366C8 string=0x00000000004366CC "W"
 *   insn=0x00000000004366D4 string=0x00000000004366D8 "\t"
 *   insn=0x00000000004366D8 string=0x00000000004366DC "*"
 *   insn=0x00000000004366DC string=0x00000000004366E0 "\n"
 *   insn=0x00000000004366EC string=0x00000000004366F0 "*"
 *   insn=0x00000000004366F0 string=0x00000000004366F4 "\n"
 *   insn=0x00000000004366F8 string=0x00000000004366FC ","
 *   insn=0x0000000000436704 string=0x0000000000436708 "'"
 *   insn=0x0000000000436710 string=0x0000000000436714 "H"
 *   insn=0x0000000000436714 string=0x0000000000436718 "h\n"
 *   insn=0x0000000000436720 string=0x0000000000436724 "-"
 *   insn=0x0000000000436738 string=0x000000000043673C "t"
 *   insn=0x0000000000436748 string=0x000000000043674C "t"
 *   insn=0x0000000000436754 string=0x00000000001FA5A0 "0'"
 *   insn=0x0000000000436760 string=0x0000000000436764 "h"
 *   insn=0x0000000000436760 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000043677C string=0x0000000000436780 "s"
 *   insn=0x0000000000436798 string=0x000000000043679C "3"
 *   insn=0x000000000043679C string=0x00000000004367A0 "h"
 *   insn=0x00000000004367A0 string=0x00000000004367A4 ""
 *   insn=0x00000000004367A4 string=0x00000000004367A8 "h"
 *   insn=0x00000000004367AC string=0x00000000004367B0 "h"
 *   insn=0x00000000004367B0 string=0x00000000004367B4 "\t@"
 *   insn=0x00000000004367BC string=0x00000000004367C0 "h\n@"
 *   insn=0x00000000004367C0 string=0x00000000004367C4 ""
 *   insn=0x00000000004367C4 string=0x00000000004367C8 "h\n"
 *   insn=0x00000000004367CC string=0x00000000004367D0 "h"
 *   insn=0x00000000004367D0 string=0x00000000004367D4 "@"
 *   insn=0x00000000004367E0 string=0x00000000004367E4 "3"
 *   insn=0x00000000004367E4 string=0x00000000004367E8 "h"
 *   insn=0x00000000004367E8 string=0x00000000004367EC ""
 *   insn=0x00000000004367EC string=0x00000000004367F0 "h"
 *   insn=0x00000000004367F4 string=0x00000000004367F8 "h"
 *   insn=0x00000000004367FC string=0x0000000000436800 "\t@"
 *   insn=0x0000000000436804 string=0x0000000000436808 "h\n@"
 *   insn=0x0000000000436808 string=0x000000000043680C ""
 *   insn=0x000000000043680C string=0x0000000000436810 "h\n"
 *   insn=0x0000000000436814 string=0x0000000000436818 "h"
 *   insn=0x000000000043681C string=0x0000000000436820 "@"
 *   insn=0x0000000000436830 string=0x0000000000436834 "A"
 *   insn=0x000000000043685C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000436864 string=0x0000000000436868 "4"
 *   insn=0x0000000000436868 string=0x000000000043686C "e"
 *   insn=0x0000000000436874 string=0x0000000000436878 "t"
 *   insn=0x000000000043687C string=0x0000000000436880 ""
 *   insn=0x000000000043688C string=0x0000000000436890 "\t@"
 *   insn=0x000000000043689C string=0x00000000004368A0 ""
 *   insn=0x00000000004368AC string=0x00000000004368B0 "@"
 *   insn=0x00000000004368CC string=0x00000000004368D0 ""
 *   insn=0x00000000004368D4 string=0x00000000004368D8 "A\t"
 *   insn=0x00000000004368DC string=0x00000000004368E0 "\t@"
 *   insn=0x00000000004368EC string=0x00000000004368F0 ""
 *   insn=0x00000000004368F4 string=0x00000000004368F8 "A"
 *   insn=0x00000000004368FC string=0x0000000000436900 "@"
 *   insn=0x0000000000436908 string=0x000000000043690C "="
 *   insn=0x0000000000436918 string=0x000000000043691C "(a"
 *   insn=0x0000000000436924 string=0x0000000000436928 ")!"
 *   insn=0x000000000043692C string=0x0000000000436930 "*"
 *   insn=0x000000000043692C string=0x00000000004369EC "*"
 *   insn=0x0000000000436930 string=0x0000000000436934 "K"
 *   insn=0x0000000000436934 string=0x0000000000436938 "+"
 *   insn=0x000000000043693C string=0x0000000000436940 "$"
 *   insn=0x0000000000436940 string=0x00000000004369D0 "_"
 *   insn=0x0000000000436948 string=0x000000000043694C "(a"
 *   insn=0x0000000000436950 string=0x0000000000436954 "`"
 *   insn=0x0000000000436954 string=0x0000000000436958 ")!"
 *   insn=0x000000000043695C string=0x0000000000436960 "*"
 *   insn=0x0000000000436960 string=0x0000000000436964 "K"
 *   insn=0x0000000000436964 string=0x0000000000436968 "+"
 *   insn=0x0000000000436978 string=0x000000000043697C "(a"
 *   insn=0x0000000000436984 string=0x0000000000436988 ")!"
 *   insn=0x000000000043698C string=0x0000000000436990 "*"
 *   insn=0x0000000000436990 string=0x0000000000436994 "K"
 *   insn=0x0000000000436994 string=0x0000000000436998 "+"
 *   insn=0x00000000004369A8 string=0x00000000004369AC "(a"
 *   insn=0x00000000004369B0 string=0x00000000004369B4 "`"
 *   insn=0x00000000004369B4 string=0x00000000004369B8 ")!"
 *   insn=0x00000000004369BC string=0x00000000004369C0 "*"
 *   insn=0x00000000004369C0 string=0x00000000004369C4 "K"
 *   insn=0x00000000004369C4 string=0x00000000004369C8 "+"
 *   insn=0x00000000004369D0 string=0x00000000004369D4 "l"
 *   insn=0x00000000004369DC string=0x00000000004369E0 "q"
 *   insn=0x00000000004369EC string=0x00000000004369F0 "K"
 *   insn=0x00000000004369F0 string=0x00000000004369F4 "+"
 *   insn=0x00000000004369F4 string=0x00000000004369F8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneLoadingView::Update(Caver::GUIView **this, float a2)
{
  Caver::GUIAnimation *v4; // x0
  int v5; // w8
  float v6; // s0
  float v7; // s0
  float v8; // s8
  int v9; // w8
  int v10; // w9
  const void **v11; // x22
  char *v12; // x24
  size_t v13; // x2
  __int64 *v14; // x21
  unsigned int *v15; // x8
  int v16; // w9
  const void **v17; // x22
  char *v18; // x24
  size_t v19; // x2
  Caver::GUIAnimation *v20; // x0
  _QWORD *v21; // x19
  __int64 v22; // x8
  __int64 v23; // x8
  _QWORD *v24; // x19
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // [xsp+8h] [xbp-78h] BYREF
  _QWORD *v28; // [xsp+10h] [xbp-70h]
  void *v29; // [xsp+18h] [xbp-68h] BYREF
  _QWORD *v30; // [xsp+20h] [xbp-60h]
  __int64 v31; // [xsp+28h] [xbp-58h]

  v31 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (Caver::GUIAnimation *)Caver::LoadingView::Update((Caver::LoadingView *)this, a2);
  v5 = *((unsigned __int8 *)this + 420);
  v6 = *((float *)this + 104) + a2;
  *((float *)this + 104) = v6;
  if ( v5 || !*((_BYTE *)this + 421) )
  {
    v7 = *((float *)this + 106) + a2;
    if ( *((_BYTE *)this + 432) )
      v8 = 0.2;
    else
      v8 = 0.0;
    *((float *)this + 106) = v7;
    if ( v7 < v8 )
      return;
    while ( 1 )
    {
      v9 = *((_DWORD *)this + 107);
      if ( v9 > 2 )
        return;
      v10 = *((unsigned __int8 *)this + 421);
      *((float *)this + 106) = v7 - v8;
      *((_DWORD *)this + 107) = v9 + 1;
      if ( v10 )
      {
        v11 = (const void **)this[50];
        sub_56A528(&v29, v11 + 32);
        sub_5677D4(&v29, ".", 1);
        v12 = (char *)v29;
        v14 = (__int64 *)((char *)v29 - 24);
        v13 = *((_QWORD *)v29 - 3);
        if ( v13 != *((_QWORD *)v11[32] - 3) || memcmp(v29, v11[32], v13) )
        {
          sub_56A6A8(v11 + 32);
          Caver::GUILabel::UpdateText((Caver::GUILabel *)v11);
          v12 = (char *)v29;
          v14 = (__int64 *)((char *)v29 - 24);
        }
        if ( v14 == &qword_6FD2E0 )
          goto LABEL_19;
        v15 = (unsigned int *)(v12 - 8);
        if ( &pthread_create )
        {
          do
            v16 = __ldaxr(v15);
          while ( __stlxr(v16 - 1, v15) );
          goto LABEL_25;
        }
      }
      else
      {
        v17 = (const void **)this[48];
        sub_56A528(&v29, v17 + 32);
        sub_5677D4(&v29, ".", 1);
        v18 = (char *)v29;
        v14 = (__int64 *)((char *)v29 - 24);
        v19 = *((_QWORD *)v29 - 3);
        if ( v19 != *((_QWORD *)v17[32] - 3) || memcmp(v29, v17[32], v19) )
        {
          sub_56A6A8(v17 + 32);
          Caver::GUILabel::UpdateText((Caver::GUILabel *)v17);
          v18 = (char *)v29;
          v14 = (__int64 *)((char *)v29 - 24);
        }
        if ( v14 == &qword_6FD2E0 )
          goto LABEL_19;
        v15 = (unsigned int *)(v18 - 8);
        if ( &pthread_create )
        {
          do
            v16 = __ldaxr(v15);
          while ( __stlxr(v16 - 1, v15) );
          goto LABEL_25;
        }
      }
      v16 = (*v15)--;
LABEL_25:
      if ( v16 <= 0 )
        operator delete(v14);
LABEL_19:
      v7 = *((float *)this + 106);
      if ( v7 < v8 )
        return;
    }
  }
  if ( v6 > 0.2 )
  {
    *((_BYTE *)this + 420) = 1;
    Caver::GUIAnimation::AlphaAnimation((__int64 *)&v29, v4, 1.0, 0.0, 0.5);
    *((_BYTE *)v29 + 185) = 1;
    Caver::GUIView::RemoveAllAnimations(this[48]);
    v20 = (Caver::GUIAnimation *)Caver::GUIView::AddAnimation();
    *((_BYTE *)this[50] + 228) = 0;
    Caver::GUIAnimation::AlphaAnimation(&v27, v20, 0.0, 1.0, 0.5);
    Caver::GUIView::RemoveAllAnimations(this[50]);
    Caver::GUIView::AddAnimation();
    v21 = v28;
    if ( v28 )
    {
      v22 = v28[1] - 1LL;
      v28[1] = v22;
      if ( !v22 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
        v23 = v21[2] - 1LL;
        v21[2] = v23;
        if ( !v23 )
          (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
      }
    }
    v24 = v30;
    if ( v30 )
    {
      v25 = v30[1] - 1LL;
      v30[1] = v25;
      if ( !v25 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
        v26 = v24[2] - 1LL;
        v24[2] = v26;
        if ( !v26 )
          (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
      }
    }
  }
}

