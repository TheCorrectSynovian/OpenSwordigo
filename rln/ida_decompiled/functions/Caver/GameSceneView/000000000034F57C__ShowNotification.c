/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034F57C
 * Mangled: _ZN5Caver13GameSceneView16ShowNotificationERKN5boost10shared_ptrINS_16NotificationViewEEE
 * Demangled: Caver::GameSceneView::ShowNotification(boost::shared_ptr<Caver::NotificationView> const&)
 *
 * Callers: 1
 *   0x00000000001F35D0  Caver::GameSceneView::ShowNotification(boost::shared_ptr<Caver::NotificationView> const&)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F69A0  boost::shared_ptr<Caver::ItemInfoPopupView>::shared_ptr<Caver::ItemInfoPopupView>(Caver::ItemInfoPopupView *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FFDE0  Caver::ItemInfoPopupView::ItemInfoPopupView(void)
 *   0x0000000000201D00  Caver::ItemInfoPopupView::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000034F9F4  Caver::GameSceneView::HideItemInfoPopup(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 111
 *   insn=0x000000000034F58C string=0x000000000034F590 "V"
 *   insn=0x000000000034F5A0 string=0x000000000034F5A4 "`"
 *   insn=0x000000000034F5A8 string=0x000000000034F5AC ""
 *   insn=0x000000000034F5AC string=0x000000000034F5B0 "=@"
 *   insn=0x000000000034F5BC string=0x000000000034F5C0 "\n"
 *   insn=0x000000000034F5BC string=0x000000000034F5CC "u"
 *   insn=0x000000000034F5C0 string=0x000000000034F5C4 "J"
 *   insn=0x000000000034F5C4 string=0x000000000034F5C8 "\n"
 *   insn=0x000000000034F5CC string=0x000000000034F5D0 "i""
 *   insn=0x000000000034F5D0 string=0x000000000034F5D4 "5"
 *   insn=0x000000000034F5D4 string=0x000000000034F618 "c"
 *   insn=0x000000000034F5D8 string=0x000000000034F5DC ""
 *   insn=0x000000000034F5EC string=0x000000000034F5F0 "\t@"
 *   insn=0x000000000034F5F8 string=0x000000000034F5FC ""
 *   insn=0x000000000034F60C string=0x000000000034F610 "@"
 *   insn=0x000000000034F618 string=0x000000000034F61C "d"
 *   insn=0x000000000034F620 string=0x000000000034F624 "b"
 *   insn=0x000000000034F62C string=0x000000000034F630 ""
 *   insn=0x000000000034F638 string=0x000000000034F63C "c($"
 *   insn=0x000000000034F63C string=0x000000000034F640 "b"
 *   insn=0x000000000034F648 string=0x000000000034F64C "@"
 *   insn=0x000000000034F650 string=0x000000000034F654 "a"
 *   insn=0x000000000034F668 string=0x00000000001FDA30 "0'"
 *   insn=0x000000000034F678 string=0x000000000034F67C ""
 *   insn=0x000000000034F684 string=0x000000000034F688 "h"
 *   insn=0x000000000034F684 string=0x00000000001FB170 "0'"
 *   insn=0x000000000034F68C string=0x000000000034F690 "1@"
 *   insn=0x000000000034F6A0 string=0x000000000034F6A4 "*"
 *   insn=0x000000000034F6A4 string=0x000000000034F6A8 "J"
 *   insn=0x000000000034F6A8 string=0x000000000034F6AC "*"
 *   insn=0x000000000034F6BC string=0x000000000034F6C0 "3"
 *   insn=0x000000000034F6C0 string=0x000000000034F6C4 "h"
 *   insn=0x000000000034F6C4 string=0x000000000034F6C8 ""
 *   insn=0x000000000034F6C8 string=0x000000000034F6CC "h"
 *   insn=0x000000000034F6D0 string=0x000000000034F6D4 "h"
 *   insn=0x000000000034F6D8 string=0x000000000034F6DC "\t@"
 *   insn=0x000000000034F6E0 string=0x000000000034F6E4 "h\n@"
 *   insn=0x000000000034F6E4 string=0x000000000034F6E8 ""
 *   insn=0x000000000034F6E8 string=0x000000000034F6EC "h\n"
 *   insn=0x000000000034F6F0 string=0x000000000034F6F4 "h"
 *   insn=0x000000000034F6F8 string=0x000000000034F6FC "@"
 *   insn=0x000000000034F728 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000034F730 string=0x000000000034F734 "4"
 *   insn=0x000000000034F738 string=0x000000000034F73C ""
 *   insn=0x000000000034F748 string=0x000000000034F74C "\t@"
 *   insn=0x000000000034F758 string=0x000000000034F75C ""
 *   insn=0x000000000034F768 string=0x000000000034F76C "@"
 *   insn=0x000000000034F778 string=0x000000000034F77C "R"
 *   insn=0x000000000034F794 string=0x000000000034F798 "V"
 *   insn=0x000000000034F7A8 string=0x000000000034F7AC "`"
 *   insn=0x000000000034F7B0 string=0x000000000034F7B4 ""
 *   insn=0x000000000034F7B4 string=0x000000000034F7B8 "=@"
 *   insn=0x000000000034F7BC string=0x000000000034F7C0 "u"
 *   insn=0x000000000034F7C4 string=0x000000000034F7C8 "5"
 *   insn=0x000000000034F7CC string=0x000000000034F7D0 ""
 *   insn=0x000000000034F7E0 string=0x000000000034F7E4 "\t@"
 *   insn=0x000000000034F7EC string=0x000000000034F7F0 ""
 *   insn=0x000000000034F800 string=0x000000000034F804 "@"
 *   insn=0x000000000034F80C string=0x000000000034F810 "t"
 *   insn=0x000000000034F810 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000034F814 string=0x000000000034F818 "r"
 *   insn=0x000000000034F820 string=0x000000000034F824 "_"
 *   insn=0x000000000034F824 string=0x000000000034F828 "hVS"
 *   insn=0x000000000034F824 string=0x00000000001F69A0 "0'"
 *   insn=0x000000000034F834 string=0x000000000034F838 "i""
 *   insn=0x000000000034F83C string=0x000000000034F840 "5"
 *   insn=0x000000000034F840 string=0x000000000034F884 "`"
 *   insn=0x000000000034F844 string=0x000000000034F848 ""
 *   insn=0x000000000034F858 string=0x000000000034F85C "\t@"
 *   insn=0x000000000034F864 string=0x000000000034F868 ""
 *   insn=0x000000000034F878 string=0x000000000034F87C "@"
 *   insn=0x000000000034F88C string=0x000000000034F890 "`"
 *   insn=0x000000000034F890 string=0x000000000034F894 "b"
 *   insn=0x000000000034F894 string=0x000000000034F898 "`"
 *   insn=0x000000000034F89C string=0x000000000034F8A0 ""
 *   insn=0x000000000034F8A0 string=0x000000000034F8A4 "B$"
 *   insn=0x000000000034F8A4 string=0x000000000034F8A8 "!(#"
 *   insn=0x000000000034F8B0 string=0x000000000034F8B4 """
 *   insn=0x000000000034F8B4 string=0x000000000034F8B8 "!(#"
 *   insn=0x000000000034F8B8 string=0x000000000034F8BC "B$"
 *   insn=0x000000000034F8C0 string=0x000000000034F8C4 "c$"
 *   insn=0x000000000034F8C4 string=0x000000000034F8C8 "!8""
 *   insn=0x000000000034F8CC string=0x000000000034F8D0 "!8""
 *   insn=0x000000000034F8DC string=0x000000000034F8E0 "$"
 *   insn=0x000000000034F8E0 string=0x000000000034F8E4 "h"
 *   insn=0x000000000034F8E4 string=0x000000000034F8E8 "i"
 *   insn=0x000000000034F8E8 string=0x000000000034F8EC "1@"
 *   insn=0x000000000034F8F0 string=0x000000000034F8F4 "i"
 *   insn=0x000000000034F8FC string=0x000000000034F900 "*"
 *   insn=0x000000000034F900 string=0x000000000034F904 "J"
 *   insn=0x000000000034F904 string=0x000000000034F908 "*"
 *   insn=0x000000000034F918 string=0x000000000034F91C "3"
 *   insn=0x000000000034F91C string=0x000000000034F920 "h"
 *   insn=0x000000000034F920 string=0x000000000034F924 ""
 *   insn=0x000000000034F924 string=0x000000000034F928 "h"
 *   insn=0x000000000034F92C string=0x000000000034F930 "h"
 *   insn=0x000000000034F934 string=0x000000000034F938 "\t@"
 *   insn=0x000000000034F93C string=0x000000000034F940 "h\n@"
 *   insn=0x000000000034F940 string=0x000000000034F944 ""
 *   insn=0x000000000034F944 string=0x000000000034F948 "h\n"
 *   insn=0x000000000034F94C string=0x000000000034F950 "h"
 *   insn=0x000000000034F954 string=0x000000000034F958 "@"
 *   insn=0x000000000034F96C string=0x000000000034F984 "S"
 *   insn=0x000000000034F98C string=0x000000000034F990 "4"
 *   insn=0x000000000034F994 string=0x000000000034F998 ""
 *   insn=0x000000000034F9A4 string=0x000000000034F9A8 "\t@"
 *   insn=0x000000000034F9B4 string=0x000000000034F9B8 ""
 *   insn=0x000000000034F9C4 string=0x000000000034F9C8 "@"
 *   insn=0x000000000034F9D8 string=0x000000000034F9DC "\"
 *   insn=0x000000000034F9E4 string=0x000000000034F9E8 "2"
 *   insn=0x000000000034F9E8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::ShowNotification(__int64 a1, Caver::GUIView **a2)
{
  __int64 v4; // x0
  Caver::GUIView *v5; // x8
  Caver::GUIView *v6; // x9
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  Caver::GUIView *v10; // x21
  float32x2_t v11; // d2
  const float *v12; // x8
  float32x2_t v13; // d1
  Caver::GUIView *v14; // x8
  __int64 (__fastcall *v15)(__int64, __int64 *); // x8
  Caver::GUIView *v16; // x9
  __int64 result; // x0
  Caver::GUIView *v18; // x19
  __int64 v19; // x8
  __int64 v20; // x8
  unsigned __int64 v21; // [xsp+50h] [xbp-48h] BYREF
  __int64 v22; // [xsp+58h] [xbp-40h] BYREF
  __int64 v23; // [xsp+60h] [xbp-38h] BYREF
  Caver::GUIView *v24; // [xsp+68h] [xbp-30h]
  __int64 v25; // [xsp+70h] [xbp-28h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a1 + 288);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4);
  v6 = *a2;
  v5 = a2[1];
  if ( v5 )
    ++*((_QWORD *)v5 + 1);
  v7 = *(_QWORD **)(a1 + 296);
  *(_QWORD *)(a1 + 288) = v6;
  *(_QWORD *)(a1 + 296) = v5;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  v10 = *a2;
  v11.n64_u32[0] = *(_DWORD *)(a1 + 132);
  v12 = (const float *)&dword_58EBB0;
  v13.n64_u64[0] = vld1_dup_f32(v12).n64_u64[0];
  v11.n64_f32[1] = *(float *)(a1 + 136) + *(float *)(a1 + 144);
  v13.n64_f32[0] = *(float *)(a1 + 140) * 0.5;
  v21 = vsub_f32(vadd_f32(v11, v13), vmul_f32(*(float32x2_t *)((char *)*a2 + 140), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  Caver::Vector2::Rounded(&v22, (Caver::Vector2 *)&v21);
  v14 = *(Caver::GUIView **)((char *)*a2 + 140);
  v23 = v22;
  v24 = v14;
  Caver::GUIView::SetFrame(v10, (const Caver::Rectangle *)&v23);
  v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 96LL);
  v23 = (__int64)*a2;
  v16 = a2[1];
  v24 = v16;
  if ( v16 )
    ++*((_QWORD *)v16 + 1);
  result = v15(a1, &v23);
  v18 = v24;
  if ( v24 )
  {
    v19 = *((_QWORD *)v24 + 1) - 1LL;
    *((_QWORD *)v24 + 1) = v19;
    if ( !v19 )
    {
      result = (*(__int64 (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v18 + 16LL))(v18);
      v20 = *((_QWORD *)v18 + 2) - 1LL;
      *((_QWORD *)v18 + 2) = v20;
      if ( !v20 )
        return (*(__int64 (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v18 + 24LL))(v18);
    }
  }
  return result;
}

