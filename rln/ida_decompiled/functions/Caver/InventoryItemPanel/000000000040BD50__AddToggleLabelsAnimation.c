/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040BD50
 * Mangled: _ZN5Caver18InventoryItemPanel24AddToggleLabelsAnimationEv
 * Demangled: Caver::InventoryItemPanel::AddToggleLabelsAnimation(void)
 *
 * Callers: 1
 *   0x00000000001FB300  Caver::InventoryItemPanel::AddToggleLabelsAnimation(void)
 *
 * Callees: 17
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8090  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000002033A0  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000040C508  Caver::InventoryItemPanel::ToggleLabelsFadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *   0x000000000040D420  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryTrinketSlot,Caver::InventoryTrinketSlot>(boost::shared_ptr<Caver::InventoryTrinketSlot> const*,Caver::InventoryTrinketSlot *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 170
 *   insn=0x000000000040BD64 string=0x000000000040BD68 "U"
 *   insn=0x000000000040BD7C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000040BD80 string=0x000000000040BD84 "{"
 *   insn=0x000000000040BD84 string=0x00000000001F4B70 "P'"
 *   insn=0x000000000040BD98 string=0x00000000001FABF0 "0'"
 *   insn=0x000000000040BDC0 string=0x00000000001F8090 "0'"
 *   insn=0x000000000040BDD0 string=0x000000000040BDD4 "\n"
 *   insn=0x000000000040BDD4 string=0x000000000040BDD8 "J"
 *   insn=0x000000000040BDD8 string=0x000000000040BDDC "\n"
 *   insn=0x000000000040BDE4 string=0x000000000040BDE8 "4"
 *   insn=0x000000000040BDEC string=0x000000000040BDF0 ""
 *   insn=0x000000000040BDFC string=0x000000000040BE00 "\t@"
 *   insn=0x000000000040BE0C string=0x000000000040BE10 ""
 *   insn=0x000000000040BE1C string=0x000000000040BE20 "@"
 *   insn=0x000000000040BE2C string=0x000000000040BE30 "4"
 *   insn=0x000000000040BE34 string=0x000000000040BE38 ""
 *   insn=0x000000000040BE44 string=0x000000000040BE48 "\t@"
 *   insn=0x000000000040BE54 string=0x000000000040BE58 ""
 *   insn=0x000000000040BE64 string=0x000000000040BE68 "@"
 *   insn=0x000000000040BE90 string=0x000000000040BE94 "\n"
 *   insn=0x000000000040BE94 string=0x000000000040BE98 "J"
 *   insn=0x000000000040BE98 string=0x000000000040BE9C "\n"
 *   insn=0x000000000040BEA4 string=0x000000000040BEA8 "4"
 *   insn=0x000000000040BEAC string=0x000000000040BEB0 ""
 *   insn=0x000000000040BEBC string=0x000000000040BEC0 "\t@"
 *   insn=0x000000000040BECC string=0x000000000040BED0 ""
 *   insn=0x000000000040BEDC string=0x000000000040BEE0 "@"
 *   insn=0x000000000040BEEC string=0x000000000040BEF0 "4"
 *   insn=0x000000000040BEF0 string=0x000000000040BF34 "H"
 *   insn=0x000000000040BEF4 string=0x000000000040BEF8 ""
 *   insn=0x000000000040BF04 string=0x000000000040BF08 "\t@"
 *   insn=0x000000000040BF14 string=0x000000000040BF18 ""
 *   insn=0x000000000040BF24 string=0x000000000040BF28 "@"
 *   insn=0x000000000040BF44 string=0x000000000040BF48 "t\n@"
 *   insn=0x000000000040BF58 string=0x000000000040BF5C "w"
 *   insn=0x000000000040BF5C string=0x000000000040BF60 ")EA"
 *   insn=0x000000000040BF64 string=0x000000000040BF68 "\t"
 *   insn=0x000000000040BF6C string=0x000000000040BF70 " "
 *   insn=0x000000000040BF84 string=0x000000000040BF88 "`"
 *   insn=0x000000000040BF84 string=0x00000000001F6B70 "0'"
 *   insn=0x000000000040BF8C string=0x000000000040BF90 ""
 *   insn=0x000000000040BFA4 string=0x000000000040BFA8 "qE"
 *   insn=0x000000000040BFB4 string=0x000000000040BFB8 ")"
 *   insn=0x000000000040BFC0 string=0x000000000040BFC4 "("
 *   insn=0x000000000040BFC8 string=0x000000000040BFCC "h"
 *   insn=0x000000000040BFCC string=0x000000000040BFD0 ""
 *   insn=0x000000000040BFD0 string=0x000000000040BFD4 ""
 *   insn=0x000000000040BFD8 string=0x000000000040BFDC " !"
 *   insn=0x000000000040BFE0 string=0x000000000040BFE4 "!a"
 *   insn=0x000000000040C01C string=0x000000000040C020 "@"
 *   insn=0x000000000040C020 string=0x000000000040C024 ""
 *   insn=0x000000000040C024 string=0x000000000040C028 ""
 *   insn=0x000000000040C02C string=0x000000000040C030 "@"
 *   insn=0x000000000040C030 string=0x000000000040C034 ""
 *   insn=0x000000000040C034 string=0x000000000040C038 ""
 *   insn=0x000000000040C03C string=0x000000000040C040 ""
 *   insn=0x000000000040C040 string=0x000000000040C044 "@"
 *   insn=0x000000000040C060 string=0x000000000040C064 "h"
 *   insn=0x000000000040C064 string=0x000000000040C068 "("
 *   insn=0x000000000040C068 string=0x000000000040C06C ""
 *   insn=0x000000000040C06C string=0x000000000040C070 ""
 *   insn=0x000000000040C078 string=0x000000000040C07C " a"
 *   insn=0x000000000040C094 string=0x000000000040C098 "@"
 *   insn=0x000000000040C098 string=0x000000000040C09C ""
 *   insn=0x000000000040C09C string=0x000000000040C0A0 ""
 *   insn=0x000000000040C0A4 string=0x000000000040C0A8 ""
 *   insn=0x000000000040C0A8 string=0x000000000040C0AC "@"
 *   insn=0x000000000040C0B4 string=0x000000000040C0B8 "h"
 *   insn=0x000000000040C0B8 string=0x000000000040C0BC "("
 *   insn=0x000000000040C0BC string=0x000000000040C0C0 ""
 *   insn=0x000000000040C0C0 string=0x000000000040C0C4 ""
 *   insn=0x000000000040C0CC string=0x000000000040C0D0 " !"
 *   insn=0x000000000040C0E4 string=0x000000000040C0E8 ""
 *   insn=0x000000000040C0F4 string=0x000000000040C0F8 "\t@"
 *   insn=0x000000000040C104 string=0x000000000040C108 ""
 *   insn=0x000000000040C114 string=0x000000000040C118 "@"
 *   insn=0x000000000040C124 string=0x000000000040C128 ""
 *   insn=0x000000000040C130 string=0x000000000040C164 "s"
 *   insn=0x000000000040C134 string=0x000000000040C138 "\t@"
 *   insn=0x000000000040C144 string=0x000000000040C148 ""
 *   insn=0x000000000040C154 string=0x000000000040C158 "@"
 *   insn=0x000000000040C168 string=0x000000000040C16C ""
 *   insn=0x000000000040C16C string=0x00000000001FA5A0 "0'"
 *   insn=0x000000000040C174 string=0x000000000040C178 "."
 *   insn=0x000000000040C178 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000040C17C string=0x000000000040C180 "3"
 *   insn=0x000000000040C180 string=0x000000000040C184 "h"
 *   insn=0x000000000040C184 string=0x000000000040C188 ""
 *   insn=0x000000000040C188 string=0x000000000040C18C "h"
 *   insn=0x000000000040C190 string=0x000000000040C194 "h"
 *   insn=0x000000000040C198 string=0x000000000040C19C "\t@"
 *   insn=0x000000000040C1A0 string=0x000000000040C1A4 "h\n@"
 *   insn=0x000000000040C1A4 string=0x000000000040C1A8 ""
 *   insn=0x000000000040C1A8 string=0x000000000040C1AC "h\n"
 *   insn=0x000000000040C1B0 string=0x000000000040C1B4 "h"
 *   insn=0x000000000040C1B8 string=0x000000000040C1BC "@"
 *   insn=0x000000000040C1D0 string=0x000000000040C204 "3"
 *   insn=0x000000000040C1EC string=0x000000000040C1F0 ""
 *   insn=0x000000000040C1F0 string=0x000000000040C1F4 "A"
 *   insn=0x000000000040C200 string=0x00000000001FA980 "0'"
 *   insn=0x000000000040C204 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000040C220 string=0x000000000040C224 "q"
 *   insn=0x000000000040C22C string=0x000000000040C230 "H"
 *   insn=0x000000000040C230 string=0x000000000040C234 "\t\t@"
 *   insn=0x000000000040C234 string=0x000000000040C238 ")"
 *   insn=0x000000000040C238 string=0x000000000040C23C "\t\t"
 *   insn=0x000000000040C240 string=0x000000000040C244 "\t"
 *   insn=0x000000000040C244 string=0x000000000040C248 ")@"
 *   insn=0x000000000040C24C string=0x000000000040C250 " "
 *   insn=0x000000000040C250 string=0x000000000040C254 "Y"
 *   insn=0x000000000040C264 string=0x000000000040C268 "`"
 *   insn=0x000000000040C264 string=0x000000000040C3C0 "("
 *   insn=0x000000000040C270 string=0x000000000040C274 "(\n"
 *   insn=0x000000000040C274 string=0x000000000040C278 "\t\t@"
 *   insn=0x000000000040C278 string=0x000000000040C27C ")"
 *   insn=0x000000000040C27C string=0x000000000040C280 "\t\t"
 *   insn=0x000000000040C284 string=0x000000000040C288 "\t"
 *   insn=0x000000000040C288 string=0x000000000040C28C ")@"
 *   insn=0x000000000040C290 string=0x000000000040C294 " "
 *   insn=0x000000000040C294 string=0x000000000040C298 "H"
 *   insn=0x000000000040C2A4 string=0x000000000040C2A8 "4"
 *   insn=0x000000000040C2AC string=0x000000000040C2B0 ""
 *   insn=0x000000000040C2BC string=0x000000000040C2C0 "\t@"
 *   insn=0x000000000040C2CC string=0x000000000040C2D0 ""
 *   insn=0x000000000040C2DC string=0x000000000040C2E0 "@"
 *   insn=0x000000000040C2E8 string=0x000000000040C2EC "p"
 *   insn=0x000000000040C2FC string=0x000000000040C300 ""
 *   insn=0x000000000040C304 string=0x000000000040C308 "!"
 *   insn=0x000000000040C30C string=0x000000000040C310 "\t@"
 *   insn=0x000000000040C31C string=0x000000000040C320 ""
 *   insn=0x000000000040C324 string=0x000000000040C328 "!"
 *   insn=0x000000000040C32C string=0x000000000040C330 "@"
 *   insn=0x000000000040C338 string=0x000000000040C33C "\"
 *   insn=0x000000000040C344 string=0x000000000040C348 "8"
 *   insn=0x000000000040C354 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000040C358 string=0x000000000040C35C "Z"
 *   insn=0x000000000040C364 string=0x000000000040C368 "h"
 *   insn=0x000000000040C368 string=0x000000000040C36C "("
 *   insn=0x000000000040C36C string=0x000000000040C370 ""
 *   insn=0x000000000040C370 string=0x000000000040C374 ""
 *   insn=0x000000000040C37C string=0x000000000040C380 " a"
 *   insn=0x000000000040C398 string=0x000000000040C39C "@"
 *   insn=0x000000000040C39C string=0x000000000040C3A0 ""
 *   insn=0x000000000040C3A0 string=0x000000000040C3A4 ""
 *   insn=0x000000000040C3A8 string=0x000000000040C3AC ""
 *   insn=0x000000000040C3AC string=0x000000000040C3B0 "@"
 *   insn=0x000000000040C3B8 string=0x000000000040C3BC "h"
 *   insn=0x000000000040C3C0 string=0x000000000040C3C4 ""
 *   insn=0x000000000040C3C4 string=0x000000000040C3C8 ""
 *   insn=0x000000000040C3D0 string=0x000000000040C3D4 " !"
 *   insn=0x000000000040C3E8 string=0x000000000040C3EC ""
 *   insn=0x000000000040C3F8 string=0x000000000040C3FC "\t@"
 *   insn=0x000000000040C408 string=0x000000000040C40C ""
 *   insn=0x000000000040C418 string=0x000000000040C41C "@"
 *   insn=0x000000000040C428 string=0x000000000040C42C ""
 *   insn=0x000000000040C438 string=0x000000000040C43C "\t@"
 *   insn=0x000000000040C448 string=0x000000000040C44C ""
 *   insn=0x000000000040C458 string=0x000000000040C45C "@"
 *   insn=0x000000000040C470 string=0x000000000040C474 "h"
 *   insn=0x000000000040C474 string=0x000000000040C478 "\t\t@"
 *   insn=0x000000000040C478 string=0x000000000040C47C ")"
 *   insn=0x000000000040C47C string=0x000000000040C480 "\t\t"
 *   insn=0x000000000040C484 string=0x000000000040C488 "\t"
 *   insn=0x000000000040C488 string=0x000000000040C48C ")@"
 *   insn=0x000000000040C490 string=0x000000000040C494 " "
 *   insn=0x000000000040C4AC string=0x000000000040C4B0 "4"
 *   insn=0x000000000040C4B4 string=0x000000000040C4B8 ""
 *   insn=0x000000000040C4C4 string=0x000000000040C4C8 "\t@"
 *   insn=0x000000000040C4D4 string=0x000000000040C4D8 ""
 *   insn=0x000000000040C4E4 string=0x000000000040C4E8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::InventoryItemPanel::AddToggleLabelsAnimation(Caver::InventoryItemPanel *this)
{
  __int64 v2; // x20
  __int64 v3; // x22
  Caver::GUIPropertyValue *v4; // x0
  Caver::GUIPropertyValue *v5; // x0
  unsigned __int64 v6; // x8
  _QWORD *v7; // x9
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x22
  unsigned __int64 v15; // x8
  _QWORD *v16; // x9
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 *v23; // x22
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x23
  int64x2_t v27; // q0
  unsigned __int64 v28; // x8
  _QWORD *v29; // x24
  _QWORD *v30; // x0
  __int64 v31; // x8
  void (__fastcall *v32)(int64x2_t *, int64x2_t *, __int64); // x8
  _QWORD *v33; // x0
  __int64 v34; // x8
  void (__fastcall *v35)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x8
  __int64 result; // x0
  _QWORD *v41; // x19
  __int64 v42; // x8
  __int64 v43; // x8
  unsigned __int64 v44; // [xsp+0h] [xbp-B0h]
  int64x2_t v45; // [xsp+8h] [xbp-A8h] BYREF
  Caver::InventoryItemPanel *v46; // [xsp+18h] [xbp-98h]
  __int64 v47; // [xsp+20h] [xbp-90h] BYREF
  _QWORD *v48; // [xsp+28h] [xbp-88h]
  unsigned __int64 v49; // [xsp+30h] [xbp-80h]
  int64x2_t v50; // [xsp+38h] [xbp-78h] BYREF
  Caver::InventoryItemPanel *v51; // [xsp+48h] [xbp-68h]
  __int64 v52; // [xsp+50h] [xbp-60h]
  _QWORD *v53; // [xsp+58h] [xbp-58h]
  int64x2_t v54; // [xsp+60h] [xbp-50h]
  Caver::InventoryItemPanel *v55; // [xsp+70h] [xbp-40h]
  __int64 v56; // [xsp+78h] [xbp-38h]

  v56 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = operator new(0xC0u);
  Caver::GUIAnimation::GUIAnimation((Caver::GUIAnimation *)v2);
  v52 = v2;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
  boost::detail::sp_enable_shared_from_this();
  v3 = v2;
  *(_DWORD *)(v2 + 48) = 2;
  v5 = (Caver::GUIPropertyValue *)Caver::GUIPropertyValue::ValueWithFloat(&v47, v4, 1.0);
  *(_DWORD *)(v2 + 112) = v47;
  v7 = v48;
  v6 = v49;
  if ( v49 )
    ++*(_QWORD *)(v49 + 8);
  v8 = *(_QWORD **)(v2 + 128);
  *(_QWORD *)(v3 + 120) = v7;
  *(_QWORD *)(v3 + 128) = v6;
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      v5 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        v5 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = (_QWORD *)v49;
  if ( v49 )
  {
    v12 = *(_QWORD *)(v49 + 8) - 1LL;
    *(_QWORD *)(v49 + 8) = v12;
    if ( !v12 )
    {
      v5 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        v5 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = v52;
  Caver::GUIPropertyValue::ValueWithFloat(&v47, v5, 0.0);
  *(_DWORD *)(v14 + 136) = v47;
  v16 = v48;
  v15 = v49;
  if ( v49 )
    ++*(_QWORD *)(v49 + 8);
  v17 = *(_QWORD **)(v14 + 152);
  *(_QWORD *)(v14 + 144) = v16;
  *(_QWORD *)(v14 + 152) = v15;
  if ( v17 )
  {
    v18 = v17[1] - 1LL;
    v17[1] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
  v20 = (_QWORD *)v49;
  if ( v49 )
  {
    v21 = *(_QWORD *)(v49 + 8) - 1LL;
    *(_QWORD *)(v49 + 8) = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  v23 = (__int64 *)v52;
  *(_BYTE *)(v52 + 184) = 0;
  v23[11] = 0x3E80000040000000LL;
  v24 = (_QWORD *)*((_QWORD *)this + 2);
  if ( !v24 || (v25 = v24[1]) == 0 )
  {
    v54.n128_u64[0] = (unsigned __int64)off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
  }
  v26 = *((_QWORD *)this + 1);
  v27 = vdupq_n_s64(0);
  v27.n128_u64[0] = (unsigned __int64)Caver::InventoryItemPanel::ToggleLabelsFadeOutAnimationFinished;
  v24[1] = v25 + 2;
  v54 = v27;
  v55 = this;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v28 = 0;
  }
  else
  {
    v46 = v55;
    v45 = v54;
    v28 = (unsigned __int64)&boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::InventoryItemPanel,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::InventoryItemPanel*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::InventoryItemPanel,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::InventoryItemPanel*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v44 = v28;
  v47 = v26;
  v48 = v24;
  ++v24[2];
  v49 = 0;
  if ( v28 )
  {
    v49 = v28;
    if ( (v28 & 1) == 0 )
    {
      (*(void (__fastcall **)(int64x2_t *, int64x2_t *, _QWORD))(v28 & 0xFFFFFFFFFFFFFFFELL))(&v45, &v50, 0);
      v26 = v47;
      v29 = v48;
      goto LABEL_31;
    }
    v51 = v46;
    v50 = v45;
  }
  v29 = v24;
LABEL_31:
  v30 = (_QWORD *)v23[1];
  *v23 = v26;
  if ( v29 != v30 )
  {
    if ( v29 )
      ++v29[2];
    if ( v30 )
    {
      v31 = v30[2] - 1LL;
      v30[2] = v31;
      if ( !v31 )
        (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
    }
    v23[1] = (__int64)v29;
  }
  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=();
  if ( v49 )
  {
    if ( (v49 & 1) == 0 )
    {
      v32 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v49 & 0xFFFFFFFFFFFFFFFELL);
      if ( v32 )
        v32(&v50, &v50, 2);
    }
    v49 = 0;
  }
  v33 = v48;
  if ( v48 )
  {
    v34 = v48[2] - 1LL;
    v48[2] = v34;
    if ( !v34 )
      (*(void (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
  }
  if ( v44 )
  {
    if ( (v44 & 1) == 0 )
    {
      v35 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v44 & 0xFFFFFFFFFFFFFFFELL);
      if ( v35 )
        v35(&v45, &v45, 2);
    }
  }
  v36 = v24[1] - 1LL;
  v24[1] = v36;
  if ( !v36 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
    v37 = v24[2] - 1LL;
    v24[2] = v37;
    if ( !v37 )
      (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
  }
  v38 = v24[1] - 1LL;
  v24[1] = v38;
  if ( !v38 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
    v39 = v24[2] - 1LL;
    v24[2] = v39;
    if ( !v39 )
      (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
  }
  Caver::GUIView::RemoveAllAnimations(*((Caver::GUIView **)this + 40));
  result = Caver::GUIView::AddAnimation();
  v41 = v53;
  if ( v53 )
  {
    v42 = v53[1] - 1LL;
    v53[1] = v42;
    if ( !v42 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
      v43 = v41[2] - 1LL;
      v41[2] = v43;
      if ( !v43 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v41 + 24LL))(v41);
    }
  }
  return result;
}

