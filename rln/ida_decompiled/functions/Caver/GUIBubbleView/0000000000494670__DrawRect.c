/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000494670
 * Mangled: _ZN5Caver13GUIBubbleView8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 25
 *   0x00000000001F3B80  Caver::GUIView::ConvertPointFromView(Caver::Vector2 const&,Caver::GUIView*)
 *   0x00000000001F4310  Caver::GUITextBubble::SetMaxBounds(Caver::Rectangle const&)
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FB1E0  Caver::Rectangle::RectangleByInsetting(float)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FEA30  Caver::GUIAnimation::ScaleAnimation(float,float,float)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FF780  Caver::GUITextBubble::FinishShowingText(void)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000202160  Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *   0x0000000000203620  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000494F3C  Caver::GUIBubbleView::~GUIBubbleView()
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 194
 *   insn=0x0000000000494680 string=0x0000000000494684 "V"
 *   insn=0x0000000000494698 string=0x000000000049469C "m"
 *   insn=0x000000000049469C string=0x00000000001F9850 "0'"
 *   insn=0x00000000004946AC string=0x00000000004946B0 ""
 *   insn=0x00000000004946BC string=0x0000000000494790 "k"
 *   insn=0x00000000004946C4 string=0x00000000001F7210 "0'"
 *   insn=0x00000000004946CC string=0x00000000004946D0 "\t"
 *   insn=0x00000000004946D0 string=0x00000000004946D4 "\t"
 *   insn=0x00000000004946D4 string=0x00000000004946D8 ""
 *   insn=0x00000000004946D4 string=0x0000000000494894 "\t"
 *   insn=0x00000000004946E0 string=0x00000000004946E4 ")"
 *   insn=0x00000000004946EC string=0x00000000004946F0 "h"
 *   insn=0x0000000000494708 string=0x000000000049470C "\n"
 *   insn=0x0000000000494710 string=0x0000000000494714 ")"
 *   insn=0x0000000000494714 string=0x0000000000494718 "_"
 *   insn=0x0000000000494718 string=0x000000000049471C "H"
 *   insn=0x000000000049471C string=0x0000000000494720 "?"
 *   insn=0x0000000000494720 string=0x0000000000494724 ")"
 *   insn=0x0000000000494744 string=0x0000000000494748 "5"
 *   insn=0x000000000049474C string=0x0000000000494750 ""
 *   insn=0x0000000000494760 string=0x0000000000494764 "\t@"
 *   insn=0x000000000049476C string=0x0000000000494770 ""
 *   insn=0x0000000000494780 string=0x0000000000494784 "@"
 *   insn=0x0000000000494790 string=0x0000000000494794 "l"
 *   insn=0x0000000000494794 string=0x0000000000494798 "m"
 *   insn=0x000000000049479C string=0x00000000004947A0 "`%"
 *   insn=0x00000000004947BC string=0x00000000004947C0 "\t"
 *   insn=0x00000000004947C0 string=0x00000000004947C4 ")"
 *   insn=0x00000000004947C4 string=0x00000000004947C8 ""
 *   insn=0x00000000004947C4 string=0x00000000004948A8 "\t"
 *   insn=0x00000000004947CC string=0x00000000004947DC ""
 *   insn=0x00000000004947D0 string=0x00000000004947D4 ")"
 *   insn=0x0000000000494810 string=0x0000000000494814 "5"
 *   insn=0x0000000000494818 string=0x000000000049481C ""
 *   insn=0x000000000049482C string=0x0000000000494830 "\t@"
 *   insn=0x0000000000494838 string=0x000000000049483C ""
 *   insn=0x000000000049484C string=0x0000000000494850 "@"
 *   insn=0x0000000000494868 string=0x000000000049486C "="
 *   insn=0x0000000000494894 string=0x0000000000494898 ")"
 *   insn=0x0000000000494898 string=0x000000000049489C "UI"
 *   insn=0x0000000000494898 string=0x00000000004948BC ""
 *   insn=0x00000000004948AC string=0x00000000004948B0 "UI"
 *   insn=0x00000000004948AC string=0x00000000004948C8 ""
 *   insn=0x00000000004948C8 string=0x00000000004948CC "5"
 *   insn=0x00000000004948D4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004948E0 string=0x00000000004948E4 ""
 *   insn=0x00000000004948F0 string=0x00000000004948F4 "\t@"
 *   insn=0x0000000000494900 string=0x0000000000494904 ""
 *   insn=0x0000000000494910 string=0x0000000000494914 "@"
 *   insn=0x0000000000494924 string=0x0000000000494928 "5"
 *   insn=0x000000000049492C string=0x0000000000494930 ""
 *   insn=0x000000000049493C string=0x0000000000494940 "\t@"
 *   insn=0x000000000049494C string=0x0000000000494950 ""
 *   insn=0x000000000049495C string=0x0000000000494960 "@"
 *   insn=0x0000000000494970 string=0x0000000000494974 "v"
 *   insn=0x0000000000494990 string=0x0000000000494994 "X"
 *   insn=0x0000000000494994 string=0x0000000000494998 ""
 *   insn=0x00000000004949B0 string=0x00000000004949B4 "y@"
 *   insn=0x00000000004949BC string=0x00000000004949C0 "6"
 *   insn=0x00000000004949C0 string=0x00000000004949C4 "w\n@"
 *   insn=0x00000000004949C0 string=0x0000000000494BC4 ""
 *   insn=0x00000000004949C4 string=0x00000000004949C8 "W"
 *   insn=0x00000000004949CC string=0x00000000004949D0 ""
 *   insn=0x00000000004949D4 string=0x00000000004949D8 "j"
 *   insn=0x00000000004949D8 string=0x00000000004949DC ""
 *   insn=0x00000000004949DC string=0x00000000004949E0 "91@"
 *   insn=0x00000000004949F4 string=0x00000000004949F8 "\t@"
 *   insn=0x0000000000494A00 string=0x0000000000494A04 ""
 *   insn=0x0000000000494A14 string=0x0000000000494A18 "@"
 *   insn=0x0000000000494A24 string=0x0000000000494A28 " "
 *   insn=0x0000000000494A2C string=0x0000000000494A30 "7"
 *   insn=0x0000000000494A34 string=0x0000000000494A38 ""
 *   insn=0x0000000000494A48 string=0x0000000000494A4C "\t@"
 *   insn=0x0000000000494A54 string=0x0000000000494A58 ""
 *   insn=0x0000000000494A68 string=0x0000000000494A6C "@"
 *   insn=0x0000000000494A7C string=0x00000000001FB170 "0'"
 *   insn=0x0000000000494A8C string=0x0000000000494A90 "!$"
 *   insn=0x0000000000494A90 string=0x0000000000494A94 "a(!"
 *   insn=0x0000000000494A98 string=0x0000000000494A9C "!@&"
 *   insn=0x0000000000494AB0 string=0x0000000000494AB4 "3|"
 *   insn=0x0000000000494AB4 string=0x00000000001F3B80 "P'"
 *   insn=0x0000000000494AB8 string=0x0000000000494ABC "tz@"
 *   insn=0x0000000000494AC0 string=0x0000000000494AC4 "h"
 *   insn=0x0000000000494AC8 string=0x0000000000494ACC "y"
 *   insn=0x0000000000494ACC string=0x00000000001F5CB0 "P'"
 *   insn=0x0000000000494ADC string=0x0000000000494AE0 "`"
 *   insn=0x0000000000494ADC string=0x00000000001FB1E0 "0'"
 *   insn=0x0000000000494AF4 string=0x0000000000494AF8 "Z"
 *   insn=0x0000000000494AF8 string=0x00000000001F9C60 "0'"
 *   insn=0x0000000000494B04 string=0x00000000001F4310 "P'"
 *   insn=0x0000000000494B20 string=0x0000000000494B24 "\n"
 *   insn=0x0000000000494B20 string=0x0000000000494B30 "t"
 *   insn=0x0000000000494B24 string=0x0000000000494B28 "J"
 *   insn=0x0000000000494B28 string=0x0000000000494B2C "\n"
 *   insn=0x0000000000494B30 string=0x0000000000494B34 "i"
 *   insn=0x0000000000494B34 string=0x0000000000494B38 "4"
 *   insn=0x0000000000494B3C string=0x0000000000494B40 ""
 *   insn=0x0000000000494B4C string=0x0000000000494B50 "\t@"
 *   insn=0x0000000000494B5C string=0x0000000000494B60 ""
 *   insn=0x0000000000494B6C string=0x0000000000494B70 "@"
 *   insn=0x0000000000494B7C string=0x0000000000494B80 "3"
 *   insn=0x0000000000494B80 string=0x0000000000494B84 "h"
 *   insn=0x0000000000494B84 string=0x0000000000494B88 ""
 *   insn=0x0000000000494B88 string=0x0000000000494B8C "h"
 *   insn=0x0000000000494B90 string=0x0000000000494B94 "h"
 *   insn=0x0000000000494B98 string=0x0000000000494B9C "\t@"
 *   insn=0x0000000000494BA0 string=0x0000000000494BA4 "h\n@"
 *   insn=0x0000000000494BA4 string=0x0000000000494BA8 ""
 *   insn=0x0000000000494BA8 string=0x0000000000494BAC "h\n"
 *   insn=0x0000000000494BB0 string=0x0000000000494BB4 "h"
 *   insn=0x0000000000494BB8 string=0x0000000000494BBC "@"
 *   insn=0x0000000000494BF0 string=0x0000000000494BF4 ""
 *   insn=0x0000000000494BF4 string=0x0000000000494BF8 "A"
 *   insn=0x0000000000494C00 string=0x0000000000494C04 "_"
 *   insn=0x0000000000494C04 string=0x00000000001FA980 "0'"
 *   insn=0x0000000000494C18 string=0x0000000000494C1C "*"
 *   insn=0x0000000000494C2C string=0x0000000000494C30 ""
 *   insn=0x0000000000494C34 string=0x0000000000494C38 "!"
 *   insn=0x0000000000494C3C string=0x0000000000494C40 "\t@"
 *   insn=0x0000000000494C4C string=0x0000000000494C50 ""
 *   insn=0x0000000000494C54 string=0x0000000000494C58 "!"
 *   insn=0x0000000000494C5C string=0x0000000000494C60 "@"
 *   insn=0x0000000000494C74 string=0x0000000000494C78 "4"
 *   insn=0x0000000000494C7C string=0x0000000000494C80 ""
 *   insn=0x0000000000494C8C string=0x0000000000494C90 "\t@"
 *   insn=0x0000000000494C9C string=0x0000000000494CA0 ""
 *   insn=0x0000000000494CAC string=0x0000000000494CB0 "@"
 *   insn=0x0000000000494CD4 string=0x0000000000494CD8 "T"
 *   insn=0x0000000000494CE0 string=0x0000000000494CE4 "x@"
 *   insn=0x0000000000494CE4 string=0x0000000000494CE8 "\t"
 *   insn=0x0000000000494CE8 string=0x0000000000494CEC "\nA@"
 *   insn=0x0000000000494CEC string=0x0000000000494CF0 ")"
 *   insn=0x0000000000494CF0 string=0x0000000000494CF4 ")"
 *   insn=0x0000000000494CF4 string=0x0000000000494CF8 "_"
 *   insn=0x0000000000494CFC string=0x0000000000494D98 ""
 *   insn=0x0000000000494D08 string=0x00000000001FDF30 "0'"
 *   insn=0x0000000000494D10 string=0x0000000000584965 "click"
 *   insn=0x0000000000494D34 string=0x00000000001F5340 "P'"
 *   insn=0x0000000000494D3C string=0x0000000000494D40 "@"
 *   insn=0x0000000000494D40 string=0x0000000000494D44 ""
 *   insn=0x0000000000494D44 string=0x0000000000494D48 ""
 *   insn=0x0000000000494D4C string=0x0000000000494D50 ""
 *   insn=0x0000000000494D50 string=0x0000000000494D54 ""
 *   insn=0x0000000000494D60 string=0x0000000000494D64 ")"
 *   insn=0x0000000000494D74 string=0x0000000000494D78 ")=G"
 *   insn=0x0000000000494D78 string=0x0000000000494D7C "!"
 *   insn=0x0000000000494D80 string=0x0000000000494D84 "\t"
 *   insn=0x0000000000494D80 string=0x0000000000494E54 "\t"
 *   insn=0x0000000000494D84 string=0x0000000000494D88 "*"
 *   insn=0x0000000000494D88 string=0x0000000000494D8C "\n"
 *   insn=0x0000000000494D90 string=0x0000000000494D94 "3"
 *   insn=0x0000000000494D94 string=0x0000000000494E60 "?"
 *   insn=0x0000000000494D98 string=0x0000000000494D9C "=@"
 *   insn=0x0000000000494DA0 string=0x0000000000494DA4 "c"
 *   insn=0x0000000000494DCC string=0x0000000000494DD0 "\"
 *   insn=0x0000000000494DD8 string=0x0000000000494DDC "@"
 *   insn=0x0000000000494DDC string=0x0000000000494DE0 ""
 *   insn=0x0000000000494DE0 string=0x0000000000494DE4 ""
 *   insn=0x0000000000494DE8 string=0x0000000000494DEC ""
 *   insn=0x0000000000494DEC string=0x0000000000494DF0 ""
 *   insn=0x0000000000494DFC string=0x0000000000494E00 ")"
 *   insn=0x0000000000494E08 string=0x0000000000494E0C "!"
 *   insn=0x0000000000494E30 string=0x0000000000494E34 ")=G"
 *   insn=0x0000000000494E34 string=0x0000000000494E38 "!"
 *   insn=0x0000000000494E3C string=0x0000000000494E40 "\t"
 *   insn=0x0000000000494E40 string=0x0000000000494E44 "*"
 *   insn=0x0000000000494E44 string=0x0000000000494E48 "\n"
 *   insn=0x0000000000494E54 string=0x0000000000494E58 "*"
 *   insn=0x0000000000494E58 string=0x0000000000494E5C "\n"
 *   insn=0x0000000000494E60 string=0x0000000000494E64 "l"
 *   insn=0x0000000000494E68 string=0x0000000000494E6C "NU"
 *   insn=0x0000000000494E8C string=0x0000000000494E90 "J"
 *   insn=0x0000000000494E94 string=0x0000000000494E98 "(a"
 *   insn=0x0000000000494EA4 string=0x0000000000494EA8 "J=G"
 *   insn=0x0000000000494EA8 string=0x0000000000494EAC ")!"
 *   insn=0x0000000000494EB0 string=0x0000000000494EB4 "*"
 *   insn=0x0000000000494EB0 string=0x0000000000494F20 "*"
 *   insn=0x0000000000494EB4 string=0x0000000000494EB8 "K"
 *   insn=0x0000000000494EB8 string=0x0000000000494EBC "+"
 *   insn=0x0000000000494EC4 string=0x0000000000494F04 "_"
 *   insn=0x0000000000494ECC string=0x0000000000494ED0 "J"
 *   insn=0x0000000000494ED4 string=0x0000000000494ED8 "(a"
 *   insn=0x0000000000494EE4 string=0x0000000000494EE8 "J=G"
 *   insn=0x0000000000494EE8 string=0x0000000000494EEC ")!"
 *   insn=0x0000000000494EF0 string=0x0000000000494EF4 "*"
 *   insn=0x0000000000494EF4 string=0x0000000000494EF8 "K"
 *   insn=0x0000000000494EF8 string=0x0000000000494EFC "+"
 *   insn=0x0000000000494F04 string=0x0000000000494F08 "l"
 *   insn=0x0000000000494F10 string=0x0000000000494F14 "$U"
 *   insn=0x0000000000494F18 string=0x0000000000494F1C "j"
 *   insn=0x0000000000494F20 string=0x0000000000494F24 "K"
 *   insn=0x0000000000494F24 string=0x0000000000494F28 "+"
 *   insn=0x0000000000494F28 string=0x0000000000494F2C "_"
 *   insn=0x0000000000494F34 string=0x0000000000494F38 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIBubbleView::DrawRect(
        Caver::GUIBubbleView *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  __int64 v7; // x8
  __int64 v8; // x8
  float *v9; // x8
  _QWORD *v10; // x21
  __int64 v11; // t2
  float v12; // s0
  int v13; // w9
  char v14; // w8
  __int64 v15; // x8
  __int64 v16; // x8
  int *v17; // x8
  _QWORD *v18; // x21
  __int64 v19; // t2
  int v20; // w8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v24; // t2
  __int64 v25; // t2
  __int64 v26; // t2
  __int64 v27; // t2
  int v28; // [xsp+F0h] [xbp-B0h] BYREF
  __int128 v29; // [xsp+F4h] [xbp-ACh]
  int v30; // [xsp+104h] [xbp-9Ch]
  __int128 v31; // [xsp+108h] [xbp-98h]
  int v32; // [xsp+118h] [xbp-88h]
  __int128 v33; // [xsp+11Ch] [xbp-84h]
  int v34; // [xsp+12Ch] [xbp-74h]
  _OWORD v35[3]; // [xsp+130h] [xbp-70h] BYREF
  __int64 v36; // [xsp+160h] [xbp-40h]
  __int64 v37; // [xsp+168h] [xbp-38h]
  __int64 v38; // [xsp+178h] [xbp-28h]

  v38 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::DrawRect();
  (*(void (__fastcall **)(Caver::GUIBubbleView *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  v7 = *((_QWORD *)this + 33);
  if ( !v7 )
    goto LABEL_15;
  Caver::RenderingContext::SetIdentityMatrix(a2);
  v8 = *((_QWORD *)this + 33);
  if ( !*(_DWORD *)(v8 + 160) )
  {
    if ( *(_BYTE *)(v8 + 100) )
    {
      v24 = v8 + 144;
      v9 = *(float **)(v8 + 144);
      v10 = *(_QWORD **)(v24 + 8);
      if ( !v10 )
        goto LABEL_5;
    }
    else
    {
      v26 = v8 + 120;
      v9 = *(float **)(v8 + 120);
      v10 = *(_QWORD **)(v26 + 8);
      if ( !v10 )
        goto LABEL_5;
    }
    goto LABEL_4;
  }
  v11 = v8 + 168;
  v9 = *(float **)(v8 + 168);
  v10 = *(_QWORD **)(v11 + 8);
  if ( v10 )
LABEL_4:
    ++v10[1];
LABEL_5:
  v12 = *v9 * 0.5;
  v13 = (int)(float)(v12 * 0.0);
  if ( (int)(float)(v12 * 255.0) >= 255 )
    v14 = -1;
  else
    v14 = (int)(float)(v12 * 255.0);
  if ( v13 >= 255 )
    LOBYTE(v13) = -1;
  LOBYTE(v35[0]) = v13;
  BYTE1(v35[0]) = v13;
  BYTE2(v35[0]) = v13;
  BYTE3(v35[0]) = v14;
  Caver::RenderingContext::FillRect(a2, (Caver::GUIBubbleView *)((char *)this + 132), (const Caver::Color *)v35, 0.0);
  if ( v10 )
  {
    v15 = v10[1] - 1LL;
    v10[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v16 = v10[2] - 1LL;
      v10[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  v7 = *((_QWORD *)this + 33);
LABEL_15:
  v36 = *((_QWORD *)this + 32);
  v37 = 0x3F80000000000000LL;
  v35[0] = xmmword_583490;
  v35[1] = xmmword_5837E0;
  v35[2] = xmmword_5837F0;
  if ( !v7 )
    goto LABEL_23;
  if ( !*(_DWORD *)(v7 + 160) )
  {
    if ( *(_BYTE *)(v7 + 100) )
    {
      v25 = v7 + 144;
      v17 = *(int **)(v7 + 144);
      v18 = *(_QWORD **)(v25 + 8);
      if ( !v18 )
        goto LABEL_19;
    }
    else
    {
      v27 = v7 + 120;
      v17 = *(int **)(v7 + 120);
      v18 = *(_QWORD **)(v27 + 8);
      if ( !v18 )
        goto LABEL_19;
    }
    goto LABEL_18;
  }
  v19 = v7 + 168;
  v17 = *(int **)(v7 + 168);
  v18 = *(_QWORD **)(v19 + 8);
  if ( v18 )
LABEL_18:
    ++v18[1];
LABEL_19:
  v20 = *v17;
  v29 = 0u;
  v28 = v20;
  v30 = v20;
  v32 = v20;
  v31 = 0u;
  v33 = 0u;
  v34 = 1065353216;
  C_Matrix4Mul((const float *)v35, (const float *)&v28, (float *)v35);
  if ( v18 )
  {
    v21 = v18[1] - 1LL;
    v18[1] = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      v22 = v18[2] - 1LL;
      v18[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
    }
  }
LABEL_23:
  Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v35);
  return Caver::GUITextBubble::Draw(*((Caver::GUITextBubble **)this + 30), a2);
}

